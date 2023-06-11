/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MonthCalories.cpp
 * Author: peter
 * 
 * Created on May 11, 2021, 8:03 PM
 */

#include "MonthBurnt.h"

MonthBurnt::MonthBurnt() {
}

MonthBurnt::MonthBurnt(const MonthBurnt& orig) {
}

MonthBurnt::~MonthBurnt() {
}
/*This is a constructor to construct a MonthBurnt object*/
MonthBurnt::MonthBurnt(string m, string y){
    monthCal = m;
    yearCal = y;
    monthCalBurnt = 0;
}
/*This is a method to add calories into monthCalBurnt*/
void MonthBurnt::AddMonthBurntCal(double c){
    monthCalBurnt += c;
}
/*This is a method to print the information of MonthCalories*/
void MonthBurnt::PrintResult(){
    if(monthCal == "1"){
        cout<<"Month: January "<< yearCal <<endl;
    } else if(monthCal == "2"){
        cout<<"Month: February "<< yearCal <<endl;
    } else if(monthCal == "3"){
        cout<<"Month: March "<< yearCal <<endl;
    } else if(monthCal == "4"){
        cout<<"Month: April "<< yearCal <<endl;
    } else if(monthCal == "5"){
        cout<<"Month: May "<< yearCal <<endl;
    } else if(monthCal == "6"){
        cout<<"Month: June "<< yearCal <<endl;
    } else if(monthCal == "7"){
        cout<<"Month: July "<< yearCal <<endl;
    } else if(monthCal == "8"){
        cout<<"Month: August "<< yearCal <<endl;
    } else if(monthCal == "9"){
        cout<<"Month: September "<< yearCal <<endl;
    } else if(monthCal == "10"){
        cout<<"Month: October "<< yearCal <<endl;
    } else if(monthCal == "11"){
        cout<<"Month: November "<< yearCal <<endl;
    } else {
        cout<<"Month: December "<< yearCal <<endl;
    }
    cout<<"Month Calories Burnt(cal): "<< monthCalBurnt << endl;
}
/*This is a method to check for similarities on the month and the year*/
bool MonthBurnt::CheckSimilar(string m, string y){
    if((monthCal == m) && (yearCal == y)){
        return true;
    } else {
        return false;
    }
}
/*This is a method to get monthCal*/
string MonthBurnt::GetMonthCal(){
    return monthCal;
}
/*This is a method to get yearCal*/
string MonthBurnt::GetYearCal(){
    return yearCal;
}

