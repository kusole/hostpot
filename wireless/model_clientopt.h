#ifndef MODEL_CLIENTOPT_H
#define MODEL_CLIENTOPT_H

#include <QObject>

class Model_ClientOpt : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString device READ device NOTIFY deviceChanged)
    Q_PROPERTY(QString ip READ ip NOTIFY ipChanged)
    Q_PROPERTY(QString mac READ mac NOTIFY macChanged)
    Q_PROPERTY(QString starttime READ starttime NOTIFY starttimeChanged)
    Q_PROPERTY(QString route READ route NOTIFY routeChanged)
    Q_PROPERTY(QString netmask READ netmask NOTIFY netmaskChanged)
public:
    Model_ClientOpt(QString device, QString ip, QString mac, QString starttime, QString route, QString netmask);
    QString device() const;
    QString ip() const;
    QString mac() const;
    QString starttime() const;
    QString route() const;
    QString netmask() const;

signals:
    void deviceChanged();
    void ipChanged();
    void macChanged();
    void starttimeChanged();
    void routeChanged();
    void netmaskChanged();

private:
    QString m_device;
    QString m_ip;
    QString m_mac;
    QString m_starttime;
    QString m_route;
    QString m_netmask;

};


#endif // MODEL_CLIENTOPT_H
