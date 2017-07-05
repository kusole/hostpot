import QtQuick 2.7
import QtQuick.Controls 2.1
import QtQuick.Layouts 1.1
import Qt.labs.platform 1.0
import QtQuick.Controls.Material 2.1
import QtCharts 2.2
//import an.qt.softdeal 1.0

Item {
    id: pane
    anchors.fill: parent
    Component {
        id: funtionModel
        ListModel{
            ListElement{
                bc: "lightsteelblue"
                bt: "图片嗅探"
                img: "qrc:/images/test.png"
            }
            ListElement{
                bc: "lightsteelblue"
                bt: "DNS劫持"
                img: "qrc:/images/test1.png"
            }
            ListElement{
                bc: "lightsteelblue"
                bt: "网络扫描"
                img: "qrc:/images/test2.png"
            }
            ListElement{
                bc: "lightsteelblue"
                bt: "密码嗅探"
                img: "qrc:/images/test3.png"
            }
            ListElement{
                bc: "lightsteelblue"
                bt: "wireshark抓包"
                img: "qrc:/images/test4.png"
            }
            ListElement{
                bc: "lightsteelblue"
                bt: "Metasploit渗透"
                img: "qrc:/images/test5.png"
            }

        }
    }

    Component {
        id: funtionDelegate
        Item {
            id: wrapper
            width: funtionView.cellWidth
            height: funtionView.cellHeight
            Rectangle {
                id: a
                anchors.centerIn: parent.Center

                BlockPic{
                    id: block1
                    anchors{
                        left: parent.left
                        leftMargin: 20
                        top: parent.top
                        topMargin: 30
                    }
                    blockcolor: bc
                    blocktext: bt
                    imagesource: img
                }

                ButtonPic{
                    color: "green"
                    height: 25
                    width: 60
                    anchors{
                        right: block1.right
                        rightMargin: 10
                        bottom: block1.bottom
                        bottomMargin: -height/2
                    }

                    animate: true
                    text: "开始"
                    font.pointSize : 10
                    onClicked: {
                        wrapper.GridView.view.currentIndex = index;
                        var signinfo = rightUpwindows.getsign()
                        if(signinfo){
                            switch(index){
                            case 0:
                                Softdeal.getinfo(signinfo, 0)
                                break;
                            case 1:
                                Softdeal.getinfo(signinfo, 1)
                                break;
                            case 2:
                                Softdeal.getinfo(signinfo, 2)
                                break;
                            case 3:
                                Softdeal.getinfo(signinfo, 3)
                                break;
                            case 4:
                                Softdeal.getinfo(signinfo, 4)
                                break;
                            case 5:
                                Softdeal.getinfo(signinfo, 5)
                                break;
                            }
                        }
                    }
                }
            }
        }
    }

    GridView {
        id: funtionView;
        anchors{
            top: parent.top
            topMargin: 20
            left: parent.left
            leftMargin: 20
            right: parent.right
            rightMargin: 20
            bottom: parent.bottom
            bottomMargin: 20
        }

        cellWidth: funtionView.width/3
        cellHeight: funtionView.height/2
        delegate: funtionDelegate
        model: funtionModel.createObject(funtionView)
        focus: true
    }
}
