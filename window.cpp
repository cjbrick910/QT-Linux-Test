//header files needed for barebones Qt GUI apps
#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <program.h>

//main method
int main(int argc, char *argv[]) {

  //application object, needed for every Qt application
  QApplication app(argc, argv);

  //creates a program object, which uses the methods in program.h
  program window;

  //resizes the window
  window.resize(250, 150);

  //sets the window title
  window.setWindowTitle("Simple example");

  //sets a tooltip that shows up on mouseover
  window.setToolTip("woah cool a tooltip");

  //I'm too lazy to create an application icon, but if you wanted to, here's how:
  //window.SetWindowIcon(QIcon("image.png"));

  //shows the window
  window.show();

  //executes the app
  return app.exec();
}
