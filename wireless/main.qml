import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
//import Qt.labs.platform 1.0
import QtQuick.Controls.Material 2.1
import QtCharts 2.2

Item {
    visible: true
    width: 1200
    height: 750
//    title: qsTr("wireless")
    Material.theme: Material.Light


    Image {
        id: background
        source: "qrc:/images/blackground.png"
        width: 80
        height: 80
        anchors{
            fill: parent
        }
        fillMode: Image.Tile
    }

    Pane{
        id: header
        width: parent.width
        height: 100
        anchors{
            left: parent.left
            top: parent.top
        }
        Material.elevation: 6
        padding: 0

        Header{
            anchors{
                fill:parent
            }
        }
    }

    Pane{
        id: leftpart
        width: parent.width/3-10
        anchors{
            top: header.bottom
            topMargin: 20
            bottom: parent.bottom
            bottomMargin: 30
            left: parent.left
            leftMargin: 30
        }
        Material.elevation: 10
        padding: 0
        LeftWindows{
            id: leftwindows
            anchors{
                fill: parent
            }
//            leftwindows.tableView.onSelected: {

//            }
        }
    }

    Pane {
        id:leftpartHeader
        height: 30
        width: leftpart.width/2
        anchors{
            left: leftpart.left
            leftMargin: 10
            top: leftpart.top
            topMargin: -10
        }
        Material.elevation: 6
        padding: 0
        Rectangle{
            anchors{
                fill: parent
            }
            color:"#FC930A"
            Label {
                text: qsTr("当前已连接的客户端")
                anchors.centerIn: parent
            }
        }
    }

    Pane{
        id: rightUp
        height: leftpart.height/2
        anchors{
            top: header.bottom
            topMargin: 20

            left: leftpart.right
            leftMargin: 20
            right: parent.right
            rightMargin: 30
        }
        Material.elevation: 10
        padding: 0
        RightUpWindows{
            id: rightUpwindows
            anchors{
                fill: parent
            }
        }
    }
    Pane {
        id:rightUpHeader
        height: 30
        width: leftpart.width/2
        anchors{
            left: rightUp.left
            leftMargin: 10
            top: rightUp.top
            topMargin: -10
        }
        Material.elevation: 6
        padding: 0
        Rectangle{
            anchors{
                fill: parent
            }
            color:"#FC930A"
            Label {
                text: qsTr("客户端具体信息和流量监测")
                anchors.centerIn: parent
            }
        }
    }
    Pane{
        id: rightDown

        anchors{
            top: rightUp.bottom
            topMargin: 20
            bottom: parent.bottom
            bottomMargin: 30
            left: leftpart.right
            leftMargin: 20
            right: parent.right
            rightMargin: 30
        }
        Material.elevation: 10
        padding: 0

        RightDownWindows{
            id: rightDownwindows
            anchors{
                fill: parent
            }

        }

    }
    Pane {
        id:rightDownHeader
        height: 30
        width: leftpart.width/2
        anchors{
            left: rightDown.left
            leftMargin: 10
            top: rightDown.top
            topMargin: -10
        }
        Material.elevation: 6
        padding: 0
        Rectangle{
            anchors{
                fill: parent
            }
            color:"#FC930A"
            Label {
                text: qsTr("渗透测试与信息窃取")
                anchors.centerIn: parent
            }
        }
    }


}
