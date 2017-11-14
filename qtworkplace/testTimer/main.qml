import QtQuick 2.2
import QtQuick.Controls 1.2

//Rectangle{

//    width: 320;
//    height: 240;
//    color: "gray";


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



import QtQuick 2.0

//Item {
//    width: 100; height: 100

//    Component {
//        id: redSquare

//        Rectangle {
//            color: "red"
//            width: 10
//            height: 10
//        }
//    }

//    Loader { sourceComponent: redSquare }
//    Loader { sourceComponent: redSquare; x: 20 }
//}


