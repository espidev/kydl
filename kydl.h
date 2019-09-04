//
// Created by devin on 7/30/19.
//

#ifndef KYDL_KYDL_H
#define KYDL_KYDL_H


#include <QtCore/QArgument>
#include <KXmlGui/KXmlGuiWindow>

class Kydl : public KXmlGuiWindow {
    Q_OBJECT

public:
    // constructor
    Kydl();

    // destructor
    ~Kydl() override;

private:
    void createMainFrame();

    void createToolBar();

};


#endif //KYDL_KYDL_H
