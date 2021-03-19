QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ../funzioni_di_codifica.cpp \
    ../funzioni_di_decodifica.cpp \
    ../funzioni_di_utilita.cpp \
    ../generazione_chiavi.cpp \
    decryption_form.cpp \
    encryption_form.cpp \
    main.cpp \
    mainwindow.cpp

HEADERS += \
    ../funzioni_di_codifica.h \
    ../funzioni_di_decodifica.h \
    ../funzioni_di_utilita.h \
    ../generazione_chiavi.h \
    decryption_form.h \
    encryption_form.h \
    mainwindow.h

FORMS += \
    decryption_form.ui \
    encryption_form.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
