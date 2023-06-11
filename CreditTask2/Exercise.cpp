/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Exercise.cpp
 * Author: peter
 * 
 * Created on May 11, 2021, 3:20 PM
 */

#include "Exercise.h"

Exercise::Exercise() {
}

Exercise::Exercise(const Exercise& orig) {
}

Exercise::~Exercise() {
}
/*This is a constructor to construct an Exercise object which is an abstract class*/
Exercise::Exercise(int exerciseduration){
    exerciseDuration = exerciseduration;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string year = to_string(1900 + ltm->tm_year);
    string month = to_string(1 + ltm->tm_mon);
    string day = to_string(ltm->tm_mday);
    exerciseDate[0] = day;
    exerciseDate[1] = month;
    exerciseDate[2] = year;
}
/*This is a method to get exerciseDuration*/
int Exercise::GetDuration(){
    return exerciseDuration;
}
/*This is a method to get totalCaloriesBurnt*/
double Exercise::GetTotalCaloriesBurnt(){
    return totalCaloriesBurnt;
}
/*This is a method to get the day of exerciseDate*/
string Exercise::GetExerciseDay(){
    return exerciseDate[0];
}
/*This is a method to get the month of exerciseDate*/
string Exercise::GetExerciseMonth(){
    return exerciseDate[1];
}
/*This is a method to get the year of exerciseDate*/
string Exercise::GetExerciseYear(){
    return exerciseDate[2];
}
/*This is a method to get the date of exerciseDate*/
string Exercise::GetExerciseDate(){
    return exerciseDate[0] + "/" + exerciseDate[1] + "/" + exerciseDate[2];

}
