import QtQuick 2.7

ListView {
    id: root
    signal select(var device, var ip, var mac, var starttime, var route, var netmask)

    model: Model_clientopt
    clip: true
    boundsBehavior: Flickable.StopAtBounds
    highlight: Rectangle { color: "lightsteelblue"; radius: 3 }
    delegate:Item{
        id: del
        width: parent.width
        height: 25
        MouseArea{
            anchors.fill: parent
            onClicked: {
                root.select(device, ip, mac, starttime, route, netmask)
                rightUpwindows.devices = device;
                rightUpwindows.ips = ip;
                rightUpwindows.macs = mac;
                rightUpwindows.startTimes = starttime;
                rightUpwindows.routes = route;
                rightUpwindows.netmasks = netmask;
//                console.log(device)
                root.currentIndex = index;
            }
        }

        Component{
            id: rectview
            Rectangle{
                Text{
                    visible: isShow
                    text: "*"
                    font.bold: true
                    color: "red"
                    anchors{
                        left: parent.left
                        leftMargin: 5
                        verticalCenter: parent.verticalCenter
                    }
                }

                width: loadWidth
                height: del.height
                color: "transparent"
                Text{
                    id: nameText
                    color: "black"
                    text: name
                    anchors.centerIn: parent
                    wrapMode: Text.Wrap
                }
            }
        }
        Loader{
            id: loadDesc;
            property int loadWidth: del.width*0.5
            property string name: device;
            property bool isShow: true;
            sourceComponent: rectview;
            anchors{left: parent.left}
        }
        Loader{
            id: loadStart;
            property int loadWidth: del.width*0.5
            property string name: ip;
            property bool isShow: false;
            sourceComponent: rectview;
            anchors{left: loadDesc.right}
        }
    }
    Timer {
        id: timer
        interval: 10000
        repeat: true
        triggeredOnStart: true
        running: false
        onTriggered: {
            Clientopt.getClientlistData()
//            console.log(Model_clientopt.devi)
        }
    }
    Component.onCompleted: timer.start();
}
