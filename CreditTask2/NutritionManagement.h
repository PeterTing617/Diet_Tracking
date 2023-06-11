/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NutritionManagement.h
 * Author: peter
 *
 * Created on May 1, 2021, 5:05 PM
 */

#ifndef NUTRITIONMANAGEMENT_H
#define NUTRITIONMANAGEMENT_H
#include <vector>
#include <iostream>
#include "Nutrition.h"
using namespace std;

class NutritionManagement {
public:
    NutritionManagement();
    NutritionManagement(const NutritionManagement& orig);
    virtual ~NutritionManagement();
    void AddNutrition(Nutrition* n);
    void DeleteNutrition(int id);
    int NutritionSize();
    Nutrition *SearchNutrition(int id);
    bool SearchSimilar(Nutrition* n);
    void EditNutrition(int id);
    void EditNutritionName(Nutrition *n, string editname);
    void EditNutritionVolume(Nutrition *n, int editvolume);
    void EditNutritionCalories(Nutrition *n, int editcalories);
    void PrintNutritionList();
    int SearchLastID();
    void PrintSearched(int id);
private:
    vector<Nutrition *> nutritionDetails;
};

#endif /* NUTRITIONMANAGEMENT_H */

