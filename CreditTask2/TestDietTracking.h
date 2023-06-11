/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   TestDietTracking.h
 * Author: peter
 *
 * Created on May 12, 2021, 9:07:32 PM
 */

#ifndef TESTDIETTRACKING_H
#define TESTDIETTRACKING_H

#include <cppunit/extensions/HelperMacros.h>

class TestDietTracking : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestDietTracking);

    CPPUNIT_TEST(testAddDayMeal);
    CPPUNIT_TEST(testCheckSimilar);
    CPPUNIT_TEST(testAddMealIntoDayMeal);
    CPPUNIT_TEST(testDeleteMealFromDayMeal);
    CPPUNIT_TEST(testReturnCurrentConsumed);

    CPPUNIT_TEST_SUITE_END();

public:
    TestDietTracking();
    virtual ~TestDietTracking();
    void setUp();
    void tearDown();

private:
    void testAddDayMeal();
    void testCheckSimilar();
    void testAddMealIntoDayMeal();
    void testDeleteMealFromDayMeal();
    void testReturnCurrentConsumed();
};

#endif /* TESTDIETTRACKING_H */

