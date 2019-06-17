#include <QApplication>
#include <QSplashScreen>
#include "mainwindow.h"
#include <iostream>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

	QSplashScreen *splash = new QSplashScreen;
	splash->setPixmap(QPixmap(":/images/login_bg.png"));
	splash->show();

	Qt::Alignment topRight = Qt::AlignRight | Qt::AlignTop;
	splash->showMessage(QObject::tr("Setting up the main window..."),
						topRight, Qt::white);



	MainWindow *mainWin = new MainWindow;


	splash->showMessage(QObject::tr("Loading modules..."),
						topRight, Qt::white);

	splash->showMessage(QObject::tr("Establishing connections..."),
						topRight, Qt::white);

	splash->finish(mainWin);


	mainWin->show();

	delete splash;
    return app.exec();
}
