/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MonthCalories.h
 * Author: peter
 *
 * Created on May 11, 2021, 8:03 PM
 */

#ifndef MONTHBURNT_H
#define MONTHBURNT_H
#include <string>
#include <iostream>
using namespace std;

class MonthBurnt {
public:
    MonthBurnt();
    MonthBurnt(const MonthBurnt& orig);
    virtual ~MonthBurnt();
    MonthBurnt(string m, string y);
    void AddMonthBurntCal(double c);
    void PrintResult();
    bool CheckSimilar(string m, string y);
    string GetMonthCal();
    string GetYearCal();
private:
    string monthCal;
    string yearCal;
    double monthCalBurnt;
};

#endif /* MONTHCALORIES_H */

