/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Freestyle.h
 * Author: peter
 *
 * Created on May 11, 2021, 5:04 PM
 */

#ifndef FREESTYLE_H
#define FREESTYLE_H
#include "Exercise.h"

class Freestyle: public Exercise {
public:
    Freestyle();
    Freestyle(const Freestyle& orig);
    virtual ~Freestyle();
    Freestyle(int exerciseduration);
    void PrintExercise();
private:

};

#endif /* FREESTYLE_H */

