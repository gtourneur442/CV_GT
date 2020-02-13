#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtWidgets>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
    QStringListModel *modele;

private slots:
    void clicSelection();
    void clicFonds();
    void clicCadastre();
    void clicIcono();
    void clicFilm();
    //void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
