import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
//import Qt.labs.platform 1.0
import QtQuick.Controls.Material 2.1
import QtCharts 2.2

Rectangle{
    id: root
    Image {
        id: headerback
        source: "qrc:/images/headermenu.png"
        width: 80
        height: 80
        anchors{
            fill: parent
        }
        fillMode: Image.Tile
    }

    Logo{
        id: logo
        anchors{
            left: parent.left
            leftMargin: 25
            top: parent.top
            topMargin: 10
        }
    }
    Text{
        id: title
        text: "基于无线热点的网络渗透管理平台"
        color: "white"
        font{
            pixelSize: 23
        }
        anchors{
            top: logo.top
            topMargin: 10
            left: logo.right
            leftMargin: 20
        }
    }
    Text{
        text: "Wireless HP penetration management platform"
        color: "white"
        font{
            pixelSize: 13
        }
        anchors{
            top: title.bottom
            topMargin: 5
            left: logo.right
            leftMargin: 20
        }
    }

    Button {
        id: buttonstop
        anchors{
            right: parent.right
            rightMargin: 30
            bottom: parent.bottom
            bottomMargin: 10
        }
        width: 60
        height: 40
        text: "停止"
//                highlighted: true
        Material.background: Material.Orange
    }
    Button {
        id: buttonstart
        anchors{
            right: buttonstop.left
            rightMargin: 20
            bottom: parent.bottom
            bottomMargin: 10
        }
        width: 60
        height: 40
        text: "开始"
        //        highlighted: true
        Material.background: Material.Green
        onClicked: {
            console.log("wifiname: "+ wifiname.name)
            Clientopt.startWifi(wifiname.name)
        }
    }

    InputWifiName {
        id: wifiname
        width: 180
        height: 30
        anchors{
            right: buttonstart.left
            rightMargin: 20
            bottom: parent.bottom
            bottomMargin: 15
        }
    }

}
