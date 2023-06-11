/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Walking.cpp
 * Author: peter
 * 
 * Created on May 11, 2021, 4:29 PM
 */

#include "Walking.h"

Walking::Walking() {
}

Walking::Walking(const Walking& orig) {
}

Walking::~Walking() {
}
/*This is a constructor to construct a Walking object which is a child of Exercise*/
Walking::Walking(int exerciseduration):Exercise(exerciseduration){
    totalCaloriesBurnt = 7.6 * exerciseDuration;
}
/*This is a method to print the exercise information*/
void Walking::PrintExercise(){
    cout<<"Date: "<< exerciseDate[0] << "/" << exerciseDate[1] << "/" << exerciseDate[2] << endl;
    cout<<"Exercise: Walking"<<endl;
    cout<<"Duration(minutes): "<< exerciseDuration << endl;
    cout<<"Total Calories Burnt: "<< totalCaloriesBurnt << endl;
}