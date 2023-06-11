/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DietTracking.h
 * Author: peter
 *
 * Created on May 12, 2021, 11:25 AM
 */

#ifndef DIETTRACKING_H
#define DIETTRACKING_H
#include <vector>
#include "MonthConsumed.h"
#include "DayMeal.h"
using namespace std;

class DietTracking {
public:
    DietTracking(const DietTracking& orig);
    virtual ~DietTracking();
    DietTracking();
    void AddDayMeal(DayMeal * dm);
    int EatenListSize();
    void PrintMonthlyCalConsumed();
    void PrintMealAte();
    double ReturnCurrentConsumed();
    bool DateRecorded(string date);
    void AddMealIntoDayMeal(string date, int mealid, string mealfood, int mealvolume, int mealcal, Category mealcat);
    void DeleteMealFromDayMeal(string date, int mealid, string mealcat);
    void PrintCurrentMeal(string date);
private:
    vector<DayMeal *> eatenList;

};

#endif /* DIETTRACKING_H */

