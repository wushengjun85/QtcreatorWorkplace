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


//import QtQuick 2.0

//Rectangle {
//    id: rect
//    width: 1024; height: 600
//    color: "red"

//    ParallelAnimation {
//        running: true
//        NumberAnimation { target: rect; property: "x"; to: 50; duration: 1000 }
//        NumberAnimation { target: rect; property: "y"; to: 50; duration: 1000 }
//    }
//}




//import QtQuick 2.0
//Rectangle {
//    width: 1020; height: 600
//    color: "red"

//    NumberAnimation on x {
//        easing.type: Easing.InOutSine
//        to: 900; duration: 3000 }
//}

import QtQuick 2.0

Rectangle {
    id: rect
    width: 1000; height: 1000
    color: "red"

    SequentialAnimation {
        running: true
        NumberAnimation { target: rect; property: "x";easing.type: Easing.InOutSine; from:0; to: 500; duration: 5000 }
        NumberAnimation { target: rect; property: "y";easing.type: Easing.InOutSine; from:0; to: 500; duration: 5000 }
    }
}
