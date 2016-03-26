#include <QApplication>

#define BOOST_TEST_DYN_LINK
#include <boost/test/unit_test.hpp>

#define BOOST_TEST_MODULE ribi_classes_test_desktop_module

//boost::unit_test::test_suite* init_unit_test_suite( int argc, char* argv[] )
//{
//  QApplication a(argc, argv);
//  const auto s = new boost::unit_test::test_suite("Test");
//  return s;
//}

/*
int BOOST_TEST_DECL unit_test_main( init_unit_test_func init_func, int argc, char* argv[] )
{
  QApplication a(argc, argv);

}

int BOOST_TEST_CALL_DECL
main( int argc, char* argv[] )
{
  return ::boost::unit_test::unit_test_main( &init_unit_test, argc, argv );
}
*/
/*
int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  boost::unit_test::unit_test_main(init_unit_test_suite, argc, argv);
  return a.exec();
}
*/

/*
boost::unit_test::test_suite * initialise(int argc, char* argv[])
{
  QApplication a(argc, argv);
  a.exec();
  return new boost::unit_test::test_suite("Test");
}

bool initialise3()
{
  int argc = 0;
  char** argv = nullptr;
  const auto a = new QApplication(argc, argv);
  //return a.exec();
  return a != nullptr;
}

bool initialise2()
{
  return true;
}

int main(int argc, char* argv[])
{
  QApplication(argc, argv);
  //int exitCode = ::boost::unit_test::unit_test_main(&initialise2, argc, argv);

  int exitCode = ::boost::unit_test::unit_test_main(
    &initialise2,
    argc, argv
  );

  return exitCode;
}
*/

/*
int main(int argc, char* argv[])
{
  QApplication(argc, argv);

  int exitCode = ::boost::unit_test::unit_test_main(
    &initialise2,
    argc, argv
  );

  return a.exec();
}
*/

bool initialise() { return true; }

int main(int argc, char* argv[])
{
  QApplication a(argc, argv);
  ::boost::unit_test::unit_test_main(&initialise, argc, argv);

  //Don't call 'a.exec()', as the application will not terminate anymore
  //return a.exec();
}


/*

I enjoy using Boost.Test its automatic test suite generation. My main.cpp file looks like this:

    #define BOOST_TEST_DYN_LINK
    #define BOOST_TEST_MODULE my_test_module
    #include <boost/test/unit_test.hpp>

My test cases are automatically added using BOOST_AUTO_TEST_CASE, like, for example:

    #include <boost/test/unit_test.hpp>
    BOOST_AUTO_TEST_CASE(my_test)
    {
      BOOST_CHECK(1 + 1 == 2); //Trivial test here
    }

Also in serious projects, my many test cases are generated and run smoothly.

However, when using Qt (4 and 5) its GUI functions, a main function should look like this:

    int main(int argc, char *argv[])
    {
      QApplication a(argc, argv);
      return a.exec();
    }

To get both Boost.Test and Qt to work, I will need to call the automatically generated test cases from my main, like:

    int main(int argc, char *argv[])
    {
      QApplication a(argc, argv);

      //?Call all my test cases

      return a.exec();
    }

In there lies my problem. It is not that this question hasn't popped up on SO, but a complete example is lacking, which I was unable to compile.

I found within `boost/test/unit_test.hpp` the Boost.Test definition of the main function:

    int BOOST_TEST_CALL_DECL
    main( int argc, char* argv[] )
    {
        return ::boost::unit_test::unit_test_main( &init_unit_test, argc, argv );
    }

Getting this to work in multiple different ways fails. Here is an example
that compiles, but will hang at QApplication::exec, and not run the tests:

    bool initialise() { return true; }

    int main(int argc, char* argv[])
    {
      QApplication a(argc, argv);
      ::boost::unit_test::unit_test_main(&initialise, argc, argv);
      return a.exec();
    }


I have found some hints to

 * Do or do not #define BOOST_TEST_NO_MAIN
 * Do or do not #define BOOST_TEST_ALTERNATIVE_INIT_API




*/
