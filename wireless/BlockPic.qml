import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
import Qt.labs.platform 1.0
import QtQuick.Controls.Material 2.1
import QtCharts 2.2

Pane {
    id: blockpic
    height: 70
    width: 200
    Material.elevation: 10
    padding: 0

    property color blockcolor: "grey";
    property url imagesource: "qrc:/images/avatar.png"
    property string blocktext: "渗透测试与信息窃取"
    Rectangle{
        anchors{
            fill: parent
        }
        color: blockcolor
        radius: 3
        Image{
            id: img
            source: imagesource
            anchors{
                top: parent.top
                topMargin: 5
                left: parent.left
                leftMargin: 5
                bottom: parent.bottom
                bottomMargin: 5
            }
            fillMode: Image.PreserveAspectFit
        }

        Label {
            id: txt
            anchors{
                top: parent.top
                topMargin: 5
                right: parent.right
                rightMargin: 5
                bottom: parent.bottom
                bottomMargin: 10
                left: img.right
                leftMargin: 10
            }
            text: blocktext
            font.pixelSize: 12
            wrapMode: Label.Wrap
        }
    }
}

