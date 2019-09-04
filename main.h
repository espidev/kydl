#ifndef KYDL_MAIN_H
#define KYDL_MAIN_H

#include <qapplication.h>
#include "kydl.h"

class Kydl;

class KydlApp : public QApplication {
    Q_OBJECT

public:
    KydlApp(int &argc, char **argv);
private:
    Kydl *display;

};

#endif //KYDL_MAIN_H
