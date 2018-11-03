#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "wire.h"
#include <QDebug>

wire newWire;
void debugDialog();
void solution();

MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);

}

MainWindow::~MainWindow()
{
  delete ui;
}


void MainWindow::on_red_wire_clicked()
{
  if (ui->red_wire->isChecked())
    {
      newWire.is_red = true;
    }
  else
    {
      newWire.is_red = false;
    }
    solution();
    debugDialog();
    update();

}

void MainWindow::on_blue_wire_clicked()
{
  if (ui->blue_wire->isChecked())
    {
      newWire.is_blue = true;
    }
  else
    {
      newWire.is_blue = false;
    }
    solution();
    debugDialog();
    update();

}

void MainWindow::on_star_clicked()
{
  if (ui->star->isChecked())
    {
      newWire.star = true;
    }
  else
    {
      newWire.star = false;
    }
    solution();
    debugDialog();
    update();

}

void MainWindow::on_led_clicked()
{
  if (ui->led->isChecked())
    {
      newWire.led = true;
    }
  else
    {
      newWire.led = false;
    }
    solution();
    debugDialog();
    update();
}

void MainWindow::on_parallel_port_clicked()
{
  if (ui->parallel_port->isChecked())
    {
      newWire.has_port = true;
    }
  else
    {
      newWire.has_port = false;
    }
    solution();
    debugDialog();
    update();

}

void MainWindow::on_serial_even_clicked()
{
  if (ui->serial_even->isChecked())
    {
      newWire.is_even = true;
    }
  else
    {
      newWire.is_even = false;
    }
    solution();
    debugDialog();
    update();
}



void MainWindow::on_multi_batteries_clicked()
{
  ui->result->setText("HELLO");
  if (ui->multi_batteries->isChecked())
    {
      newWire.has_batteries = true;
    }
  else
    {
      newWire.has_batteries = false;
    }
    solution();
    debugDialog();
    update();
}


void debugDialog()
{

  qDebug() << " White  =" << newWire.is_white << "\n"
           << "Red    =" << newWire.is_red << "\n"
           << "Blue   =" << newWire.is_blue << "\n"
           << "Starred=" << newWire.star << "\n"
           << "LED on =" << newWire.led << "\n"
           << "Ported =" << newWire.has_port << "\n"
           << "Batt.  =" << newWire.has_batteries << "\n"
           << "Even   =" << newWire.is_even << "\n";

}

void MainWindow::update()
{
  if(newWire.cut == true)
    {
      ui->result->setText("CUT");
    }
  else
    {
      MainWindow::ui->result->setText("DONT CUT");
    }

}

void MainWindow::on_resetButton_clicked()
{
  newWire.has_batteries = 0;
  newWire.has_port = 0;
  newWire.is_blue = 0;
  newWire.is_even = 0;
  newWire.is_red = 0;
  newWire.is_white = 0;
  newWire.led = 0;
  newWire.star = 0;
  newWire.cut = true;
  ui->blue_wire->setChecked(false);
  ui->red_wire->setChecked(false);
  ui->star->setChecked(false);
  ui->led->setChecked(false);
  ui->multi_batteries->setChecked(false);
  ui->parallel_port->setChecked(false);
  ui->serial_even->setChecked(false);
  update();
  debugDialog();
}

void solution() //unravelling this is not advised.
{
  if(newWire.is_red)
    {
      if(newWire.is_blue)
        {
          if(newWire.led)
            {
              if(newWire.star)
                {
                 qDebug() << " NO CUT";
                  newWire.cut = false;
                }
               else
                {
                  if(newWire.is_even)
                    {
                      newWire.cut = true;

                    }
                  else
                    {
                      newWire.cut = false;
                    }
                }

            }
          else
          {
            if(newWire.star && newWire.has_port)
              {
                newWire.cut = true;
              }
            else if (newWire.is_even)
              {
                newWire.cut = true;
              }
            else
              {
                newWire.cut = false;
              }
          }
        }
      else
        {
          if(newWire.led)
            {
              if(newWire.star)
                {
                  if(newWire.has_batteries)
                    {
                      newWire.cut = true;
                    }
                  else
                    {
                      newWire.cut = false;
                    }
                }
               else
                {
                  if(newWire.has_batteries)
                    {
                      newWire.cut = true;
                    }
                  else
                    {
                      newWire.cut = false;
                    }
                }

            }
          else
          {
            if(newWire.star)
              {
                newWire.cut = true;
              }
            else if (newWire.is_even)
              {
                newWire.cut = true;
              }
            else
              {
                newWire.cut = false;
              }
          }
        }
    }
  else
    {
      if(newWire.is_blue)
        {
          if(newWire.led)
            {
              if(newWire.star)
                {
                  if(newWire.has_port)
                    {
                      newWire.cut = true;
                    }
                  else
                    {
                      newWire.cut = false;
                    }
                }
              else
                {
                  if(newWire.has_port)
                    {
                      newWire.cut = true;
                    }
                  else
                    {
                      newWire.cut = false;
                    }
                }
            }
          else
            {
              if(newWire.star)
                {
                  newWire.cut = false;
                }
              else if(newWire.is_even)
                {
                  newWire.cut = true;
                }
            }
        }
      else
        {
          if(newWire.led)
            {
              if(newWire.star && newWire.has_batteries)
                {
                  newWire.cut = true;
                }
              else
                {
                  newWire.cut = false;
                }
            }
          else
            {
              newWire.cut = true;
            }
        }
    }
}

