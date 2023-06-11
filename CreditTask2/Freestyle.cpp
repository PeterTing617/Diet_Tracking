/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Freestyle.cpp
 * Author: peter
 * 
 * Created on May 11, 2021, 5:04 PM
 */

#include "Freestyle.h"

Freestyle::Freestyle() {
}

Freestyle::Freestyle(const Freestyle& orig) {
}

Freestyle::~Freestyle() {
}
/*This is a constructor to construct a Freestyle object which is a child of Exercise*/
Freestyle::Freestyle(int exerciseduration):Exercise(exerciseduration){
    totalCaloriesBurnt = 11.7 * exerciseDuration;
}
/*This is a method to print the exercise information*/
void Freestyle::PrintExercise(){
    cout<<"Date: "<< exerciseDate[0] << "/" << exerciseDate[1] << "/" << exerciseDate[2] << endl;
    cout<<"Exercise: Freestyle"<<endl;
    cout<<"Duration(minutes): "<< exerciseDuration << endl;
    cout<<"Total Calories Burnt: "<< totalCaloriesBurnt << endl;
}