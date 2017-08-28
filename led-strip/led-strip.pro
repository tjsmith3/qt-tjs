QT          += widgets

HEADERS     = glwidget.h \
              helper.h \
              widget.h \
              window.h \
              led.h

SOURCES     = glwidget.cpp \
              helper.cpp \
              main.cpp \
              widget.cpp \
              window.cpp \
             led.cpp

# install
target.path = /home/tjsmith/prj/qt-tjs/led-strip/led-strip
INSTALLS += target
