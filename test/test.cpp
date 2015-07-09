#define BOOST_TEST_MAIN

#if !defined( WIN32 )
    #define BOOST_TEST_DYN_LINK
#endif

#define BOOST_TEST_MODULE DoubleTests
#include <boost/test/unit_test.hpp>
#include "double_int.hpp"

BOOST_AUTO_TEST_CASE(FailTest)
{
    BOOST_CHECK_EQUAL(6, double_int(3));
}

BOOST_AUTO_TEST_CASE(PassTest)
{
    BOOST_CHECK_EQUAL(4, double_int(2));
}