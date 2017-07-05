import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
import Qt.labs.platform 1.0
import QtQuick.Controls.Material 2.1
import QtCharts 2.2
Rectangle {
    id: root
    color: "#D9EDF7"
    radius: 3
    Item{
        id: tableheader
        width: parent.width
        height: 20

        anchors{
            top: parent.top
            topMargin: 30
            left: parent.left
            leftMargin: 10
            right: parent.right
            rightMargin: 10

        }
        Component{
            id: rectheader
            Rectangle{
                width: headerWidth
                height: 20
                color: "grey"
                Text{
                    id: nameText
                    color: "white"
                    text: qsTr(headername)
                    anchors.centerIn: parent
                    wrapMode: Text.Wrap
                }
            }
        }
        Loader{
            id: headerDesc;
            property int headerWidth: parent.width*0.4
            property string headername: "设备名称";
            sourceComponent: rectheader;
            anchors{left: parent.left}
        }
        Loader{
            id: headerStart;
            property int headerWidth: parent.width*0.6
            property string headername: "IP地址";
            sourceComponent: rectheader;
            anchors{left: headerDesc.right}
        }
    }

    Tablelist{
        id: tableView
        width: parent.width

        anchors{
            top: tableheader.bottom
            topMargin: 5
            left: parent.left
            leftMargin: 10
            bottom: footerimage.top
            bottomMargin: 5
            right: parent.right
            rightMargin: 10
        }
    }

    Image {
        id: footerimage
        source: "qrc:/images/freewifi.jpg"
        width: parent.width
        height: 200
        anchors{
            bottom: parent.bottom

        }

//        fillMode: Image.PreserveAspectFit
    }

}
