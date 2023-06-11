/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   User.cpp
 * Author: peter
 * 
 * Created on May 7, 2021, 3:25 PM
 */

#include "User.h"

User::User() {
}

User::User(const User& orig) {
}

User::~User() {
}
/*This is a constructor to construct a User object*/
User::User(string name, Gender gender, int age, double weight, double height){
    userName = name;
    userGender = gender;
    userAge = age;
    userWeight = weight;
    userHeight = height;
    targetCaloriesConsumed = 0;
}
/*This is a method to get userName*/
string User::getUserName(){
    return userName;
}
/*This is a method to set userName*/
void User::setUserName(string setname){
    userName = setname;
}
/*This is a method to get userGender*/
string User::getGender(){
    if(userGender  == 0){
        return "Male";
    } else if(userGender  == 1){
        return "Female";
    } else {
        return "Unknown";
    }
}
/*This is a method to set userGender*/
void User::setGender(Gender setgender){
    userGender = setgender;
}
/*This is a method to get userAge*/
int User::getAge(){
    return userAge;
}
/*This is a method to set userAge*/
void User::setAge(int setage){
    userAge = setage;
}
/*This is a method to get userWeight*/
double User::getWeight(){
    return userWeight;
}
/*This is a method to set userWeight*/
void User::setWeight(double setweight){
    userWeight = setweight;
}
/*This is a method to get userHeight*/
double User::getHeight(){
    return userHeight;
}
/*This is a method to set userHeight*/
void User::setHeight(double setheight){
    userHeight = setheight;
}
/*This is a method to get targetCaloriesConsumed*/
int User::viewTargetCalConsumed(){
    return targetCaloriesConsumed;
}
/*This is a method to set targetCaloriesConsumed*/
void User::setTargetCalConsumed(int cal){
    targetCaloriesConsumed = cal;
}
/*This is a method to calculate BMI*/
double User::CalculateBMI(){
    double heightmetre = userHeight / 100;
    double bmi = userWeight / (heightmetre * heightmetre);
    return bmi;
}
/*This is a method to print user details*/
void User::PrintUser(){
    cout<<"Username: " << userName << "\n";
    if(userGender  == 0){
        cout<<"Gender: Male\n";
    } else if(userGender  == 1){
        cout<<"Gender: Female\n";
    } else {
        cout<<"Gender: Unknown\n";
    }
    cout<<"Age: " << userAge << "\n";
    cout<<"Weight(kg): " << userWeight << "\n";
    cout<<"Height(cm): " << userHeight << "\n";
    cout<<"Target Calories Consumed Per Day(cal): " << targetCaloriesConsumed << "\n";
}
