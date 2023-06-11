/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Nutrition.h
 * Author: peter
 *
 * Created on May 1, 2021, 4:03 PM
 */

#ifndef NUTRITION_H
#define NUTRITION_H
#include <string>
#include <iostream>
using namespace std;

class Nutrition {
public:
    Nutrition();
    Nutrition(const Nutrition& orig);
    virtual ~Nutrition();
    Nutrition(int foodid, string foodname, int foodvolume, int foodcalories);
    int getFoodID();
    string getFoodName();
    int getFoodVolume();
    int getFoodCalories();
    void changeFoodName(string editname);
    void changeFoodVolume(int editvolume);
    void changeFoodCalories(int editcalories);
    void printNutritionDetail();
private:
    int foodID;
    string foodName;
    int foodVolume;
    int foodCalories;
};

#endif /* NUTRITION_H */

