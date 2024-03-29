#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private slots:
    void send_to_lcd_button_cicked();
    void on_pushButton_2_clicked();

    void on_led_button_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
