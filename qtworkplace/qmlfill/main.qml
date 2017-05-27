import QtQuick 2.6
import QtQuick.Window 2.2

Rectangle {
    id:u1
    width:800
    height:600

    Rectangle
    {
        id:u2
        anchors.fill: parent
        width: 200
        height: 200
        border.color: "red"

    }
    Rectangle
    {
        id:u3
        anchors.centerIn: parent
        width: 200
        height: 200
        border.width: 20;
        border.color: "black"
        antialiasing: true
        color: "red"
    }

}
