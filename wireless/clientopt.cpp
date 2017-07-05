#include "clientopt.h"
#include "model_clientopt.h"
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QIODevice>
#include <QProcess>
#include <QDebug>

struct clientMsg{
    QString ip;
    QString start;
    QString binding;
    QString hardware;
    QString hostname;
};

bool SortByM1( const clientMsg &v1, const clientMsg &v2)
//注意：本函数的参数的类型一定要与vector中元素的类型一致
{
    return v1.ip < v2.ip;//升序排列
}

ClientOpt::ClientOpt(QQmlContext *ctxt){
    m_ctxt = ctxt;
}

void ClientOpt::getClientlistData(){
    dealMsgFromLeases();
    QFile file("./text/clientmsg.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"4Can't open the file!";
    }
    QList<QObject *> data;
    QTextStream input(&file);
    QString linestr("");
    QStringList qslist("");
    while(!input.atEnd()){
        linestr=input.readLine();
        if (linestr=="")break;

        qslist=linestr.split(";");
        data.append(new Model_ClientOpt(qslist[0],qslist[1],qslist[2],qslist[3],qslist[4],qslist[5]));
        //       qDebug()<<qslist[0];
    }
    //    qDebug()<< "ddd";
    m_ctxt->setContextProperty("Model_clientopt",QVariant::fromValue(data));
    file.close();
}

void ClientOpt::dealMsgFromLeases(){

    QFile filedhcpd("/etc/dhcp/dhcpd.conf");
    if(!filedhcpd.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"1Can't open the file!";
        return;
    }
    QTextStream filedhcpdconf(&filedhcpd);

    QString line("");
    QStringList qs("");
    QString routers("");
    QString subnet("");
    while(!filedhcpdconf.atEnd()){
        line=filedhcpdconf.readLine();
        line=line.trimmed();//qianmiankongge
        if(line[0]=='#'||line.isEmpty()){

        }
        else{
            qs=line.split(" ");
            if(qs[0]=="option"){
                if(qs[1]=="routers")routers=qs[2];
                if(qs[1]=="subnet-mask")subnet=qs[2];
            }
        }
    }

    ////////////////////////////////////////////////////////////////////////
    clientMsg msg;
    QVector <clientMsg> msgVec;
    QVector <clientMsg>::iterator iter=msgVec.begin();
    //QFile file("./dhcpd.leases");

    QFile file("/var/lib/dhcp/dhcpd.leases");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"2Can't open the file!";
        return;
    }

    QFile fileoutput("./text/clientmsg.txt");
    if(!fileoutput.open(QIODevice::WriteOnly)){
        qDebug()<<"3Can't open the file!";
        return;
    }
    QTextStream stream(&fileoutput);

    int flag = 1;
    QTextStream input(&file);
    QString linestr("");
    QStringList qslist("");
    while(!input.atEnd()){
        linestr=input.readLine();
        linestr=linestr.trimmed();
        qslist=linestr.split(" ");
        if(qslist[0] == "lease" && flag == 1){
            msg.ip=qslist[1];
            flag = 0;
        }
        if(flag == 0 && qslist[0] == "starts"){
            msg.start = qslist[2]+"-"+qslist[3];
        }
        if(flag == 0 && qslist[0] == "binding"){
            msg.binding = qslist[2];

        }
        if(flag == 0 && qslist[0] == "hardware"){
            msg.hardware = qslist[2];

        }
        if(flag == 0 && qslist[0] == "client-hostname"){
            msg.hostname = qslist[1];

        }
        if(flag == 0 && qslist[0] == "}"){
            flag = 1;

            iter = msgVec.begin();
            for (;iter !=msgVec.end(); iter++){
                if(iter->ip == msg.ip){
                    iter->ip = msg.ip;
                    iter->binding = msg.binding;
                    iter->hardware = msg.hardware;
                    iter->hostname = msg.hostname;
                    iter->start = msg.start;
                    break;
                }
            }
            if(iter==msgVec.end()){
                msgVec.push_back(msg);
            }
            msg.ip = "";
            msg.binding = "";
            msg.hardware = "";
            msg.hostname = "";
            msg.start = "";
        }
    }
    qSort(msgVec.begin(),msgVec.end(),SortByM1);
    for(iter=msgVec.begin();iter != msgVec.end();iter++){
        if(iter->hostname=="")iter->hostname="\"unKnow\";";
        stream<<iter->hostname<<iter->ip<<";"<<
                iter->hardware<<iter->start<<routers<<subnet<<iter->binding<<"\n";
        //        qDebug()<<iter->ip<<iter->binding<<iter->start<<iter->hardware<< iter->hostname;
    }
    file.close();
    fileoutput.close();
    //    qDebug()<<"end..........";
}

void ClientOpt::startNetFlow(){
    QString path=QDir::currentPath();
    qDebug() << path;
    QString command("");//="gnome-terminal -x bash -c " + "\""+ path + "/NetFlow.sh;exec bash\"";
    command.append("gnome-terminal -x bash -c ");
    command.append("\"");
    command.append(path);
    command.append("/text/NetFlow.sh;exec bash\"");
    qDebug() << command;
    QProcess::startDetached(command);
}

QString ClientOpt::getNetFlow(){
    QFile file("./text/NetSpeed.txt");
    if(!file.open(QIODevice::ReadOnly | QIODevice::Text)){
        qDebug()<<"5Can't open the file!";
        return "0";
    }
    QTextStream input(&file);
    QString linestr("");
    linestr=input.readLine();
    qDebug()<<linestr;
    if(linestr.isEmpty())
        return "0";
    else
        return linestr;
}

void ClientOpt::startWifi(QString wifiname){
    qDebug()<<wifiname;
    if(wifiname.isEmpty())return;
    QString path=QDir::currentPath();
    qDebug() << path;
    QString command("");//="gnome-terminal -x bash -c " + "\""+ path + "/NetFlow.sh;exec bash\"";
    command.append("gnome-terminal -x bash -c ");
    command.append("\"");
    command.append(path);
    command.append("/text/FREE.sh ");
    command.append(wifiname);
    command.append(";exec bash\"");
    qDebug() << command;
    QProcess::startDetached(command);
}


void ClientOpt::stopWifi(){
    QString path=QDir::currentPath();
    qDebug() << path;
    QString command("");//="gnome-terminal -x bash -c " + "\""+ path + "/WIFI_STOP.sh;exec bash\"";
    command.append("gnome-terminal -x bash -c ");
    command.append("\"");
    command.append(path);
    command.append("/text/WIFI_STOP.sh;exec bash\"");
    qDebug() << command;
    QProcess::startDetached(command);
}
