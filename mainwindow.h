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
  void update();
  ~MainWindow();

private slots:

  void on_red_wire_clicked();

  void on_blue_wire_clicked();

  void on_star_clicked();

  void on_led_clicked();

  void on_parallel_port_clicked();

  void on_serial_even_clicked();

  void on_multi_batteries_clicked();

  void on_resetButton_clicked();

private:
  Ui::MainWindow *ui;
};


#endif // MAINWINDOW_H
