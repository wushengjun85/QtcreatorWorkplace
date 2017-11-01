import QtQuick 2.6
import QtQuick.Window 2.2

//Window {
//    visible: true
//    width: 640
//    height: 480
//    title: qsTr("Hello World")

//    MainForm {
//        anchors.fill: parent
//        mouseArea.onClicked: {
//            console.log(qsTr('Clicked on background. Text: "' + textEdit.text + '"'))
//        }
//    }
//}

Item {
    width: 920
    height: 620

    Rectangle {
        color: "red"
        width: 120
        height: 120

        // This is the behavior, and it applies a NumberAnimation to any attempt to set the x property
        Behavior on x {

            NumberAnimation {
                //This specifies how long the animation takes
                duration: 600
                //This selects an easing curve to interpolate with, the default is Easing.Linear
                easing.type: Easing.OutBounce
            }
        }

        MouseArea {
            anchors.fill: parent
            onClicked: parent.x == 0 ? parent.x = 500 : parent.x = 0
        }
    }
}

