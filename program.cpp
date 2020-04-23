#include "program.h"
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>
#include <QTextEdit>
#include <QToolBar>
#include <QStatusBar>

//method using the program class
program::program(QWidget *parent):QMainWindow(parent) {
  /*This section of code was removed to make room for the main widget (a text editor).
   * uncomment the code to make the quit button show up again
   */
  //create a new QPushButton object "quitBtn" and give it a label "Quit"
    // QPushButton *quitBtn = new QPushButton("Quit", this);
  //sets the location of the "quitBtn" button
    //quitBtn->setGeometry(50, 40, 75, 30);
  //sets the tooltip of the button
    //quitBtn->setToolTip("cool");
  //connects the button to the main app, and tells the application to quit if the button is pressed
    // connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);

  //setting icons for menu entries
  QPixmap newpix("new.png");
  QPixmap openpix("open.png");
  QPixmap quitpix("quit.png");
  //creating another QAction object
  viewst = new QAction("&View statusbar", this);
  //setting the Action as checkable (using a checkbox)
  viewst->setCheckable(true);
  viewst->setChecked(true);

  //creating a movable toolbar
  QToolBar *toolbar = addToolBar("main toolbar");
  toolbar->addAction(QIcon(newpix), "New File");
  toolbar->addAction(QIcon(openpix), "Open File");
  toolbar->addSeparator();

  QAction *toolbarQuit = toolbar ->addAction(QIcon(quitpix), "Quit Application");
  connect(toolbarQuit, &QAction::triggered, qApp, &QApplication::quit);

  //creating new QAction objects
  QAction *newa = new QAction(newpix, "&New", this);
  QAction *open = new QAction(openpix, "&Open", this);
  QAction *quit = new QAction(quitpix, "&Quit",this);
  //creating a QMenu object
  QMenu *file;
  file = menuBar()->addMenu("&File");
  //adding actions to the menu
  file->addAction(newa);
  file->addAction(open);
  file->addSeparator();
  file->addAction(viewst);
  file->addAction(quit);

  //creating the main widget (a text edit widget)
  QTextEdit *edit = new QTextEdit(this);
  //setting the "central" widget
  setCentralWidget(edit);

  //setting a status bar status on the bottom
  statusBar()->showMessage("Ready");

  //connect the menu and actions to the main app
  connect(quit, &QAction::triggered, qApp, QApplication::quit);
  connect(viewst, &QAction::triggered, this, &program::toggleStatusbar);
}
//TODO add file save and open dialogs
//void program::saveToFile() {

//}

void program::toggleStatusbar() {
  //conditionals that show or hide the status bar  
  if (viewst->isChecked()) {
    
    statusBar()->show();
  } else {
    
    statusBar()->hide();
  }
}
