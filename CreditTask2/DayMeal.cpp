/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DayMeal.cpp
 * Author: peter
 * 
 * Created on May 8, 2021, 4:41 PM
 */

#include "DayMeal.h"
DayMeal::DayMeal(const DayMeal& orig) {
}

DayMeal::~DayMeal() {
}
/*This is a constructor to construct a DayMeal object which set the dayCal to 0 and the eatenDate.*/
DayMeal::DayMeal(){
    dayCal = 0;
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string year = to_string(1900 + ltm->tm_year);
    string month = to_string(1 + ltm->tm_mon);
    string day = to_string(ltm->tm_mday);
    eatenDate[0] = day;
    eatenDate[1] = month;
    eatenDate[2] = year;
}
/*This is a method to obtain the day of eatenDate*/
string DayMeal::GetEatDay(){
    return eatenDate[0];
}
/*This is a method to obtain the month of eatenDate*/
string DayMeal::GetEatMonth(){
    return eatenDate[1];
}
/*This is a method to obtain the year of eatenDate*/
string DayMeal::GetEatYear(){
    return eatenDate[2];
}
/*This is a method to obtain the date of eatenDate*/
string DayMeal::GetEatDate(){
    return eatenDate[0] + "/" + eatenDate[1] + "/" + eatenDate[2];
}
/*This is a method to obtain dayCal*/
int DayMeal::GetDayCal(){
    return dayCal;
}
/*This is a method to add a meal object into eaten*/
void DayMeal::AddEaten(Meal* m){
    eaten.push_back(m);
    CalDayCal();
    cout<<"Added into eaten\n"<<endl;
}
/*This is a method to remove a meal object from eaten*/
void DayMeal::RemoveEaten(int id, string cat){
    bool remove = false;
    for(int i = 0; i < eaten.size(); i++){
        if((id == eaten.at(i)->GetMealID()) && (cat == eaten.at(i)->GetMealCat())){
            eaten.erase(eaten.begin()+i);
            remove = true;
        }
    }
    if(remove){
        cout<<"Remove from eaten\n"<<endl;
        CalDayCal();
    } else {
        cout<<"Meal not found\n"<<endl;
    }
}
/*This is a method to calculate the calories gained in that DayMeal object*/
void DayMeal::CalDayCal(){
    dayCal = 0;
    for(int i = 0; i < eaten.size(); i++){
        dayCal += eaten.at(i)->GetMealCal();
    }
}
/*This is a method to print DayMeal information*/
void DayMeal::PrintDayMeal(){
    cout<<"Date: " << eatenDate[0] << "/" << eatenDate[1] << "/" << eatenDate[2] << endl;
    cout<<"Breakfast:"<<endl;
    int catCal = 0;
    for(int i = 0; i < eaten.size(); i++){
        if(eaten.at(i)->GetMealCat() == "Breakfast"){
            eaten.at(i)->PrintMeal();
            cout<<endl;
            catCal += eaten.at(i)->GetMealCal();
        }
    }
    cout<<"Total Calories(cal): " << catCal <<endl;
    cout<<endl;
    
    cout<<"Lunch:"<<endl;
    catCal = 0;
    for(int i = 0; i < eaten.size(); i++){
        if(eaten.at(i)->GetMealCat() == "Lunch"){
            eaten.at(i)->PrintMeal();
            cout<<endl;
            catCal += eaten.at(i)->GetMealCal();
        }
    }
    cout<<"Total Calories(cal): " << catCal <<endl;
    cout<<endl;
    
    cout<<"Dinner:"<<endl;
    catCal = 0;
    for(int i = 0; i < eaten.size(); i++){
        if(eaten.at(i)->GetMealCat() == "Dinner"){
            eaten.at(i)->PrintMeal();
            cout<<endl;
            catCal += eaten.at(i)->GetMealCal();
        }
    }
    cout<<"Total Calories(cal): " << catCal <<endl;
    cout<<endl;
    
    cout<<"Supper:"<<endl;
    catCal = 0;
    for(int i = 0; i < eaten.size(); i++){
        if(eaten.at(i)->GetMealCat() == "Supper"){
            eaten.at(i)->PrintMeal();
            cout<<endl;
            catCal += eaten.at(i)->GetMealCal();
        }
    }
    cout<<"Total Calories(cal): " << catCal <<endl;
    cout<<endl;
    cout<<"Total Day Consumption(cal): " << dayCal <<endl;
    cout<<endl;

}


