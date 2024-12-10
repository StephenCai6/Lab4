#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include "chartserver.h"

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_startStopbutton_clicked();

public slots:
    void logMessage(const QString &msg);

private:
    Ui::MainWindow *ui;
    ChartServer *m_chartServer;
};
#endif // MAINWINDOW_H
