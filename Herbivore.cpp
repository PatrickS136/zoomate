#include <bits/stdc++.h>
#include "Herbivore.h"

using namespace std;


Herbivore::Herbivore(string name, string species,string story,string feedingTime,string fodder){
    this->set_name(name);
    this->set_species(species);
    this->set_feeding(feedingTime);
    this->set_fodder(fodder);
    this->set_story(story);
}

void Herbivore::feeding(){
    cout<<"You can feed "+this->get_name()+" the "+ this->get_species() +" during : "<<this->get_feeding()<<"\n";
    cout<<"Their fodder of choice is : "<<this->get_fodder()<<"\n\n";
}

void Herbivore::set_fodder(string fodder){
    this->fodder=fodder;
}
string Herbivore::get_fodder(){
    return this->fodder;
}
void Herbivore::events(){
    cout<<this->get_name()<<" the "<<this->get_species()<<" is a herbivore, there are no events\n\n";
}
