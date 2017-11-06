//import QtQuick 2.6
//import QtQuick.Window 2.2
//import QtQuick 2.2
//import QtQuick 2.0

//Rectangle {
//     width: 200
//     height: 200
//     color: "red"
//     border.color: "black"
//     border.width: 10
//     radius: 5

//     Text{
//        x:300
//        y:300
//        text:"hello wsj"
//     }

//     Text {
//         x:100
//         y:100
//         text: "The value is: " +  Number(4742378.423).toLocaleString(Qt.locale("de_DE"))
//     }
// }



//import QtQuick 2.2
//import QtQuick.Controls 1.2
//Rectangle{

//    width: 320;
//    height: 240;
//    color: "red";


//    //创建一个对象，用来保存计数
//    QtObject{
//        id: attrs;
//        property int  counter;
//        Component.onCompleted: {
//            attrs.counter = 10;
//        }
//    }

//    //用来显示文本消息
//    Text{

//        id:countShow;
//        anchors.centerIn: parent;
//        color:"blue";
//        font.pixelSize: 40;
//    }

//    //定时器，用来修改Text文本的显示
//    Timer{
//        id:countDown;
//        interval: 1000;
//        repeat: true;
//        triggeredOnStart: true;

//        onTriggered: {
//            countShow.text = attrs.counter;
//            attrs.counter -= 1;
//            if(attrs.counter < 0 )
//            {
//                countDown.stop();
//                countShow.text = "Clap Now!!";
//            }
//        }
//    }


//    //触发定时器的开始消息
//    Button{

//        id: startButton;
//        anchors.top: countShow.bottom;
//        anchors.topMargin:  20;
//        anchors.horizontalCenter:  countShow.horizontalCenter;
//        text: "Start";
//        onClicked: {
//            attrs.counter = 10;
//            countDown.start();
//        }

//    }
//}


//import QtQuick 2.6

//Item {
//    Rectangle {
//        id : oneRect
//        x : 120; y : 20
//        width : 100;
//        height : 100
//        color : "green"

//    }

//    Rectangle {
//        id : twoRect
//        anchors.centerIn : oneRect
//        width : 80;
//        height : 80
//        color : "red"
//    }
//}

import QtQuick 2.3
import QtQuick 2.2
import QtQuick.Window 2.0
import QtQuick.Layouts 1.1
import QtQuick.Controls 1.2

//Window {
//    width: 480;
//    height: 320;
//    title: "SplitView";


////    MouseArea {
////        anchors.fill: parent;
////        hoverEnabled: true;
////        cursorShape: (containsMouse
////                      ? (pressed
////                         ? Qt.ClosedHandCursor
////                         : Qt.OpenHandCursor)
////                      : Qt.ArrowCursor);
////    }

//    MouseArea {
//        cursorShape: Qt.WaitCursor;
//        //acceptedButtons: Qt.NoButton
//    }

//    SplitView{
//        anchors.fill:parent;
//        orientation: Qt.Horizontal;
//        Rectangle{
//            id:rect1;
//            width:100;
//            color:"red";
//        }
//        Rectangle{
//            id:rect2;
//            Layout.fillWidth: true;
//            Layout.minimumWidth: 50;
//            color:"blue";
//        }
//        Rectangle{
//            id:rect3;
//            width:100;
//            color:"green";
//        }
//    }
//}


//Rectangle {
//    id: container
//    width: 600; height: 200

//    Rectangle {
//        id: rect
//        width: 50; height: 50
//        color: "red"
//        opacity: (600.0 - rect.x) / 600

//        MouseArea {
//            anchors.fill: parent
//            drag.target: rect
//            drag.axis: Drag.XAxis
//            drag.minimumX: 0
//            drag.maximumX: container.width - rect.width
//            cursorShape: Qt.ForbiddenCursor;
//            acceptedButtons: Qt.NoButton

//        }
//    }
//}



//StackView {
//    delegate: StackViewDelegate {
//        function transitionFinished(properties)
//        {
//            properties.exitItem.x = 0
//            properties.exitItem.rotation = 0
//        }

//        pushTransition: StackViewTransition {
//            SequentialAnimation {
//                ScriptAction {
//                    script: enterItem.rotation = 90
//                }
//                PropertyAnimation {
//                    target: enterItem
//                    property: "x"
//                    from: enterItem.width
//                    to: 0
//                }
//                PropertyAnimation {
//                    target: enterItem
//                    property: "rotation"
//                    from: 90
//                    to: 0
//                }
//            }
//            PropertyAnimation {
//                target: exitItem
//                property: "x"
//                from: 0
//                to: -exitItem.width
//            }
//        }
//    }
//}

//Canvas{
//    width: 400;
//    height: 240;

//    onPaint: {
//        var ctx = getContext("2d");
//        ctx.lineWidth = 2;
//        ctx.strokeStyle = "red";
//        ctx.fillStyle = "blue";

//        ctx.font = "42px sans-serif"
//        ctx.beginPath();
//        //ctx.rect(100,80,120,80);
//        ctx.text("Fill text on Path",10,150);
//        ctx.fill();
//        ctx.stroke();
//    }
//}


Rectangle{
    id:rootItem;
    width:1024
    height:600;

    Rectangle{
        id:rect;
        width: 100;
        height: 100;
        x:20;
        y:20;
        color: "red"
    }
    SpringAnimation{
        id:springX;
        target: rect;
        property: "x";
        spring: 1;
        damping: 0.06;
        epsilon: 0.25;
    }
    SpringAnimation{
        id:springY;
        target: rect;
        property:"y";
        spring: 3;
        damping: 0.06;
        epsilon: 0.25;
    }
    MouseArea{
        anchors.fill: parent;
        onClicked: {
        springX.from = rect.x;
        springX.to = mouse.x +120;
        springX.start();
        springY.from = rect.y;
        springY.to = mouse.y + 120;
        springY.start();
        }
    }
}



