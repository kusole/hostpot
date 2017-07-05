#ifndef SOFTDEAL_H
#define SOFTDEAL_H
#include<QObject>
#include<QString>
class SoftDeal:public QObject
{
    Q_OBJECT

public:
    SoftDeal(QObject *parent=0);
    ~SoftDeal();

    Q_INVOKABLE void getinfo(QString info, int i);

    Q_INVOKABLE void imageSniffer(QStringList info);
    Q_INVOKABLE void dns(QStringList info);
    Q_INVOKABLE void webFlow(QStringList info);
    Q_INVOKABLE void js80(QStringList info);
    Q_INVOKABLE void wireshark(QStringList info);
    Q_INVOKABLE void metasploit(QStringList info);



private:

};


#endif // SOFTDEAL_H
