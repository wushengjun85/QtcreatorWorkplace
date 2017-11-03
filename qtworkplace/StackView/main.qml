
/*可以作为多页面切换的qml 程序样本*/

import QtQuick 2.6
import QtQuick.Window 2.2
import QtQuick 2.4
import QtQuick.Controls 1.3
import QtQuick.Window 2.2

Window {
    title: "StackViewDemo";
    width: 800;
    height: 480;
    visible: true;

    flags:Qt.FramelessWindowHint   //添加了这一句

    StackView {
        id: stack;
        anchors.centerIn: parent;
        width: 800;
        height: 480;
        property var home: null;

        Image {
            id: name
            source: "4YZT-10.bmp"
        }

        Text {
            text: "Click to create first page";
            font.pointSize: 14;
            font.bold: true;
            color: "blue";
            anchors.centerIn: parent;
            MouseArea {
                anchors.fill: parent;
                onClicked: if(stack.depth == 0)stack.push(page);
            //duration: 300
            }
        }
    }

    Component {
        id: page;

        Rectangle {
            color: Qt.rgba(stack.depth*0.1, stack.depth*0.2, stack.depth*0.3);

            Text {
                anchors.centerIn: parent;
                text: "depth - " + stack.depth;
                font.pointSize: 24;
                font.bold: true;
                color: stack.depth <= 4 ? Qt.lighter(parent.color) : Qt.darker(parent.color);


            }
            Image {
                id: name1
                x:0
                y:0
                source: "4YZT-10.bmp"
            }

            Button {
                id: next;
                anchors.right: parent.right;
                anchors.bottom: parent.bottom;
                anchors.margins: 8;
                text: "Next";
                width: 70;
                height: 30;
                onClicked: {
                    if(stack.depth < 8) stack.push(page);
                }
            }

            Button {
                id: back;
                anchors.right: next.left;
                anchors.top: next.top;
                anchors.rightMargin: 8;
                text: "Back";
                width: 70;
                height: 30;
                onClicked: {
                    if(stack.depth > 0) stack.pop();
                }
            }

            Button {
                id: home;
                anchors.right: back.left;
                anchors.top: next.top;
                anchors.rightMargin: 8;
                text: "Home";
                width: 70;
                height: 30;
                onClicked: {
                    if(stack.depth > 0)stack.pop(stack.initialItem);
                }
            }

            Button {
                id: clear;
                anchors.right: home.left;
                anchors.top: next.top;
                anchors.rightMargin: 8;
                text: "Clear";
                width: 70;
                height: 30;
                onClicked: {
                    if(stack.depth > 0)stack.clear();
                }


            }
        }
    }
}
