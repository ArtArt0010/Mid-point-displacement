    import QtQuick 2.15
    import QtQuick.Controls 2.15
    import QtQuick.Layouts 1.15
    import QtQuick.Dialogs
    import MidPointD 1.0
    Window {
        width: 1080
        height: 750
        visible: true
        title: "Mid point displacment"
        color: "#1a1a2e"

        MidPointD {
            id: midPoint
            anchors.fill: parent

            roughness: roughSlider.value
            offset: offsetSlider.value
            iterations: iterSlider.value
            showChunkBorders: showBorders.checked
        }

        MouseArea {
            anchors.fill: parent
            acceptedButtons: Qt.NoButton

            property real lastWheel: 0

            onWheel: (wheel) => {
                midPoint.cameraX -= wheel.angleDelta.y * 0.5
            }
        }

        Rectangle {
                anchors.top: parent.top
                anchors.right: parent.right
                anchors.bottom: parent.bottom
                anchors.margins: 16
                width: 220
                color: "#CC000000"
                radius: 12

                Flickable {
                    anchors.fill: parent
                    anchors.margins: 14
                    contentHeight: panelCol.implicitHeight
                    clip: true

                    ColumnLayout {
                        id: panelCol
                        width: parent.width
                        spacing: 10

                        Text { text: "Итерация: " + iterSlider.value
                                color: "white"; font.pixelSize: 13 }

                        Slider{
                            id: iterSlider
                            from: 1; to: 15; value: 8
                            stepSize: 1
                            Layout.fillWidth: true

                        }
                        Rectangle { height: 1; Layout.fillWidth: true; color: "#44ffffff" }

                        Text { text: "Шероховатость: " + roughSlider.value
                                color: "white"; font.pixelSize: 13 }

                        Slider{
                            id: roughSlider
                            from: 0.1; to: 0.99; value: 0.5
                            stepSize: 0.001
                            Layout.fillWidth: true

                        }
                        Rectangle { height: 1; Layout.fillWidth: true; color: "#44ffffff" }

                        Text { text: "Начальное смещение: " + offsetSlider.value
                                color: "white"; font.pixelSize: 13 }

                        Slider{
                            id: offsetSlider
                            from: 20; to: 300; value: 120
                            stepSize: 1
                            Layout.fillWidth: true

                        }
                        CheckBox {
                            id: showBorders
                            text: "Границы чанков"
                            checked: false
                            contentItem: Text {
                                text: showBorders.text
                                color: "white"
                                leftPadding: showBorders.indicator.width + 4
                            }
                            Layout.fillWidth: true
                        }
                    }
            }

        }
    }
