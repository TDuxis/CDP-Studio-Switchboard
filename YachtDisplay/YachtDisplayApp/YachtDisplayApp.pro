TYPE = guiapplication
PROJECTNAME = YachtDisplayApp

DEPS += cdpeventmanager gpiopinio i2cio

HEADERS += Libraries.h
SOURCES += CDPMain.cpp

OTHER_FILES += \
    Application/mainwidget.ui \
    Application/qt.conf

DISTFILES += \
    $$files(*.xml, true) \
    $$files(*.lic, true) \
    $$files(Application/www/*.*, true)

load(cdp)

ID = 19852583025364 # do not change
