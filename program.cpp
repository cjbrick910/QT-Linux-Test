#include "program.h"
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>

//method using the program class
program::program(QWidget *parent):QMainWindow(parent) {
	//create a new QPushButton object "quitBtn" and give it a label "Quit"
	QPushButton *quitBtn = new QPushButton("Quit", this);
	//sets the location of the "quitBtn" button
	quitBtn->setGeometry(50, 40, 75, 30);
    quitBtn->setToolTip("cool");
	//connects the button to the main app, and tells the application to quit if the button is pressed
	connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);

    viewst = new QAction("&View statusbar", this);
	viewst->setCheckable(true);
	viewst->setChecked(true);

	//creating a new QAction object
	QAction *quit = new QAction("&Quit",this);
	//creating a QMenu object
	QMenu *file;
	file = menuBar()->addMenu("&File");
	//adding actions to the menu
	file->addAction(viewst);
	file->addAction(quit);

	//connect the menu and actions to the main app
	//connect(quit, &QAction::triggered, qApp, QApplication::quit);
	connect(viewst, &QAction::triggered, this, &program::toggleStatusbar);
}


void program::toggleStatusbar() {
    
  if (viewst->isChecked()) {
      
      statusBar()->show();
  } else {
      
      statusBar()->hide();
  }
}
