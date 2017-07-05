import QtQuick 2.0
import QtCharts 2.0

Item {
    anchors.fill: parent
    property int currentIndex: -1
    property var lineSeries: chartView.createSeries(ChartView.SeriesTypeSpline, "Network Flow Detect");
    function randomNum(Min, Max) {
        var Range = Max - Min;
        var Rand = Math.random();
        if(Math.round(Rand * Range)==0){
            return Min + 1;
        }else if(Math.round(Rand * Max)==Max)
        {
            index++;
            return Max - 1;
        }else{
            var num = Min + Math.round(Rand * Range) - 1;
            return num;
        }
    }
    ChartView {
        id: chartView
        //        title: "Spline"
        anchors.fill: parent
        antialiasing: true
        legend.alignment: Qt.AlignTop
        animationOptions: ChartView.SeriesAnimations
        dropShadowEnabled: true
        margins {
            bottom : 0
            left : 0
            right : 0
            top : 0
        }
    }
    Timer{
        id: timer
        interval: 2000
        repeat: true
        triggeredOnStart: true
        running: false

        onTriggered: {
            currentIndex++;
            lineSeries.append(currentIndex, Number(Clientopt.getNetFlow()));
            if (currentIndex > 59) {
                currentIndex = 0;
                lineSeries.clear();
                lineSeries.append(currentIndex, Number(Clientopt.getNetFlow()));
            } else {
                if (currentIndex > 3) {
                    chartView.axisX().max = currentIndex + 1;
                    chartView.axisX().min = chartView.axisX().max - 5;
                } else {
                    chartView.axisX().max = 5;
                    chartView.axisX().min = 0;
                }
            }
            chartView.axisX().tickCount = chartView.axisX().max - chartView.axisX().min + 1;
        }
    }
    Component.onCompleted: {
        chartView.axisY().min = 0;
        chartView.axisY().max = 250;
        chartView.axisY().tickCount = 6;
        chartView.axisY().titleText = "speed (kps)";
        chartView.axisX().titleText = "detect time(s)";
        chartView.axisX().labelFormat = "%.0f";
        //Clientopt.startNetFlow();
        timer.start();
    }
}
