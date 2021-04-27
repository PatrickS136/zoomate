#include <bits/stdc++.h>
#include "Carnivore.h"

using namespace std;


Carnivore::Carnivore(string name, string species,string story, string event, string eventSchedule){
    this->set_name(name);
    this->set_species(species);
    this->set_feeding("None");
    this->set_story(story);
    this->set_event(event);
    this->set_eventSchedule(eventSchedule);
}

void Carnivore::feeding(){
    cout<<this->get_name()<<" the "<<this->get_species()<<" is a carnivore, you can't feed them\n\n";
}

string Carnivore::get_event(){
    return this->event;
}
string Carnivore::get_eventSchedule(){
    return this->eventSchedule;
}
void Carnivore::set_event(string event){
    this->event=event;
}
void Carnivore::set_eventSchedule(string eventSchedule){
    this->eventSchedule=eventSchedule;
}
void Carnivore::events(){
    cout<<this->get_name()<<" the "<<this->get_species()<<" will be performing "+this->get_event()+"\n";
    cout<<"The event is scheduled at : "<<this->get_eventSchedule()<<"\n\n";
}
