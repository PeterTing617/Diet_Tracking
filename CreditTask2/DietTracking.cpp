/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DietTracking.cpp
 * Author: peter
 * 
 * Created on May 12, 2021, 11:25 AM
 */

#include "DietTracking.h"
DietTracking::DietTracking(const DietTracking& orig) {
}

DietTracking::~DietTracking() {
}
/*This is a constructor to create a DietTracking object*/
DietTracking::DietTracking() {
}
/*This is a method to add a DayMeal object into eatenList*/
void DietTracking::AddDayMeal(DayMeal * dm){
    eatenList.push_back(dm);
}
/*This is a method to get the size of eatenList*/
int DietTracking::EatenListSize(){
    return eatenList.size();
}
/*This is a method to add print monthly calories consumption*/
void DietTracking::PrintMonthlyCalConsumed(){
    vector<MonthConsumed*> mc;
    for(int i = 0; i < eatenList.size(); i++){
        bool similar = false;
        for(int j = 0; j < mc.size(); j++){
            if(mc.at(j)->CheckSimilar(eatenList.at(i)->GetEatMonth(), eatenList.at(i)->GetEatYear())){
                similar = true;
            } 
        }
        if(!similar){
            mc.push_back(new MonthConsumed(eatenList.at(i)->GetEatMonth(), eatenList.at(i)->GetEatYear()));
        }
    }
    for(int i = 0; i < eatenList.size(); i++){
        for(int j = 0; j < mc.size(); j++){
            if(mc.at(j)->CheckSimilar(eatenList.at(i)->GetEatMonth(), eatenList.at(i)->GetEatYear())){
                double consumed = eatenList.at(i)->GetDayCal();
                mc.at(j)->AddMonthConsumedCal(consumed);
            } 
        }
    }
    cout<<"-------------------------------------"<<endl;
    cout<<"Monthly Calories Consumed"<<endl;
    cout<<"-------------------------------------"<<endl;
    for(int j = 0; j < mc.size(); j++){
        mc.at(j)->PrintEatResult();
        cout<<endl;
    }   
}
/*This is a method to print all meals in eatenList*/
void DietTracking::PrintMealAte(){
    cout<<"-------------------------------------"<<endl;
    cout<<"Meals Ate"<<endl;
    cout<<"-------------------------------------"<<endl;
    for(int i = 0; i < eatenList.size(); i++){
        eatenList.at(i)->PrintDayMeal();
        cout<<endl;
    }   
}
/*This is a method to return calories consumed the date it is called*/
double DietTracking::ReturnCurrentConsumed(){
    time_t now = time(0);
    tm *ltm = localtime(&now);
    string year = to_string(1900 + ltm->tm_year);
    string month = to_string(1 + ltm->tm_mon);
    string day = to_string(ltm->tm_mday);
    string currentDate = day + "/" + month + "/" + year;
    int currentConsumed = 0;
    for(int i = 0; i < eatenList.size(); i++){
        if(eatenList.at(i)->GetEatDate() == currentDate){
            currentConsumed += eatenList.at(i)->GetDayCal();
        }
    }
    return currentConsumed;
}
/*This is a method to check whether a date has been recorded inside eatenList*/
bool DietTracking::DateRecorded(string date){
    bool recorded = false;
    for(int i = 0; i < eatenList.size(); i++){
        if(eatenList.at(i)->GetEatDate() == date){
            recorded = true;
        }
    }
    return recorded;
}
/*This is a method to add a Meal object into DayMeal object from eatenList*/
void DietTracking::AddMealIntoDayMeal(string date, int mealid, string mealfood, int mealvolume, int mealcal, Category mealcat){
    for(int i = 0; i < eatenList.size(); i++){
        if(eatenList.at(i)->GetEatDate() == date){
            eatenList.at(i)->AddEaten(new Meal(mealid, mealfood, mealvolume, mealcal, mealcat));
        }
    }
}
/*This is a method to remove a Meal object from DayMeal object from eatenList*/
void DietTracking::DeleteMealFromDayMeal(string date, int mealid, string mealcat){
    for(int i = 0; i < eatenList.size(); i++){
        if(eatenList.at(i)->GetEatDate() == date){
            eatenList.at(i)->RemoveEaten(mealid, mealcat);
        }
    }
}
/*This is a method to print a DayMeal object from a particular date*/
void DietTracking::PrintCurrentMeal(string date){
    cout<<"-------------------------------------"<<endl;
    cout<<"Today's Meal"<<endl;
    cout<<"-------------------------------------"<<endl;
    for(int i = 0; i < eatenList.size(); i++){
        if(eatenList.at(i)->GetEatDate() == date){
            eatenList.at(i)->PrintDayMeal();
        }
    }

}

