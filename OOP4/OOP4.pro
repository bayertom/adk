QT -= gui

CONFIG += c++11 console
CONFIG -= app_bundle

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        circle.cpp \
        ellipse.cpp \
        go.cpp \
        go2.cpp \
        line.cpp \
        line2.cpp \
        line3.cpp \
        main.cpp \
        point.cpp \
        point2.cpp \
        pointg.cpp \
        pointg2.cpp \
        sortbyx.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

HEADERS += \
    circle.h \
    ellipse.h \
    go.h \
    go2.h \
    line.h \
    line2.h \
    line3.h \
    point.h \
    point2.h \
    pointg.h \
    pointg2.h \
    sortbyx.h
