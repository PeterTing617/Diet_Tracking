/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExerciseTracking.h
 * Author: peter
 *
 * Created on May 11, 2021, 7:14 PM
 */

#ifndef EXERCISETRACKING_H
#define EXERCISETRACKING_H
#include "Exercise.h"
#include "MonthBurnt.h"
#include <iostream>
#include <ctime>
using namespace std;

class ExerciseTracking {
public:
    ExerciseTracking();
    ExerciseTracking(const ExerciseTracking& orig);
    virtual ~ExerciseTracking();
    void AddExercise(Exercise* e);
    int ExercisesSize();
    void PrintMonthlyCalBurnt();
    void PrintExercisesDone();
    double ReturnCurrentBurnt();
private:
    vector<Exercise *> exercises;

};

#endif /* EXERCISETRACKING_H */

