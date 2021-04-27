#ifndef CARNIVORE_H
#define CARNIVORE_H

#include <bits/stdc++.h>
#include "Animal.h"

using namespace std;

class Carnivore : public Animal{
    string event;
    string eventSchedule;
    public:
    Carnivore(string name, string species, string story, string event, string eventSchedule);
    string get_event();
    string get_eventSchedule();
    void set_event(string event);
    void set_eventSchedule(string eventSchedule);
    virtual void feeding();
    virtual void events();
};

#endif