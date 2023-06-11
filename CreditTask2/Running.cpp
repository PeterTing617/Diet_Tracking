/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Running.cpp
 * Author: peter
 * 
 * Created on May 11, 2021, 4:40 PM
 */

#include "Running.h"

Running::Running() {
}

Running::Running(const Running& orig) {
}

Running::~Running() {
}
/*This is a constructor to construct a Running object which is a child of Exercise*/
Running::Running(int exerciseduration):Exercise(exerciseduration){
    totalCaloriesBurnt = 13.2 * exerciseDuration;
}
/*This is a method to print the exercise information*/
void Running::PrintExercise(){
    cout<<"Date: "<< exerciseDate[0] << "/" << exerciseDate[1] << "/" << exerciseDate[2] << endl;
    cout<<"Exercise: Running"<<endl;
    cout<<"Duration(minutes): "<< exerciseDuration << endl;
    cout<<"Total Calories Burnt: "<< totalCaloriesBurnt << endl;
}