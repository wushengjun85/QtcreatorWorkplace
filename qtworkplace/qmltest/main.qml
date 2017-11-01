import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick 2.2

import QtQuick 2.0

//Rectangle {
//    id:u1
//    width: 800
//    height:600
//    //color: "blue"

//    Rectangle{
//        id:rectangle1

//        anchors.left: u1.left
//        anchors.leftMargin: 20
//        anchors.top: u1.top
//        anchors.topMargin: 20

//        width: 200;
//        height:200;
//        color: "red"

//        gradient: Gradient
//        {
//            GradientStop{position: 0.0; color: "white"}
//            GradientStop{position: 1.0; color: "black"}
//        }
//    }
//    Rectangle{
//        id:retangle2

//        anchors.left: rectangle1.right
//        anchors.leftMargin: 20
//        anchors.top:rectangle1.top



//        width:200
//        height:200
//        color: "green"

//    }
//}

Rectangle {
     width: 200
     height: 200
     color: "red"
     border.color: "black"
     border.width: 10
     radius: 5

     Text {
         x:100
         y:100
         text: "The value is: " +  Number(4742378.423).toLocaleString(Qt.locale("de_DE"))
     }
 }





