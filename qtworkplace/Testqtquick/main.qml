import QtQuick 2.6
import QtQuick.Window 2.2
/*
Window {
    visible: true
    width: 800
    height: 600
    title: qsTr("Hello World")

    property int num: 0

    Image {
        id: myImage
        width: 800
        height: 600
        source: "qrc:/yongmeng.bmp"
    }
    Image {
        id: zhizhen
        x:373
        y:130
//        anchors.centerIn: parent;
        source: "qrc:/85.png"
        Behavior on rotation { }//SpringAnimation { spring: 1; damping: 0.9 } }
        //transform: Rotation{origin.x:-27;origin.y:-195}
        transformOrigin:Item.Bottom

//        Behavior on rotation {

//            NumberAnimation {
//                duration: 15000
//            }
//        }
    }
    Item {
        Timer {
            interval: 100; running: true; repeat: true
            onTriggered: zhizhen.rotation = num++//time.text = Date().toString()
        }

        Text { id: time }
    }


    Item {
        width: 800; height: 600

        Rectangle {
            id: rect
            width: 50; height: 50
            color: "red"

            Behavior on x { SpringAnimation { spring: 5; damping: 0.9 } }
            Behavior on y { SpringAnimation { spring: 5; damping: 0.9 } }
        }

        MouseArea {
            anchors.fill: parent
            onClicked: {
                rect.x = mouse.x - rect.width/2
                rect.y = mouse.y - rect.height/2

                //zhizhen.rotation = 60
            }
        }
    }

//    MainForm {
//        anchors.fill: parent
//        mouseArea.onClicked: {
//            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
//        }
//    }
}
*/

Window {
    id:root;
    visible: true;
    width: 800;
    height: 600;

    property int hour

    Image {
        id: bg

        width: root.width;
        height:root.height;
        source: "qrc:///yongmeng.bmp";// 路径根据自己设置的修改
    }


        Image {
            //x: 93.5; y: 17
             x: 373; y: 130
            source: "qrc:///85.png";// 路径根据自己设置的修改
            transform: Rotation {
                id: wheel
                //origin.x: 25; origin.y: 83;
                origin.x:35 ;origin.y:170
                angle:  root.hour*6
                Behavior on angle {
                    SpringAnimation { spring: 2; damping: 0.2; modulus: 360 }
                }
            }
        }

        Timer {
            interval: 100; running: true; repeat: true;
            onTriggered:hour++
        }

}
