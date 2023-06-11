/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   TestDietTracking.cpp
 * Author: peter
 *
 * Created on May 12, 2021, 9:07:32 PM
 */

#include "TestDietTracking.h"
#include "DietTracking.h"
#include <ctime>


CPPUNIT_TEST_SUITE_REGISTRATION(TestDietTracking);

TestDietTracking::TestDietTracking() {
}

TestDietTracking::~TestDietTracking() {
}

void TestDietTracking::setUp() {
}

void TestDietTracking::tearDown() {
}

void TestDietTracking::testAddDayMeal() {
    DietTracking *dt = new DietTracking();
    dt->AddDayMeal(new DayMeal());
    CPPUNIT_ASSERT(dt->EatenListSize() == 1);
    dt->AddDayMeal(new DayMeal());
    CPPUNIT_ASSERT(dt->EatenListSize() == 2);
}

void TestDietTracking::testCheckSimilar() {
    DietTracking *dt = new DietTracking();
    dt->AddDayMeal(new DayMeal());
    CPPUNIT_ASSERT(dt->EatenListSize() == 1);
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string year = to_string(1900 + ltm->tm_year);
    string month = to_string(1 + ltm->tm_mon);
    string day = to_string(ltm->tm_mday);
    string currentDate = day + "/" + month + "/" + year;
    bool similar = dt->DateRecorded(currentDate);
    CPPUNIT_ASSERT(similar == true);
}

void TestDietTracking::testAddMealIntoDayMeal() {
    DietTracking *dt = new DietTracking();
    dt->AddDayMeal(new DayMeal());
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string year = to_string(1900 + ltm->tm_year);
    string month = to_string(1 + ltm->tm_mon);
    string day = to_string(ltm->tm_mday);
    string currentDate = day + "/" + month + "/" + year;
    
    dt->AddMealIntoDayMeal(currentDate, 1, "Chicken", 100, 100, Category::Breakfast);
    int consumed = dt->ReturnCurrentConsumed();
    CPPUNIT_ASSERT(consumed == 100);
    
    dt->AddMealIntoDayMeal(currentDate, 2, "Beef", 200, 200, Category::Breakfast);
    consumed = dt->ReturnCurrentConsumed();
    CPPUNIT_ASSERT(consumed == 300);
}

void TestDietTracking::testDeleteMealFromDayMeal() {
    DietTracking *dt = new DietTracking();
    dt->AddDayMeal(new DayMeal());
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string year = to_string(1900 + ltm->tm_year);
    string month = to_string(1 + ltm->tm_mon);
    string day = to_string(ltm->tm_mday);
    string currentDate = day + "/" + month + "/" + year;
    
    dt->AddMealIntoDayMeal(currentDate, 1, "Chicken", 100, 100, Category::Breakfast);
    int consumed = dt->ReturnCurrentConsumed();
    CPPUNIT_ASSERT(consumed == 100);
    
    dt->AddMealIntoDayMeal(currentDate, 2, "Beef", 200, 200, Category::Breakfast);
    consumed = dt->ReturnCurrentConsumed();
    CPPUNIT_ASSERT(consumed == 300);
    
    dt->DeleteMealFromDayMeal(currentDate, 1, "Breakfast");
    consumed = dt->ReturnCurrentConsumed();
    CPPUNIT_ASSERT(consumed == 200);
}

void TestDietTracking::testReturnCurrentConsumed() {
    DietTracking *dt = new DietTracking();
    dt->AddDayMeal(new DayMeal());
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string year = to_string(1900 + ltm->tm_year);
    string month = to_string(1 + ltm->tm_mon);
    string day = to_string(ltm->tm_mday);
    string currentDate = day + "/" + month + "/" + year;
    
    string pastDate = "23/2/2021";
    
    dt->AddMealIntoDayMeal(pastDate, 1, "Chicken", 100, 100, Category::Breakfast);
    int consumed = dt->ReturnCurrentConsumed();
    CPPUNIT_ASSERT(consumed == 0);
    
    dt->AddMealIntoDayMeal(currentDate, 2, "Beef", 200, 200, Category::Breakfast);
    consumed = dt->ReturnCurrentConsumed();
    CPPUNIT_ASSERT(consumed == 200);

}




