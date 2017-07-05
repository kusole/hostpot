#ifndef CLIENTOPT_H
#define CLIENTOPT_H

#include <QStringList>
#include <QQmlContext>

class QString;
class ClientOpt : public QObject
{
    Q_OBJECT
public:
    ClientOpt(QQmlContext *ctxt);
    Q_INVOKABLE void getClientlistData();
    Q_INVOKABLE void startNetFlow();
    Q_INVOKABLE QString getNetFlow();
    Q_INVOKABLE void startWifi(QString wifiname);
    Q_INVOKABLE void stopWifi();
    void dealMsgFromLeases();
private:
    QQmlContext *m_ctxt;

};

#endif // CLIENTOPT_H
