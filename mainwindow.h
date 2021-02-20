#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "HalconCpp.h"
#include "ImageDisplay.h"
#include <QTimer>

using namespace HalconCpp;

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit MainWindow(QWidget* parent = 0);
    ~MainWindow();

private slots:

    void on_btnRect_clicked();

    void on_btnRotateRect_clicked();

    void on_btnCircle_clicked();

    void on_btnThreshold_clicked();

    void on_btnAddPic_clicked();

    void on_btnEllipse_clicked();

    void on_btnBlob_clicked();

    void on_btnShowOrigin_clicked();

    void on_btnLive_clicked();

    void on_btnCheck_clicked();

    void on_btnStop_clicked();

    void RunCircle();

private:
    void              InitData();
    void              InitUi();
    HalconCpp::HTuple QString2Tuple(QString str);

private:
    ImageDisplay*   m_imageDisplay;
    QTimer          m_timer;
    Ui::MainWindow* ui;
};

#endif  // MAINWINDOW_H
