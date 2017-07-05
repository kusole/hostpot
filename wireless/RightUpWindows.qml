import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
//import Qt.labs.platform 1.0
import QtQuick.Controls.Material 2.1
import QtCharts 2.2
import QtGraphicalEffects 1.0
Rectangle {
    id: root
    color: "#F2DEDE"
    radius: 3
    property alias devices: device.text
    property alias ips: ip.text
    property alias macs: mac.text
    property alias startTimes: startTime.text
    property alias routes: route.text
    property alias netmasks: netmask.text

    function getsign(){
        if(device.text.trim()===""||ip.text.trim()===""||mac.text.trim()===""||
                startTime.text.trim()===""||route.text.trim()===""||netmask.text.trim()==="")
        {
            errormsg.open()
            return false;
        }

        return device.text.trim()+";"+ip.text.trim()+";"+mac.text.trim()+";"+startTime.text.trim()+";"
                +route.text.trim()+";"+netmask.text.trim()+";"
    }

    Rectangle{
        width: root.width/2
        radius: 4
        anchors{
            top: root.top
            topMargin: 20
            bottom: root.bottom
            bottomMargin: 20
            left: root.left
            leftMargin: 20
            right: netflow.left
            rightMargin: 20
        }
        color: "lightgrey"
        Rectangle{
            id: listheader
            height: 20
            anchors{
                left: parent.left
                leftMargin: 10
                right: parent.right
                rightMargin: 10
                top: parent.top
                topMargin: 10
            }

            color: "grey"
            Text{
                id: nameText
                color: "white"
                text: qsTr("客户端具体信息")
                anchors{
                    left: parent.left
                    leftMargin: 20
                    //                    centerIn: parent
                }
                wrapMode: Text.Wrap
            }
        }



        Row {
            id: devices
            spacing: 20
            width: parent.width
            anchors{
                top: listheader.bottom
                topMargin: 5
                left: parent.left
                leftMargin: 20
            }

            Text {
                text: "Device: "
                height: 30
                width: 100
                verticalAlignment: Text.AlignVCenter
            }

            Text {
                id: device
                height: 30
                verticalAlignment: Text.AlignVCenter
                text: "Xiaomi"
            }

        }
        Rectangle{
            height: 1
            color: "grey"
            anchors{
                top: devices.bottom
                left: parent.left
                leftMargin: 20
                right: parent.right
                rightMargin: 20
            }
        }
        Row {
            id: ipaddress
            spacing: 20
            width: parent.width
            anchors{
                top: devices.bottom
                topMargin: 0
                left: parent.left
                leftMargin: 20
            }

            Text {
                text: "IP: "
                height: 30
                width: 100
                verticalAlignment: Text.AlignVCenter
            }
            Text {
                id: ip
                height: 30
                verticalAlignment: Text.AlignVCenter
                text: "192.168.*.*"
            }
        }
        Rectangle{
            height: 1
            color: "grey"
            anchors{
                top: ipaddress.bottom
                left: parent.left
                leftMargin: 20
                right: parent.right
                rightMargin: 20
            }
        }
        Row {
            id: macaddress
            spacing: 20
            width: parent.width
            anchors{
                top: ipaddress.bottom
                topMargin: 0
                left: parent.left
                leftMargin: 20
            }

            Text {
                text: "MAC: "
                height: 30
                width: 100
                verticalAlignment: Text.AlignVCenter
            }
            Text {
                id: mac
                height: 30
                verticalAlignment: Text.AlignVCenter
                text: ""
//                text: ""
            }
        }
        Rectangle{
            height: 1
            color: "grey"
            anchors{
                top: macaddress.bottom
                left: parent.left
                leftMargin: 20
                right: parent.right
                rightMargin: 20
            }
        }
        Row {
            id: starttime
            spacing: 20
            width: parent.width
            anchors{
                top: macaddress.bottom
                topMargin: 0
                left: parent.left
                leftMargin: 20
            }

            Text {
                text: "StartTime: "
                height: 30
                width: 100
                verticalAlignment: Text.AlignVCenter
            }
            Text {
                id: startTime
                height: 30
                verticalAlignment: Text.AlignVCenter
                text: ""
            }
        }
        Rectangle{
            height: 1
            color: "grey"
            anchors{
                top: starttime.bottom
                left: parent.left
                leftMargin: 20
                right: parent.right
                rightMargin: 20
            }
        }
        Row {
            id: routes
            spacing: 20
            width: parent.width
            anchors{
                top: starttime.bottom
                topMargin: 0
                left: parent.left
                leftMargin: 20
            }

            Text {
                text: "Route: "
                height: 30
                width: 100
                verticalAlignment: Text.AlignVCenter
            }
            Text {
                id: route
                height: 30
                verticalAlignment: Text.AlignVCenter
                text: "192.168.*.*"
            }
        }
        Rectangle{
            height: 1
            color: "grey"
            anchors{
                top: routes.bottom
                left: parent.left
                leftMargin: 20
                right: parent.right
                rightMargin: 20
            }
        }
        Row {
            id: netmasks
            spacing: 20
            width: parent.width
            anchors{
                top: routes.bottom
                topMargin: 0
                left: parent.left
                leftMargin: 20
            }

            Text {
                text: "Netmask: "
                height: 30
                width: 100
                verticalAlignment: Text.AlignVCenter
            }
            Text {
                id: netmask
                height: 30
                verticalAlignment: Text.AlignVCenter
                text: "255.255.255.0"
            }
        }
        Rectangle{
            height: 1
            color: "grey"
            anchors{
                top: netmasks.bottom
                left: parent.left
                leftMargin: 20
                right: parent.right
                rightMargin: 20
            }
        }
    }

    Rectangle{
        id: netflow
        width: root.width/2-20
        radius: 4
        anchors{
            top: root.top
            topMargin: 20
            bottom: root.bottom
            bottomMargin: 20
            right: root.right
            rightMargin: 20

        }
        NetFlowShow{
            id: netflowshow

        }
    }


    Dialog {
        id: errormsg
        width: 280
        height: 140
        x: (parent.width - width) / 2
        y: (parent.height - height) / 2
        parent: ApplicationWindow.overlay
        modal: true
        title: "错误警告!"
        standardButtons: Dialog.Ok
        Label {
            text: "您必须选择一个客户端              "
            font.pixelSize: 13
        }

    }

}
