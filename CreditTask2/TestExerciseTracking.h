/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   TestExerciseTracking.h
 * Author: peter
 *
 * Created on May 12, 2021, 9:32:43 PM
 */

#ifndef TESTEXERCISETRACKING_H
#define TESTEXERCISETRACKING_H

#include <cppunit/extensions/HelperMacros.h>

class TestExerciseTracking : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestExerciseTracking);

    CPPUNIT_TEST(testAddExercise);
    CPPUNIT_TEST(testWalking);
    CPPUNIT_TEST(testRunning);
    CPPUNIT_TEST(testFreestyle);
    CPPUNIT_TEST(testReturnCurrentBurnt);

    CPPUNIT_TEST_SUITE_END();

public:
    TestExerciseTracking();
    virtual ~TestExerciseTracking();
    void setUp();
    void tearDown();

private:
    void testAddExercise();
    void testWalking();
    void testRunning();
    void testFreestyle();
    void testReturnCurrentBurnt();
};

#endif /* TESTEXERCISETRACKING_H */

