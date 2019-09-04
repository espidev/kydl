#include <QApplication>
#include <QCommandLineParser>
#include <KAboutData>
#include <KLocalizedString>
#include <KMessageBox>
#include "main.h"

KydlApp::KydlApp(int& argc, char **argv) : QApplication(argc, argv) {
    KLocalizedString::setApplicationDomain("kydl");

    KAboutData aboutData(
            QStringLiteral("kydl"),
            i18n("Kydl"),
            QStringLiteral("1.0"),
            i18n("A Qt5 based frontend to youtube-dl!"),
            KAboutLicense::GPL,
            i18n("(c) 2019"),
            i18n("written with lovee"),
            QStringLiteral("https://kydl.espi.dev/"),
            QStringLiteral("espidev@gmail.com"));

    aboutData.addAuthor(i18n("Devin Lin"), i18n("Developer"), QStringLiteral("espidev@gmail.com"), QStringLiteral("https://espi.dev"));

    KAboutData::setApplicationData(aboutData);

    QApplication::setWindowIcon(QIcon::fromTheme(QStringLiteral("hwinfo")));

    QCommandLineParser parser;
    aboutData.setupCommandLine(&parser);
    parser.process(*this);
    aboutData.processCommandLine(&parser);

    display = new Kydl();
    display->show();
}

int main(int argc, char *argv[]) {

    KydlApp Kyd(argc, argv);

    return Kyd.exec();
}