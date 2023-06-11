/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ExerciseTracking.cpp
 * Author: peter
 * 
 * Created on May 11, 2021, 7:14 PM
 */

#include <vector>

#include "ExerciseTracking.h"
/*This is a constructor to construct an ExerciseTracking object*/
ExerciseTracking::ExerciseTracking() {
}

ExerciseTracking::ExerciseTracking(const ExerciseTracking& orig) {
}

ExerciseTracking::~ExerciseTracking() {
}
/*This is a method to add an exercise object into exercises*/
void ExerciseTracking::AddExercise(Exercise* e){
    exercises.push_back(e);
}
/*This is a method to get the size of exercises*/
int ExerciseTracking::ExercisesSize(){
    return exercises.size();
}
/*This is a method to print the monthly calories burnt*/
void ExerciseTracking::PrintMonthlyCalBurnt(){
    vector<MonthBurnt*> mb;
    for(int i = 0; i < exercises.size(); i++){
        bool similar = false;
        for(int j = 0; j < mb.size(); j++){
            if(mb.at(j)->CheckSimilar(exercises.at(i)->GetExerciseMonth(), exercises.at(i)->GetExerciseYear())){
                similar = true;
            } 
        }
        if(!similar){
            mb.push_back(new MonthBurnt(exercises.at(i)->GetExerciseMonth(), exercises.at(i)->GetExerciseYear()));
        }
    }
    for(int i = 0; i < exercises.size(); i++){
        for(int j = 0; j < mb.size(); j++){
            if(mb.at(j)->CheckSimilar(exercises.at(i)->GetExerciseMonth(), exercises.at(i)->GetExerciseYear())){
                double burnt = exercises.at(i)->GetTotalCaloriesBurnt();
                mb.at(j)->AddMonthBurntCal(burnt);
            } 
        }
    }
    cout<<"-------------------------------------"<<endl;
    cout<<"Monthly Calories Burnt"<<endl;
    cout<<"-------------------------------------"<<endl;
    for(int j = 0; j < mb.size(); j++){
        mb.at(j)->PrintResult();
        cout<<endl;
    }   
}
/*This is a method to print all exercise in exercises*/
void ExerciseTracking::PrintExercisesDone(){
    cout<<"-------------------------------------"<<endl;
    cout<<"Exercises Done"<<endl;
    cout<<"-------------------------------------"<<endl;
    for(int i = 0; i < exercises.size(); i++){
        exercises.at(i)->PrintExercise();
        cout<<endl;
    }   
}
/*This is a method to return the calories burnt the date that it is called*/
double ExerciseTracking::ReturnCurrentBurnt(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string year = to_string(1900 + ltm->tm_year);
    string month = to_string(1 + ltm->tm_mon);
    string day = to_string(ltm->tm_mday);
    string currentDate = day + "/" + month + "/" + year;
    double currentBurnt = 0;
    for(int i = 0; i < exercises.size(); i++){
        if(exercises.at(i)->GetExerciseDate() == currentDate){
            currentBurnt += exercises.at(i)->GetTotalCaloriesBurnt();
        }
    }
    return currentBurnt;
}
