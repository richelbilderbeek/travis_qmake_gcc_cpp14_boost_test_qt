#include <boost/test/unit_test.hpp>
#include <QApplication>
#include "my_dialog.h"

BOOST_AUTO_TEST_CASE(my_dialog_has_hello_world_as_title)
{
  const my_dialog d;
  BOOST_CHECK_EQUAL(d.windowTitle().toStdString(), "Hello world");
}

BOOST_AUTO_TEST_CASE(my_dialog_can_be_shown_and_closed)
{
  my_dialog d;
  d.show();
  //Without 'qApp->processEvents()' the dialog is not drawn well
  for (int i=0; i!=1000000; ++i) { qApp->processEvents(); }
  d.close();
}
