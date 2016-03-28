# travis_qmake_gcc_cpp14_boost_test_qt

[![Travis CI logo](TravisCI.png)](https://travis-ci.org)

[![Build Status](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_boost_test_qt.svg?branch=master)](https://travis-ci.org/richelbilderbeek/travis_qmake_gcc_cpp14_boost_test_qt)

This GitHub is part of [the Travis C++ Tutorial](https://github.com/richelbilderbeek/travis_cpp_tutorial).

The goal of this project is to have a clean Travis CI build, with specs:
 * Build system: `qmake`
 * C++ compiler: `gcc`
 * C++ version: `C++14`
 * Libraries: `STL`, `Boost`, `Boost.Test` and `Qt`
 * Code coverage: none
 * Source: multiple files

Note that this build is unsuitable for testing Qt GUI classes, use [travis_qmake_gcc_cpp14_qt_qtest](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_qt_qtest) instead.

Less complex builds:
 * Use C++98: [travis_qmake_gcc_cpp98_boost_test_qt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp98_boost_test_qt)
 * Use C++11: [travis_qmake_gcc_cpp11_boost_test_qt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp11_boost_test_qt)
 * STL and Boost.Test: [travis_qmake_gcc_cpp14_boost_test](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_boost_test)
 * STL and Boost: [travis_qmake_gcc_cpp14_boost](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_boost)
 * STL and Qt: [travis_qmake_gcc_cpp14_qt](https://www.github.com/richelbilderbeek/travis_qmake_gcc_cpp14_qt)
