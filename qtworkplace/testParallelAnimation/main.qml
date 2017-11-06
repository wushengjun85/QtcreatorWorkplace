import QtQuick 2.6
import QtQuick 2.2

import QtQuick.Window 2.2

Rectangle {
    width: 360;
    height: 260;
    color: "white"
    id:rootItem;

    Rectangle{
        id:rect;
        color: "red";
        width: 50;
        height: 50;
        x:0;
        y:95;

        //ParallelAnimation{
        SequentialAnimation{

            id:anim;
            loops:Animation.Infinite;
            NumberAnimation{
                target:rect;
                property: "x"
                to:320;
                duration:300;
            }
            NumberAnimation{
                target:rect;
                property:"rotation";
                to:360;
                duration:1000;
                loops:3;
            }
            NumberAnimation{
                target:rect;
                property:"radius"
                to:25;
                duration:3000;

            }
        }

        MouseArea{
            id:mouseArea;
            anchors.fill: parent;
            onClicked: {
                    if(anim.paused)
                    {
                        anim.resume()
                    }
                    else if(anim.running)
                    {
                        anim.pause();
                    }
                    else
                    {
                        anim.start();
                    }
                }
            }
        }
}
