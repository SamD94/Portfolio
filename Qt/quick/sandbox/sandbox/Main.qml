import QtQuick
import QtQuick.Window
import QtQuick.Controls
import QtQuick.Controls.Material
import QtQuick.Layouts

Window {
    id: window
    width: 740
    height: 480
    visible: true
    title: qsTr("sandbox")

    Column {
        id: column
        width: 125
        height: 75
        anchors.centerIn: parent

        TextField {
            id: textField
            color: "#000"
            placeholderText: "Type in here..."
            placeholderTextColor: "#555"
        }
        ComboBox {
            id: combobox
            model: ["Temperature", "Length", "Mass"]
        }

        Button {
            id: button
            text: "x * 2"
            Material.background: "#aaa"
            onClicked: textDisplay.text = textField.text * 2
        }
        Text {
            id: textDisplay
        }
    }
}
