# Compile with high warning levels, a warning is an error
# No '-Weffc++' thanks to Qt5
QMAKE_CXXFLAGS += -Wall -Wextra -Werror

# Shared files
HEADERS += my_dialog.h
SOURCES += my_dialog.cpp
FORMS += my_dialog.ui

# Unique files
SOURCES += main.cpp

# C++14
QMAKE_CXX = g++-5
QMAKE_LINK = g++-5
QMAKE_CC = gcc-5
QMAKE_CXXFLAGS += -std=c++14

# Qt
QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

# Debug and release build
CONFIG += console debug_and_release
CONFIG(release, debug|release) {
  DEFINES += NDEBUG
}

# Boost.Test
LIBS += -lboost_unit_test_framework

