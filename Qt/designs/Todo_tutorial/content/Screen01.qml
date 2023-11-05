

/*
This is a UI file (.ui.qml) that is intended to be edited in Qt Design Studio only.
It is supposed to be strictly declarative and only uses a subset of QML. If you edit
this file manually, you might introduce QML code that is not supported by Qt Design Studio.
Check out https://doc.qt.io/qtcreator/creator-quick-ui-forms.html for details on .ui.qml files.
*/
import QtQuick 6.4
import QtQuick.Controls 6.4
import Todo_tutorial
import QtQuick.Layouts 1.0

Rectangle {
    id: rectangle
    width: Constants.width
    height: Constants.height
    color: "#c9efe4"
    property bool isDialogOpen: false

    Text {
        id: text1
        height: 36
        text: qsTr("To-do List")
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        font.pixelSize: 36
        horizontalAlignment: Text.AlignHCenter
        verticalAlignment: Text.AlignVCenter
        anchors.rightMargin: 10
        anchors.leftMargin: 10
        anchors.topMargin: 10
    }

    Rectangle {
        id: addToDoDialog
        x: 10
        y: 533
        width: 380
        height: 200
        visible: rectangle.isDialogOpen
        color: "#ffffff"
        radius: 30
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: addToDoButton.top
        anchors.rightMargin: 10
        anchors.leftMargin: 10
        anchors.bottomMargin: 10

        TextField {
            id: toDoInput
            height: 60
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.top: parent.top
            anchors.rightMargin: 25
            anchors.leftMargin: 25
            anchors.topMargin: 25
            placeholderText: qsTr("Thing to do...")
        }

        RowLayout {
            y: 152
            anchors.left: parent.left
            anchors.right: parent.right
            anchors.bottom: parent.bottom
            spacing: 50
            anchors.bottomMargin: 25
            anchors.rightMargin: 25
            anchors.leftMargin: 25
            Button {
                id: addButton
                text: qsTr("Add")
                Layout.fillWidth: true

                Connections {
                    target: addButton
                    onClicked: rectangle.isDialogOpen = false
                }

                Connections {
                    target: addButton
                    onClicked: myListModel.append(myListModel.createListElement())
                }
            }

            Button {
                id: cancelButton
                text: qsTr("Cancel")
                Layout.fillWidth: true

                Connections {
                    target: cancelButton
                    onClicked: rectangle.isDialogOpen = false
                }

                Connections {
                    target: cancelButton
                    onClicked: toDoInput.text = ""
                }
            }
        }
    }

    states: [
        State {
            name: "clicked"
            when: addToDoButton.checked
        }
    ]
    Button {
        id: addToDoButton
        y: 262
        text: qsTr("Add to-do item")
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.bottom: parent.bottom
        flat: false
        highlighted: false
        anchors.bottomMargin: 10
        anchors.rightMargin: 10
        anchors.leftMargin: 10

        Connections {
            target: addToDoButton
            onClicked: rectangle.isDialogOpen = !rectangle.isDialogOpen
        }
    }

    Column {
        id: column
        anchors.left: parent.left
        anchors.right: parent.right
        anchors.top: parent.top
        anchors.bottom: parent.bottom
        spacing: 10
        anchors.rightMargin: 10
        anchors.leftMargin: 10
        anchors.bottomMargin: 100
        anchors.topMargin: 50

        Repeater {
            id: repeater
            anchors.fill: parent
            model: ListModel {
                id: myListModel
                ListElement {
                    name: "My To-do"
                }
                function createListElement() {
                    return {
                        "name": toDoInput.text
                    }
                }
            }

            Rectangle {
                id: toDoItem
                x: 0
                y: 6
                height: 60
                visible: true
                color: "#ffffff"
                radius: 30
                anchors.left: parent.left
                anchors.right: parent.right
                anchors.top: text1.bottom
                anchors.rightMargin: 10
                anchors.leftMargin: 10
                anchors.topMargin: 10

                CheckBox {
                    id: checkBox
                    text: name
                    anchors.left: parent.left
                    anchors.right: parent.right
                    anchors.top: parent.top
                    anchors.bottom: parent.bottom
                    anchors.rightMargin: 25
                    anchors.topMargin: 10
                    anchors.bottomMargin: 10
                    anchors.leftMargin: 25
                }
            }
        }
    }
}
