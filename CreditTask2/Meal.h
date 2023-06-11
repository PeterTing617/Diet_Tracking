/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Meal.h
 * Author: peter
 *
 * Created on May 8, 2021, 4:10 PM
 */

#ifndef MEAL_H
#define MEAL_H
#include <string>
#include <iostream>
using namespace std;
/*This is an enumeration for Category*/
enum Category{
    Breakfast,
    Lunch,
    Dinner,
    Supper
};

class Meal {
public:
    Meal();
    Meal(const Meal& orig);
    virtual ~Meal();
    Meal(int mealid, string mealfood, int mealvolume, int mealcal, Category mealcat);
    int GetMealID();
    string GetMealFood();
    int GetMealVolume();
    int GetMealCal();
    string GetMealCat();
    void PrintMeal();
private:
    int mealID;
    string mealFood;
    int mealVolume;
    int mealCalories;
    Category mealCategory;
};

#endif /* MEAL_H */

