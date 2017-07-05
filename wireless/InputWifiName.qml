import QtQuick 2.7
import QtQuick.Layouts 1.3
import QtQuick.Controls 1.4
import QtQuick.Controls.Styles 1.4

Item{
//    width: 240
//    height: 32
//    anchors.centerIn: parent
    property string name: nameinput.text

    Rectangle{
        anchors.fill: parent
        radius: 4
        opacity: 0.2
    }
    Rectangle{
        id: iconwifiname
        anchors.left: parent.left
        width: 30
        height: 30
        color: "#BFC1C2"
        radius: 4
        Image{
            width: 28
            height: 28
            anchors.horizontalCenter:parent.horizontalCenter
            anchors.verticalCenter:parent.verticalCenter
            source: "qrc:/images/wifi.png"

        }
    }

    TextField{
        id: nameinput
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        anchors.left: iconwifiname.right
        anchors.right: parent.right
        horizontalAlignment: TextInput.AlignLeft
        verticalAlignment: TextInput.AlignVCenter
        font.pixelSize: 15
//        font.family: "monaco"
        font.bold: true
        clip: true
        placeholderText: "wifi name"
        textColor: "black"
        style: TextFieldStyle{
            background: Rectangle{
                color: "white"
                radius: 4
                opacity: 0.2

            }
        }
    }
}
