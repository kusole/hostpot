#include "model_clientopt.h"
#include <QDebug>

Model_ClientOpt::Model_ClientOpt(QString device, QString ip, QString mac, QString starttime, QString route, QString netmask){
    m_device=device;
    m_ip=ip;
    m_mac=mac;
    m_starttime=starttime;
    m_route=route;
    m_netmask=netmask;
}

QString Model_ClientOpt::device() const{
    return m_device;
}
QString Model_ClientOpt::ip() const{
    return m_ip;
}
QString Model_ClientOpt::mac() const{
    return m_mac;
}
QString Model_ClientOpt::starttime() const{
    return m_starttime;
}
QString Model_ClientOpt::route() const{
    return m_route;
}
QString Model_ClientOpt::netmask() const{
    return m_netmask;
}

