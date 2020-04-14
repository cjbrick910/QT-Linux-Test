#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>
#include <QMenu>
#include <QMenuBar>
#include <QMainWindow>
//creates a new QWidget class for the main window
class program : public QMainWindow {
    public:
        program(QWidget *parent=0);
};


//method using the program class
program::program(QWidget *parent):QMainWindow(parent) {
  //creating a new QAction object
  QAction *quit = new QAction("&Quit",this);
  //creating a QMenu object
  QMenu *file;
  file = menuBar()->addMenu("&File");
  //adding an action to the menu
  file->addAction(quit);
  //connect the menu to the main app
  connect(quit, &QAction::triggered, qApp, QApplication::quit);
  //create a new QPushButton object "quitBtn" and give it a label "Quit"
  QPushButton *quitBtn = new QPushButton("Quit", this);
  //sets the location of the "quitBtn" button
  quitBtn->setGeometry(50, 40, 75, 30);

  //connects the button to the main app, and tells the application to quit if the button is pressed
  connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}


