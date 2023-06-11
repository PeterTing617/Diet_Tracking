/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   DayMeal.h
 * Author: peter
 *
 * Created on May 8, 2021, 4:41 PM
 */

#ifndef DAYMEAL_H
#define DAYMEAL_H
#include <vector>
#include <iostream>
#include <ctime>
#include "Meal.h"
using namespace std;

class DayMeal {
public:
    DayMeal(const DayMeal& orig);
    virtual ~DayMeal();
    DayMeal();
    string GetEatDay();
    string GetEatMonth();
    string GetEatYear();
    string GetEatDate();
    int GetDayCal();
    void AddEaten(Meal * m);
    void RemoveEaten(int id, string cat);
    void CalDayCal();
    void PrintDayMeal();
private:
    vector<Meal *> eaten;
    string eatenDate[3];
    int dayCal;
};

#endif /* DAYMEAL_H */

