iw wlan0 del

echo y | airmon-ng start wlan0 
wk=`ls /sys/class/net | sed -n '$p'`
airmon-ng stop $wk
