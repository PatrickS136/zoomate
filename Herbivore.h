#ifndef HERBIVORE_H
#define HERBIVORE_H

#include <bits/stdc++.h>
#include "Animal.h"

using namespace std;

class Herbivore : public Animal{
    string fodder;
    public:
    Herbivore(string name, string species,string story,string feedingTime,string fodder);
    virtual void feeding();
    void set_fodder(string fodder);
    string get_fodder();
    virtual void events();
};

#endif