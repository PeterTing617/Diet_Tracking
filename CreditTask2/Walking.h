/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Walking.h
 * Author: peter
 *
 * Created on May 11, 2021, 4:29 PM
 */

#ifndef WALKING_H
#define WALKING_H
#include "Exercise.h"

class Walking: public Exercise {
public:
    Walking();
    Walking(const Walking& orig);
    virtual ~Walking();
    Walking(int exerciseduration);
    void PrintExercise();
private:

};

#endif /* WALKING_H */

