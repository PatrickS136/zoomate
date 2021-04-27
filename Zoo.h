#ifndef ZOO_H
#define ZOO_H

#include <bits/stdc++.h>
#include "Animal.h"

using namespace std;

class Zoo{
    string name;
    string contact;
    string openingHours;
    string zookeepers;
    string description;
    public:
    Zoo();
    string get_name();
    string get_zookeepers();
    string get_openingHours();
    string get_contact();
    string get_description();
    void set_description(string description);
    void set_contact(string contact);
    void set_name(string name);
    void set_zookeepers(string zookeepers);
    void set_openingHours(string openingHours);
    void display();
};

#endif