#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QMenu>
#include <QMenuBar>
#include <QMainWindow>
#include <QStatusBar>
//creates a new class for the main window
class program : public QMainWindow {
  Q_OBJECT  

  public:
    program(QWidget *parent = 0);
 
  private slots:
    void toggleStatusbar();

  private:
    QAction *viewst;
};
