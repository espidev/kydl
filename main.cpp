#include <QApplication>
#include <QCommandLineParser>
#include <KAboutData>
#include <KLocalizedString>
#include <KMessageBox>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    KLocalizedString::setApplicationDomain("kydl");

    KAboutData aboutData(
            QStringLiteral("kydl"),
            i18n("Kydl"),
            QStringLiteral("1.0"),
            i18n("A youtube-dl frontend in Qt"),
            KAboutLicense::GPL,
            i18n("(c) 2019"),
            i18n("Some text... and I'm cool"),
            QStringLiteral("https://espi.dev/"),
            QStringLiteral("submit@bugs.kde.org"));
    aboutData.addAuthor(i18n("Name"), i18n("Task"), QStringLiteral("espidev@gmail.com"),
                        QStringLiteral("https://espi.dev"), QStringLiteral("OSC Username"));

    KAboutData::setApplicationData(aboutData);

    QCommandLineParser parser;
    aboutData.setupCommandLine(&parser);
    parser.process(app);
    aboutData.processCommandLine(&parser);

    KGuiItem yesButton(i18n("Hello"), QString(),
                       i18n("This is a tooltip"),
                       i18n("This is a WhatsThis help text."));

    return
            KMessageBox::questionYesNo
                    (0, i18n("Hello World"), i18n("Hello"), yesButton)
            == KMessageBox::Yes ? EXIT_SUCCESS : EXIT_FAILURE;
}