/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: peter
 *
 * Created on May 1, 2021, 12:47 PM
 */
#include "Nutrition.h"
#include "User.h"
#include "Exercise.h"
#include "Running.h"
#include "Walking.h"
#include "Freestyle.h"
#include "NutritionManagement.h"
#include "ExerciseTracking.h"
#include "Meal.h"
#include "DayMeal.h"
#include "DietTracking.h"
#include <iostream>
#include <string>
#include <ctime>
using namespace std;
/*
 * 
 */
int main(int argc, char** argv) {
    User *Peter = new User("Peter", Gender::Male, 20, 72, 180);
    DietTracking *dt = new DietTracking();
    ExerciseTracking *et = new ExerciseTracking();
    NutritionManagement *nm = new NutritionManagement();
    while(true){
        cout<<"Menu:"<<endl;
        cout<<"(1)User Profile Management"<<endl;
        cout<<"(2)Nutrition Facts and Details Management"<<endl;
        cout<<"(3)Diet Tracking"<<endl;
        cout<<"(4)Exercise Tracking"<<endl;
        cout<<"(5)Log Out"<<endl;
        cout<<"Choose an option: ";
        string option;
        getline(cin, option);
        cout<<endl;
        
        if(option == "1"){
            string prof;
            while(prof != "10"){
                cout<<"Menu:"<<endl;
                cout<<"(1)Edit Name"<<endl;
                cout<<"(2)Edit Gender"<<endl;
                cout<<"(3)Edit Age"<<endl;
                cout<<"(4)Edit Weight"<<endl;
                cout<<"(5)Edit Height"<<endl;
                cout<<"(6)Calculate BMI"<<endl;
                cout<<"(7)Set Target Calories Consumed Per Day"<<endl;
                cout<<"(8)Check Today's Target"<<endl;
                cout<<"(9)View Profile"<<endl;
                cout<<"(10)Back"<<endl;
                cout<<"Choose an option: ";
                getline(cin, prof);
                cout<<endl;

                if(prof == "1"){
                    cout<<"Enter Name: ";
                    string editname;
                    getline(cin, editname);
                    if(editname == ""){
                        cout<<"Cannot be blank"<<endl;
                        cout<<endl;
                    } else {
                        Peter->setUserName(editname);
                        cout<<"Edited"<<endl;
                        cout<<endl;
                    }
                } else if(prof == "2"){
                    cout<<"Choose Gender(1)Male, (2)Female, (3)Unknown: ";
                    string editgender;
                    getline(cin, editgender);
                    if(editgender == "1"){
                        Peter->setGender(Gender::Male);
                        cout<<"Edited"<<endl;
                        cout<<endl;
                    } else if(editgender == "2"){
                        Peter->setGender(Gender::Female);
                        cout<<"Edited"<<endl;
                        cout<<endl;
                    } else if(editgender == "3"){
                        Peter->setGender(Gender::Unknown);
                        cout<<"Edited"<<endl;
                        cout<<endl;
                    } else {
                        cout<<"Invalid Input"<<endl;
                        cout<<endl;
                    }
                } else if(prof == "3"){
                    cout<<"Enter Age: ";
                    int editage;
                    string inputage;
                    getline(cin, inputage);
                    editage = stoi(inputage);
                    if(editage <= 0){
                        cout<<"Invalid Number"<<endl;
                        cout<<endl;
                    } else {
                        Peter->setAge(editage);
                        cout<<"Edited"<<endl;
                        cout<<endl;
                    }
                } else if(prof == "4"){
                    cout<<"Enter Weight(kg): ";
                    double editweight;
                    string inputweight;
                    getline(cin, inputweight);
                    editweight = stod(inputweight);
                    if(editweight <= 0){
                        cout<<"Invalid Number"<<endl;
                        cout<<endl;
                    } else {
                        Peter->setWeight(editweight);
                        cout<<"Edited"<<endl;
                        cout<<endl;
                    }
                } else if(prof == "5"){
                    cout<<"Enter Height(cm): ";
                    double editheight;
                    string inputheight;
                    getline(cin, inputheight);
                    editheight = stod(inputheight);
                    if(editheight <= 0){
                        cout<<"Invalid Number"<<endl;
                        cout<<endl;
                    } else {
                        Peter->setHeight(editheight);
                        cout<<"Edited"<<endl;
                        cout<<endl;
                    }
                } else if(prof == "6"){
                    double bmi = Peter->CalculateBMI();
                    cout<<"Your BMI is " << bmi <<endl;
                    if(bmi < 18.5){
                        cout<< "You are underweight" <<endl;
                    } else if((bmi >= 18.5) && (bmi < 25)){
                        cout<< "Your weight is normal" <<endl;
                    } else if((bmi >= 25) && (bmi < 30)){
                        cout<< "You are overweight" <<endl;
                    } else {
                        cout<< "You are obese" <<endl;
                    }
                    cout<<endl;
                } else if(prof == "7"){
                    cout<<"Target Calories(cal): ";
                    int target;
                    string inputtarget;
                    getline(cin, inputtarget);
                    target = stoi(inputtarget);
                    if(target < 0){
                        cout<<"Invalid Number"<<endl;
                        cout<<endl;
                    } else {
                        Peter->setTargetCalConsumed(target);
                        cout<<"Target set"<<endl;
                        cout<<endl;
                    }
                } else if(prof == "8"){
                    int caleat = dt->ReturnCurrentConsumed();
                    double calburn = et->ReturnCurrentBurnt();
                    double eatminusburn = caleat - calburn;
                    if(eatminusburn > Peter->viewTargetCalConsumed()){
                        cout<<"You have exceeded your target calories consumption"<<endl;
                        cout<<"Calories Consumed(cal): " << caleat << endl;
                        cout<<"Calories Burnt(cal): " << calburn << endl;
                        cout<<endl;
                    } else {
                        cout<<"You have not exceeded your target calories consumption"<<endl;
                        cout<<"Target Calories Consumed(cal): " << Peter->viewTargetCalConsumed() << endl;
                        cout<<"Calories Consumed(cal): " << caleat << endl;
                        cout<<"Calories Burnt(cal): " << calburn << endl;
                        cout<<endl;
                    }
                    
                
                } else if(prof == "9"){
                    cout<<"-------------------------------------"<<endl;
                    cout<<"Personal Profile"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    Peter->PrintUser();
                    cout<<endl;
                }     
            }
        }
        
        if(option == "2"){
            string nut;
            while(nut != "6"){
                cout<<"Menu:"<<endl;
                cout<<"(1)Add Nutrition"<<endl;
                cout<<"(2)Edit Nutrition"<<endl;
                cout<<"(3)Delete Nutrition"<<endl;
                cout<<"(4)Search Nutrition"<<endl;
                cout<<"(5)Print Nutrition List"<<endl;
                cout<<"(6)Back"<<endl;
                cout<<"Choose an option: ";
                getline(cin, nut);
                cout<<endl;
                
                if(nut == "1"){
                    int fID;
                    if(nm->NutritionSize() == 0){
                        fID = 1;
                    } else {
                        fID = nm->SearchLastID() + 1; 
                    }
                    cout<<"Enter Food Name: ";
                    string fName;
                    getline(cin, fName);
                    cout<<"Enter Food Volume(gram): ";
                    int fVolume;
                    string inputvolume;
                    getline(cin, inputvolume);
                    fVolume = stoi(inputvolume);
                    cout<<"Enter Food Calories(cal): ";
                    int fCalories;
                    string inputcalories;
                    getline(cin, inputcalories);
                    fCalories = stoi(inputcalories);
                    if(fName == ""){
                        cout<<"Cannot be blank"<<endl;
                        cout<<endl;
                    } else if((fVolume < 0) || (fCalories < 0)){
                        cout<<"Invalid Input"<<endl;
                        cout<<endl;
                    } else {
                        nm->AddNutrition(new Nutrition(fID, fName, fVolume, fCalories));
                    }
                } else if(nut == "2"){
                    cout<<"Enter Food ID: ";
                    int fID;
                    string inputid;
                    getline(cin, inputid);
                    fID = stoi(inputid);
                    nm->EditNutrition(fID);
                } else if(nut == "3"){
                    cout<<"Enter Food ID: ";
                    int fID;
                    string inputid;
                    getline(cin, inputid);
                    fID = stoi(inputid);
                    nm->DeleteNutrition(fID);
                } else if(nut == "4"){
                    cout<<"Enter Food ID: ";
                    int fID;
                    string inputid;
                    getline(cin, inputid);
                    fID = stoi(inputid);
                    nm->PrintSearched(fID);
                
                } else if(nut == "5"){
                    cout<<"-------------------------------------"<<endl;
                    cout<<"Nutrition List"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    nm->PrintNutritionList();
                }
            }
        }
        
        if(option == "3"){
            string dietT;
            while(dietT != "6"){
                cout<<"Menu:"<<endl;
                cout<<"(1)Add Meals"<<endl;
                cout<<"(2)Remove Meals"<<endl;
                cout<<"(3)Monthly Calory Consumption"<<endl;
                cout<<"(4)Meals Ate"<<endl;
                cout<<"(5)Today's Meal"<<endl;
                cout<<"(6)Back"<<endl;
                cout<<"Choose an option: ";
                getline(cin, dietT);
                cout<<endl;
                
                if(dietT == "1"){
                    time_t now = time(0);
                    tm *ltm = localtime(&now);
                    string year = to_string(1900 + ltm->tm_year);
                    string month = to_string(1 + ltm->tm_mon);
                    string day = to_string(ltm->tm_mday);
                    string today = day + "/" + month + "/" + year;
                    bool rD = dt->DateRecorded(today);
                    if(!rD){
                        dt->AddDayMeal(new DayMeal());
                    }
                    cout<<"-------------------------------------"<<endl;
                    cout<<"Nutrition List"<<endl;
                    cout<<"-------------------------------------"<<endl;
                    nm->PrintNutritionList();
                    int foodid;
                    string inputfoodid;
                    Nutrition *chosen;
                    cout<<"Enter Food ID: ";
                    getline(cin, inputfoodid);
                    foodid = stoi(inputfoodid);
                    chosen = nm->SearchNutrition(foodid);
                    if(chosen->getFoodID() == -1){
                    } else {
                        string mCat;
                        cout<<"Enter Category(1)Breakfast, (2)Lunch, (3)Dinner, (4)Supper: ";
                        getline(cin, mCat);
                        if(mCat == "1"){
                            dt->AddMealIntoDayMeal(today, chosen->getFoodID(), chosen->getFoodName(), chosen->getFoodVolume(), chosen->getFoodCalories(), Category::Breakfast);
                        } else if(mCat == "2"){
                            dt->AddMealIntoDayMeal(today, chosen->getFoodID(), chosen->getFoodName(), chosen->getFoodVolume(), chosen->getFoodCalories(), Category::Lunch);
                        } else if(mCat == "3"){
                            dt->AddMealIntoDayMeal(today, chosen->getFoodID(), chosen->getFoodName(), chosen->getFoodVolume(), chosen->getFoodCalories(), Category::Dinner);
                        } else if(mCat == "4"){
                            dt->AddMealIntoDayMeal(today, chosen->getFoodID(), chosen->getFoodName(), chosen->getFoodVolume(), chosen->getFoodCalories(), Category::Supper);
                        } else {
                            cout<<"Invalid Input\n"<<endl;
                        }
                    }
                } else if(dietT == "2"){
                    time_t now = time(0);
                    tm *ltm = localtime(&now);
                    string year = to_string(1900 + ltm->tm_year);
                    string month = to_string(1 + ltm->tm_mon);
                    string day = to_string(ltm->tm_mday);
                    string today = day + "/" + month + "/" + year;
                    
                    dt->PrintCurrentMeal(today);
                    
                    int deletefoodid;
                    string inputdeletefoodid;
                    cout<<"Enter Food ID: ";
                    getline(cin, inputdeletefoodid);
                    deletefoodid = stoi(inputdeletefoodid);
                    
                    string deleteFrom;
                    cout<<"Remove from(1)Breakfast, (2)Lunch, (3)Dinner, (4)Supper: ";
                    getline(cin, deleteFrom);
                    if(deleteFrom == "1"){
                        dt->DeleteMealFromDayMeal(today,deletefoodid,"Breakfast");
                    } else if(deleteFrom == "2"){
                        dt->DeleteMealFromDayMeal(today,deletefoodid,"Lunch");
                    } else if(deleteFrom == "3"){
                        dt->DeleteMealFromDayMeal(today,deletefoodid,"Dinner");
                    } else if(deleteFrom == "4"){
                        dt->DeleteMealFromDayMeal(today,deletefoodid,"Supper");
                    } else {
                        cout<<"Invalid Input\n"<<endl;
                    }
                } else if(dietT == "3"){
                    dt->PrintMonthlyCalConsumed();
                } else if(dietT == "4"){
                    dt->PrintMealAte();
                } else if(dietT == "5"){
                    time_t now = time(0);
                    tm *ltm = localtime(&now);
                    string year = to_string(1900 + ltm->tm_year);
                    string month = to_string(1 + ltm->tm_mon);
                    string day = to_string(ltm->tm_mday);
                    string today = day + "/" + month + "/" + year;
                    dt->PrintCurrentMeal(today);
                }
            }
            
        }
        
        if(option == "4"){
            string exerciseT;
            while(exerciseT != "4"){
                cout<<"Menu:"<<endl;
                cout<<"(1)Add Exercise"<<endl;
                cout<<"(2)Monthly Calory Burnt"<<endl;
                cout<<"(3)Exercises Done"<<endl;
                cout<<"(4)Back"<<endl;
                cout<<"Choose an option: ";
                getline(cin, exerciseT);
                cout<<endl;
                
                if(exerciseT == "1"){
                    cout<<"Choose activity(1)Walking, (2)Running, (3)Freestyle: ";
                    string activity;
                    getline(cin, activity);
                    if(activity == "1"){
                        cout<<"Enter duration(minutes): ";
                        int dur;
                        string inputDur;
                        getline(cin, inputDur);
                        dur = stoi(inputDur);
                        if(dur < 0){
                            cout<<"Invalid Number"<<endl;
                            cout<<endl;
                        } else {
                            et->AddExercise(new Walking(dur));
                            cout<<"Added\n"<<endl;     
                        }
                    } else if(activity == "2"){
                        cout<<"Enter duration(minutes): ";
                        int dur;
                        string inputDur;
                        getline(cin, inputDur);
                        dur = stoi(inputDur);
                        if(dur < 0){
                            cout<<"Invalid Number"<<endl;
                            cout<<endl;
                        } else {
                            et->AddExercise(new Running(dur));
                            cout<<"Added\n"<<endl;
                        }
                    } else if(activity == "3"){
                        cout<<"Enter duration(minutes): ";
                        int dur;
                        string inputDur;
                        getline(cin, inputDur);
                        dur = stoi(inputDur);
                        if(dur < 0){
                            cout<<"Invalid Number"<<endl;
                            cout<<endl;
                        } else {
                            et->AddExercise(new Freestyle(dur));
                            cout<<"Added\n"<<endl;
                        }
                    } else {
                        cout<<"Invalid Input\n"<<endl;
                    }
                } else if (exerciseT == "2"){
                    et->PrintMonthlyCalBurnt();
                } else if (exerciseT == "3"){
                    et->PrintExercisesDone();
                }
            }            
        }
        
        if(option == "5"){
            cout<<"Program terminates"<<endl;
            break;
        }    
    }
    
    system("pause");
    
}

