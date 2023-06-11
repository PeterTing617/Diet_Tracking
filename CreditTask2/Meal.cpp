/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Meal.cpp
 * Author: peter
 * 
 * Created on May 8, 2021, 4:10 PM
 */

#include "Meal.h"

Meal::Meal() {
}

Meal::Meal(const Meal& orig) {
}

Meal::~Meal() {
}
/*This is a constructor to construct a Meal object*/
Meal::Meal(int mealid, string mealfood, int mealvolume, int mealcal, Category mealcat){
    mealID = mealid;
    mealFood = mealfood;
    mealVolume = mealvolume;
    mealCalories = mealcal;
    mealCategory = mealcat;
}
/*This is a method to get mealID*/
int Meal::GetMealID(){
    return mealID;
}
/*This is a method to get mealFood*/
string Meal::GetMealFood(){
    return mealFood;
}
/*This is a method to get mealVolume*/
int Meal::GetMealVolume(){
    return mealVolume;
}
/*This is a method to get mealCalories*/
int Meal::GetMealCal(){
    return mealCalories;
}
/*This is a method to get a string depending on mealCategory*/
string Meal::GetMealCat(){
    if(mealCategory  == 0){
        return "Breakfast";
    } else if(mealCategory  == 1){
        return "Lunch";
    } else if(mealCategory == 2){
        return "Dinner";
    } else {
        return "Supper";
    }
}
/*This is a method to print the meal details*/
void Meal::PrintMeal(){
    cout<<"Food ID: "<< mealID << endl;
    cout<<"Food Name: " << mealFood << endl;
    cout<<"Food Volume(gram): " << mealVolume << endl;
    cout<<"Food Calories(cal): " << mealCalories << endl;
}