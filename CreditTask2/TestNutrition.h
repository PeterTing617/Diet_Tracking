/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   TestNutrition.h
 * Author: peter
 *
 * Created on May 8, 2021, 5:27:00 PM
 */

#ifndef TESTNUTRITION_H
#define TESTNUTRITION_H
#include "NutritionManagement.h"
#include "Nutrition.h"
#include <cppunit/extensions/HelperMacros.h>

class TestNutrition : public CPPUNIT_NS::TestFixture {
    CPPUNIT_TEST_SUITE(TestNutrition);

    CPPUNIT_TEST(testAddNutrition);
    CPPUNIT_TEST(testDeleteNutrition);
    CPPUNIT_TEST(testSearchNutrition);
    CPPUNIT_TEST(testSearchSimilar);
    CPPUNIT_TEST(testChangeName);
    CPPUNIT_TEST(testChangeVolume);
    CPPUNIT_TEST(testChangeCalories);

    CPPUNIT_TEST_SUITE_END();

public:
    TestNutrition();
    virtual ~TestNutrition();
    void setUp();
    void tearDown();

private:
    void testAddNutrition();
    void testDeleteNutrition();
    void testSearchNutrition();
    void testSearchSimilar();
    void testChangeName();
    void testChangeVolume();
    void testChangeCalories();
};

#endif /* TESTNUTRITION_H */

