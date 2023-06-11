/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   User.h
 * Author: peter
 *
 * Created on May 7, 2021, 3:25 PM
 */

#ifndef USER_H
#define USER_H
#include <string>
#include <iostream>
using namespace std;
/*This is an enumeration for Gender*/
enum Gender{
    Male,
    Female,
    Unknown
};

class User {
public:
    User();
    User(const User& orig);
    virtual ~User();
    User(string name, Gender gender, int age, double weight, double height);
    string getUserName();
    void setUserName(string setname);
    string getGender();
    void setGender(Gender setgender);
    int getAge();
    void setAge(int setage);
    double getWeight();
    void setWeight(double setweight);
    double getHeight();
    void setHeight(double setheight);
    int viewTargetCalConsumed();
    void setTargetCalConsumed(int cal);
    double CalculateBMI();
    void PrintUser();
private:
    string userName;
    Gender userGender;
    int userAge;
    double userWeight;
    double userHeight;
    int targetCaloriesConsumed;
};

#endif /* USER_H */

