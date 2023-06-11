/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   NutritionManagement.cpp
 * Author: peter
 * 
 * Created on May 1, 2021, 5:05 PM
 */

#include "NutritionManagement.h"
/*This is a constructor to construct a NutritionManagement object*/
NutritionManagement::NutritionManagement() {
}

NutritionManagement::NutritionManagement(const NutritionManagement& orig) {
}

NutritionManagement::~NutritionManagement() {
}
/*This is a method to add a Nutrition object into nutritionDetails*/
void NutritionManagement::AddNutrition(Nutrition *n){
    if(SearchSimilar(n)){
    
    } else {
        nutritionDetails.push_back(n);
        cout<<"Added successfully\n"<<endl;
    }
}
/*This is a method to remove a Nutrition object from nutritionDetails*/
void NutritionManagement::DeleteNutrition(int id){
    bool deleted = false;
    for(int i = 0; i < nutritionDetails.size(); i++){
        if(id == nutritionDetails.at(i)->getFoodID()){
            nutritionDetails.erase(nutritionDetails.begin()+i);
            delete nutritionDetails[i];
            deleted = true;
        }
    }
    if(deleted){
        cout<<"Deleted successfully\n"<<endl;
    } else {
        cout<<"Nutrition not found\n"<<endl;
    }
}
/*This is a method to get the size of nutritionDetails*/
int NutritionManagement::NutritionSize(){
    return nutritionDetails.size();
}
/*This is a method to return a Nutrition object the same as the inputted id*/
Nutrition *NutritionManagement::SearchNutrition(int id){
    bool searched = false;
    int index;
    for(int i = 0; i < nutritionDetails.size(); i++){
        if(id == nutritionDetails.at(i)->getFoodID()){
            index = i;
            searched = true;
        }
    }
    if(!searched){
        cout<<"Nutrition not found"<<endl;
        Nutrition *n = new Nutrition(-1,"NULL",-1,-1);
        return n;
    } else {
        int copyid = nutritionDetails.at(index)->getFoodID();
        string copyname = nutritionDetails.at(index)->getFoodName();
        int copyvolume = nutritionDetails.at(index)->getFoodVolume();
        int copycalories = nutritionDetails.at(index)->getFoodCalories();
        Nutrition *n = new Nutrition(copyid,copyname,copyvolume,copycalories);
        return n;
    }
}
/*This is a method to search for similarities between different Nutrition object*/
bool NutritionManagement::SearchSimilar(Nutrition* n){
    bool similar = false;
    int id;
    for(int i = 0; i < nutritionDetails.size(); i++){
        if((n->getFoodName() == nutritionDetails.at(i)->getFoodName()) && (n->getFoodVolume() == nutritionDetails.at(i)->getFoodVolume()) && (n->getFoodCalories() == nutritionDetails.at(i)->getFoodCalories())){
            id = nutritionDetails.at(i)->getFoodID();
            similar = true;
        }
    }
    if(similar){
        cout<<"Similar nutrition details found at ID: "<< id  << "\n" << endl;
        return true;
    } else {
        return false;
    }
}
/*This is a method to edit Nutrition details*/
void NutritionManagement::EditNutrition(int id){
    bool found = false;
    int index;
    for(int i = 0; i < nutritionDetails.size(); i++){
        if(id == nutritionDetails.at(i)->getFoodID()){
            index = i;
            found = true;
        }
    }
    if(found){
        string choice;
        cout<<"Edit(1)Name, (2)Volume, (3)Calories: ";
        getline(cin, choice);
        if(choice == "1"){
            string editName;
            cout<<"Enter Name: ";
            getline(cin, editName);
            if(editName == ""){
                cout<<"Cannot be blank\n"<<endl;
            } else {
                EditNutritionName(nutritionDetails[index],editName);
            }
        } else if(choice == "2"){
            int editVolume;
            string inputvolume;
            cout<<"Enter Volume(gram): ";
            getline(cin, inputvolume);
            editVolume = stoi(inputvolume);
            if(editVolume < 0){
                cout<<"Invalid Input\n"<<endl;
            } else {
                EditNutritionVolume(nutritionDetails[index],editVolume);
            }
        } else if(choice == "3"){
            int editCalories;
            string inputCalories;
            cout<<"Enter Calories(cal): ";
            getline(cin, inputCalories);
            editCalories = stoi(inputCalories);
            if(editCalories < 0){
                cout<<"Invalid Input\n"<<endl;
            } else {
                EditNutritionCalories(nutritionDetails[index],editCalories);
            }
        } else {
            cout<<"Invalid input\n"<<endl;
        }
    } else {
        cout<<"Nutrition not found\n"<<endl;
    }
}
/*This is a method to edit Nutrition's name*/
void NutritionManagement::EditNutritionName(Nutrition *n, string editname){
    int previewid = n->getFoodID();
    string previewname = editname;
    int previewvolume = n->getFoodVolume();
    int previewcalories = n->getFoodCalories();
    Nutrition * preview = new Nutrition(previewid, previewname, previewvolume, previewcalories);
    if(SearchSimilar(preview)){
        cout<<"Edit fail\n"<<endl;
        delete preview;
    } else {
        n->changeFoodName(editname);
        cout<<"Edit done\n"<<endl;
        delete preview;
    }
}
/*This is a method to edit Nutrition's volume*/
void NutritionManagement::EditNutritionVolume(Nutrition* n, int editvolume){
    int previewid = n->getFoodID();
    string previewname = n->getFoodName();
    int previewvolume = editvolume;
    int previewcalories = n->getFoodCalories();
    Nutrition * preview = new Nutrition(previewid, previewname, previewvolume, previewcalories);
    if(SearchSimilar(preview)){
        cout<<"Edit fail\n"<<endl;
        delete preview;
    } else {
        n->changeFoodVolume(editvolume);
        cout<<"Edit done\n"<<endl;
        delete preview;
    }
}
/*This is a method to edit Nutrition's calories*/
void NutritionManagement::EditNutritionCalories(Nutrition* n, int editcalories){
    int previewid = n->getFoodID();
    string previewname = n->getFoodName();
    int previewvolume = n->getFoodVolume();
    int previewcalories = editcalories;
    Nutrition * preview = new Nutrition(previewid, previewname, previewvolume, previewcalories);
    if(SearchSimilar(preview)){
        cout<<"Edit fail\n"<<endl;
        delete preview;
    } else {
        n->changeFoodCalories(editcalories);
        cout<<"Edit done\n"<<endl;
        delete preview;
    }
}
/*This is a method to print nutritionDetails*/
void NutritionManagement::PrintNutritionList(){
    for(int i = 0; i < nutritionDetails.size(); i++){
        nutritionDetails.at(i)->printNutritionDetail();
        cout<<endl;
    }
}
/*This is a method to return the last id inside nutritionDetails*/
int NutritionManagement::SearchLastID(){
    return nutritionDetails.at(nutritionDetails.size() - 1)->getFoodID();
}
/*This is a method to print nutritionDetails that match with the inputted id*/
void NutritionManagement::PrintSearched(int id){
    bool searched = false;
    for(int i = 0; i < nutritionDetails.size(); i++){
        if(nutritionDetails.at(i)->getFoodID() == id){
            searched = true;
            cout<<"-------------------------------------"<<endl;
            cout<<"Searched Result"<<endl;
            cout<<"-------------------------------------"<<endl;
            nutritionDetails.at(i)->printNutritionDetail();        
            cout<<endl;
        }
    }
    if(!searched){
        cout<<"Nutrition not found\n"<<endl;
    }

}

