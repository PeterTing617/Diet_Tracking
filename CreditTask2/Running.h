/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Running.h
 * Author: peter
 *
 * Created on May 11, 2021, 4:40 PM
 */

#ifndef RUNNING_H
#define RUNNING_H
#include "Exercise.h"

class Running: public Exercise{
public:
    Running();
    Running(const Running& orig);
    virtual ~Running();
    Running(int exerciseduration);
    void PrintExercise();
private:

};

#endif /* RUNNING_H */

