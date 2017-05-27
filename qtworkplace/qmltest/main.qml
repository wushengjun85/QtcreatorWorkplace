import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick 2.2

Rectangle {
    id:u1
    width: 800
    height:600
    color: "blue"

    Rectangle{
        anchors.left: u1.right
        width: 200;
        height:200;
        color: "red"
    }
}
