/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   TestExerciseTracking.cpp
 * Author: peter
 *
 * Created on May 12, 2021, 9:32:43 PM
 */

#include "TestExerciseTracking.h"
#include "ExerciseTracking.h"
#include "Exercise.h"
#include "Freestyle.h"
#include "Running.h"
#include "Walking.h"


CPPUNIT_TEST_SUITE_REGISTRATION(TestExerciseTracking);

TestExerciseTracking::TestExerciseTracking() {
}

TestExerciseTracking::~TestExerciseTracking() {
}

void TestExerciseTracking::setUp() {
}

void TestExerciseTracking::tearDown() {
}

void TestExerciseTracking::testAddExercise() {
    ExerciseTracking *e = new ExerciseTracking();
    e->AddExercise(new Running(10));
    CPPUNIT_ASSERT(e->ExercisesSize() == 1);
    e->AddExercise(new Walking(10));
    CPPUNIT_ASSERT(e->ExercisesSize() == 2);          
}

void TestExerciseTracking::testWalking() {
    Walking *w = new Walking(10);
    CPPUNIT_ASSERT(w->GetTotalCaloriesBurnt() == 76); 
}

void TestExerciseTracking::testRunning() {
    Running *r = new Running(10);
    CPPUNIT_ASSERT(r->GetTotalCaloriesBurnt() == 132); 
}

void TestExerciseTracking::testFreestyle() {
    Freestyle *f = new Freestyle(10);
    CPPUNIT_ASSERT(f->GetTotalCaloriesBurnt() == 117); 
}

void TestExerciseTracking::testReturnCurrentBurnt() {
    ExerciseTracking *e = new ExerciseTracking();
    e->AddExercise(new Running(10));
    e->AddExercise(new Walking(10));
    CPPUNIT_ASSERT(e->ReturnCurrentBurnt() == 208); 
    e->AddExercise(new Freestyle(10));
    CPPUNIT_ASSERT(e->ReturnCurrentBurnt() == 325);
}



