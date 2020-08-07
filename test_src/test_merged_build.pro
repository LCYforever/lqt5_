TEMPLATE = lib
TARGET = test
INCLUDEPATH += .
HEADERS += test_slot.hpp
SOURCES += ../common/lqt_common.cpp \
          ../common/lqt_qt.cpp \
          test_enum.cpp \
          test_meta.cpp \
          test_slot.cpp \
          test_globals.cpp \
          test_merged_build.cpp
