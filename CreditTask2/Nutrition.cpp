


/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nutrition.cpp
 * Author: peter
 * 
 * Created on May 1, 2021, 4:03 PM
 */

#include "Nutrition.h"

Nutrition::Nutrition() {
}

Nutrition::Nutrition(const Nutrition& orig) {
}

Nutrition::~Nutrition() {
}
/*This is a constructor to construct a Nutrition object*/
Nutrition::Nutrition(int foodid, string foodname, int foodvolume, int foodcalories){
    foodID = foodid;
    foodName = foodname;
    foodVolume = foodvolume;
    foodCalories = foodcalories;
}
/*This is a method to get foodID*/
int Nutrition::getFoodID(){
    return foodID;
}
/*This is a method to get foodName*/
string Nutrition::getFoodName(){
    return foodName;
}
/*This is a method to get foodVolume*/
int Nutrition::getFoodVolume(){
    return foodVolume;
}
/*This is a method to get foodCalories*/
int Nutrition::getFoodCalories(){
    return foodCalories;
}
/*This is a method to change foodName*/
void Nutrition::changeFoodName(string editname){
    foodName = editname;
}
/*This is a method to change foodVolume*/
void Nutrition::changeFoodVolume(int editvolume){
    foodVolume = editvolume;
}
/*This is a method to change foodCalories*/
void Nutrition::changeFoodCalories(int editcalories){
    foodCalories = editcalories;
}
/*This is a method to print nutrition details*/
void Nutrition::printNutritionDetail(){
    cout<<"Food ID: "<< foodID << endl;
    cout<<"Food Name: " << foodName << endl;
    cout<<"Food Volume(gram): " << foodVolume << endl;
    cout<<"Food Calories(cal): " << foodCalories << endl;
}

