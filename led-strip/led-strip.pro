QT          += widgets

HEADERS     = glwidget.h \
              helper.h \
              widget.h \
              window.h \
              led.h \
              ledstrip.h

SOURCES     = glwidget.cpp \
              helper.cpp \
              main.cpp \
              widget.cpp \
              window.cpp \
              led.cpp \
              ledstrip.cpp

# install
target.path = /home/tjsmith/prj/qt-tjs/led-strip
INSTALLS += target
