/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   TestNutrition.cpp
 * Author: peter
 *
 * Created on May 8, 2021, 5:27:00 PM
 */

#include "TestNutrition.h"
#include "Meal.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TestNutrition);

TestNutrition::TestNutrition() {
}

TestNutrition::~TestNutrition() {
}

void TestNutrition::setUp() {
}

void TestNutrition::tearDown() {
}

void TestNutrition::testAddNutrition() {
    NutritionManagement *nm = new NutritionManagement();
    Nutrition *newn = new Nutrition(1,"Chicken Breast", 50, 50);
    nm->AddNutrition(newn);
    CPPUNIT_ASSERT(nm->NutritionSize() == 1);
}

void TestNutrition::testDeleteNutrition() {
    NutritionManagement *nd = new NutritionManagement();
    Nutrition *newn1 = new Nutrition(29,"Chicken Breast", 50, 50);
    Nutrition *newn2 = new Nutrition(30,"Chicken Breast", 150, 50);
    nd->AddNutrition(newn1);
    nd->AddNutrition(newn2);
    CPPUNIT_ASSERT(nd->NutritionSize() == 2);
    nd->DeleteNutrition(29);
    CPPUNIT_ASSERT(nd->NutritionSize() == 1);
}

void TestNutrition::testSearchNutrition() {
    NutritionManagement *nd = new NutritionManagement();
    Nutrition *newn1 = new Nutrition(29,"Chicken Breast", 50, 50);
    Nutrition *newn2 = new Nutrition(30,"Beef", 50, 50);
    nd->AddNutrition(newn1);
    nd->AddNutrition(newn2);
    Nutrition *copy = nd->SearchNutrition(29);
    CPPUNIT_ASSERT(copy->getFoodID() == newn1->getFoodID());
}

void TestNutrition::testSearchSimilar() {
    NutritionManagement *nd = new NutritionManagement();
    Nutrition *newn1 = new Nutrition(29,"Chicken Breast", 50, 50);
    nd->AddNutrition(newn1);
    Nutrition *newn2 = new Nutrition(30,"Beef", 50, 50);
    CPPUNIT_ASSERT(nd->SearchSimilar(newn2) == false);
    nd->AddNutrition(newn2);
    Nutrition *newn3 = new Nutrition(31,"Beef", 50, 50);
    CPPUNIT_ASSERT(nd->SearchSimilar(newn3) == true);
}

void TestNutrition::testChangeName() {
    NutritionManagement *nd = new NutritionManagement();
    Nutrition *newn1 = new Nutrition(29,"Chicken Breast", 50, 50);
    nd->AddNutrition(newn1);
    Nutrition *newn2 = new Nutrition(30,"Beef", 50, 50);
    nd->AddNutrition(newn2);
    nd->EditNutritionName(newn2, "Chicken Breast");
    CPPUNIT_ASSERT(newn2->getFoodName() == "Beef");
    nd->EditNutritionName(newn2, "Steak");
    CPPUNIT_ASSERT(newn2->getFoodName() == "Steak");
}

void TestNutrition::testChangeVolume() {
    NutritionManagement *nd = new NutritionManagement();
    Nutrition *newn1 = new Nutrition(29,"Chicken Breast", 50, 50);
    nd->AddNutrition(newn1);
    Nutrition *newn2 = new Nutrition(30,"Chicken Breast", 100, 50);
    nd->AddNutrition(newn2);
    nd->EditNutritionVolume(newn2, 50);
    CPPUNIT_ASSERT(newn2->getFoodVolume() == 100);
    nd->EditNutritionVolume(newn2, 200);
    CPPUNIT_ASSERT(newn2->getFoodVolume() == 200);
}

void TestNutrition::testChangeCalories() {
    NutritionManagement *nd = new NutritionManagement();
    Nutrition *newn1 = new Nutrition(29,"Chicken Breast", 50, 50);
    nd->AddNutrition(newn1);
    Nutrition *newn2 = new Nutrition(30,"Chicken Breast", 50, 100);
    nd->AddNutrition(newn2);
    nd->EditNutritionCalories(newn2, 50);
    CPPUNIT_ASSERT(newn2->getFoodCalories() == 100);
    nd->EditNutritionCalories(newn2, 200);
    CPPUNIT_ASSERT(newn2->getFoodCalories() == 200);
}



