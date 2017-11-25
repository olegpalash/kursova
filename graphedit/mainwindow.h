#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QVector>
#include "graphedit.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    bool autoConnectNodes();

private slots:
    void on_widget_edgeSelected(GraphEdge*);
    void on_widget_edgeSelectionLoss();
    void on_widget_nodeSelected(GraphNode*);
    void on_widget_nodeSelectionLoss();
    void on_lineEdit_textEdited(const QString &str);

    void on_btn_firstState_clicked();
    void on_btn_prevState_clicked();
    void on_btn_nextState_clicked();
    void on_btn_lastState_clicked();

    void on_btn_dijkstra_clicked();


    void on_btn_editGraph_clicked();

    void on_saveToFile_triggered();

    void on_openFromFile_triggered();

private:
    Ui::MainWindow *ui;
    QList<Graph> states;
    int stateIdx;
};

#endif // MAINWINDOW_H
