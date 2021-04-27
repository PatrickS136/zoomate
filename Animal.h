#ifndef ANIMAL_H
#define ANIMAL_H

#include <bits/stdc++.h>

using namespace std;

class Animal{
    string name;
    string species;
    string feedingTime;
    string story;
    public:
    Animal();
    string get_name();
    string get_species();
    string get_feeding();
    string get_story();
    void set_story(string story);
    void set_name(string name);
    void set_species(string species);
    void set_feeding(string feedingTime);
    virtual void feeding();
    virtual void events();
};

#endif