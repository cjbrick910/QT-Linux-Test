#pragma once

#include <QWidget>
#include <QApplication>
#include <QPushButton>
#include <QLabel>

//creates a new QWidget class for a button "Button"
class program : public QWidget {
    public:
        program(QWidget *parent=0);
};

//method using the Button class
program::program(QWidget *parent):QWidget(parent) {

  //create a new QPushButton object "quitBtn" and give it a label "Quit"
  QPushButton *quitBtn = new QPushButton("Quit", this);

  //sets the location of the "quitBtn" button
  quitBtn->setGeometry(50, 40, 75, 30);

  //connects the button to the main app, and tells the application to quit if the button is pressed
  connect(quitBtn, &QPushButton::clicked, qApp, &QApplication::quit);
}
