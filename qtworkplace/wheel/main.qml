import QtQuick 2.0
import QtQuick.Window 2.0

Window {
    id:root;
    visible: true;
    width: 600;
    height: 400;

    Text {
        id: texttest
        text: qsTr("text")
        color: "red"
    }

    Image {
        id: bg
        width: root.width;
        height:root.height;
        source: "qrc:///images/bg.png";// 路径根据自己设置的修改
    }

    Image {
        id: wheel;
        anchors.centerIn: parent;

//        x:0
//        y:100


        //source: "qrc:///images/wheel.png";// 路径根据自己设置的修改  Zhizhen
        source: "qrc:///images/Zhizhen.png";// 路径根据自己设置的修改
        Behavior on rotation {

            NumberAnimation {
                duration: 5000
            }
        }

        MouseArea {
            width: wheel.width;
            height: wheel.height;

            onClicked: {
                wheel.rotation = 360;
            }
        }
    }

}
