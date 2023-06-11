/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MonthConsumed.cpp
 * Author: peter
 * 
 * Created on May 12, 2021, 11:37 AM
 */

#include "MonthConsumed.h"

MonthConsumed::MonthConsumed() {
}

MonthConsumed::MonthConsumed(const MonthConsumed& orig) {
}

MonthConsumed::~MonthConsumed() {
}
/*This is a constructor to construct a MonthConsumed object*/
MonthConsumed::MonthConsumed(string m, string y){
    monthEat = m;
    yearEat = y;
    monthCalEat = 0;
}
/*This is a method to add calories into monthCalEat*/
void MonthConsumed::AddMonthConsumedCal(double c){
    monthCalEat += c;
}
/*This is a method to print the information of MonthConsumed*/
void MonthConsumed::PrintEatResult(){
    if(monthEat == "1"){
        cout<<"Month: January "<< yearEat <<endl;
    } else if(monthEat == "2"){
        cout<<"Month: February "<< yearEat <<endl;
    } else if(monthEat == "3"){
        cout<<"Month: March "<< yearEat <<endl;
    } else if(monthEat == "4"){
        cout<<"Month: April "<< yearEat <<endl;
    } else if(monthEat == "5"){
        cout<<"Month: May "<< yearEat <<endl;
    } else if(monthEat == "6"){
        cout<<"Month: June "<< yearEat <<endl;
    } else if(monthEat == "7"){
        cout<<"Month: July "<< yearEat <<endl;
    } else if(monthEat == "8"){
        cout<<"Month: August "<< yearEat <<endl;
    } else if(monthEat == "9"){
        cout<<"Month: September "<< yearEat <<endl;
    } else if(monthEat == "10"){
        cout<<"Month: October "<< yearEat <<endl;
    } else if(monthEat == "11"){
        cout<<"Month: November "<< yearEat <<endl;
    } else {
        cout<<"Month: December "<< yearEat <<endl;
    }
    cout<<"Month Calories Consumed(cal): "<< monthCalEat << endl;
}
/*This is a method to check for similarities with monthEat and yearEat*/
bool MonthConsumed::CheckSimilar(string m, string y){
    if((monthEat == m) && (yearEat == y)){
        return true;
    } else {
        return false;
    }
}
/*This is a method to get monthEat*/
string MonthConsumed::GetMonthEat(){
    return monthEat;
}
/*This is a method to get yearEat*/
string MonthConsumed::GetYearEat(){
    return yearEat;
}