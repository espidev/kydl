
#include <KI18n/KLocalizedString>
#include "kydl.h"

Kydl::Kydl() : KXmlGuiWindow(nullptr, Qt::WindowContextHelpButtonHint) {
    setWindowIcon(QIcon::fromTheme(QStringLiteral("hwinfo")));
    setWindowTitle(i18nc("Main window title", "Kydl - youtube-dl frontend"));
    setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);



}

Kydl::~Kydl() {
    // delete stuff and disconnect stuff
}

void Kydl::createMainFrame() {

}

void Kydl::createToolBar() {

}
