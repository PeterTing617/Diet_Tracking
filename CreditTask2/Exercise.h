/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercise.h
 * Author: peter
 *
 * Created on May 11, 2021, 3:20 PM
 */

#ifndef EXERCISE_H
#define EXERCISE_H
#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class Exercise {
public:
    Exercise();
    Exercise(const Exercise& orig);
    virtual ~Exercise();
    Exercise(int exerciseduration);
    int GetDuration();
    double GetTotalCaloriesBurnt();
    string GetExerciseDay();
    string GetExerciseMonth();
    string GetExerciseYear();
    string GetExerciseDate();
    virtual void PrintExercise() = 0;
protected:
    double totalCaloriesBurnt;
    int exerciseDuration;
    string exerciseDate[3];

};

#endif /* EXERCISE_H */

