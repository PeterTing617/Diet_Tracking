/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   MonthConsumed.h
 * Author: peter
 *
 * Created on May 12, 2021, 11:37 AM
 */

#ifndef MONTHCONSUMED_H
#define MONTHCONSUMED_H
#include <string>
#include <iostream>
using namespace std;

class MonthConsumed {
public:
    MonthConsumed();
    MonthConsumed(const MonthConsumed& orig);
    virtual ~MonthConsumed();
    MonthConsumed(string m, string y);
    void AddMonthConsumedCal(double c);
    void PrintEatResult();
    bool CheckSimilar(string m, string y);
    string GetMonthEat();
    string GetYearEat();
private:
    string monthEat;
    string yearEat;
    double monthCalEat;

};

#endif /* MONTHCONSUMED_H */

