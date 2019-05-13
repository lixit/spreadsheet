#include <QApplication>
#include <QSplashScreen>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
	QSplashScreen *splash = new QSplashScreen;
	splash->setPixmap(QPixmap(":/images/CLRACING_F7_Flight-Controller_Anschlussplan_Wiringplan.jpg"));
	splash->show();

	Qt::Alignment topRight = Qt::AlignRight | Qt::AlignTop;
	splash->showMessage(QObject::tr("Setting up the main window..."),
	topRight, Qt::white);


	MainWindow *mainWin = new MainWindow;

	splash->showMessage(QObject::tr("Loading modules..."),
	topRight, Qt::white);

	splash->showMessage(QObject::tr("Establishing connections..."),
	topRight, Qt::white);

	mainWin->show();

	splash->finish(mainWin);
	delete splash;
    return app.exec();
}
