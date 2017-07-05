#!/bin/bash
#network
#Mike.Xu
netka=`ls /sys/class/net | sed -n '1p'`
while : ; do
time=`date +%m"-"%d" "%k":"%M:"%S"`
day=`date +%m"-"%d`
rx_before=`ifconfig $netka|sed -n "5"p|awk '{print $5}'`
tx_before=`ifconfig $netka|sed -n "7"p|awk '{print $5}'`
sleep 2
rx_after=`ifconfig $netka|sed -n "5"p|awk '{print $5}'`
tx_after=`ifconfig $netka|sed -n "7"p|awk '{print $5}'`
rx_result=$[(rx_after-rx_before)/1024]
tx_result=$[(tx_after-tx_before)/1024]

echo $[$rx_result+$tx_result] > ./text/NetSpeed.txt
echo "$time Now_In_Speed: "$rx_result"kbps Now_OUt_Speed: "$tx_result"kbps"
#sleep 2 
done
