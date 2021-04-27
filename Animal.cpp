#include <bits/stdc++.h>
#include "Animal.h"

using namespace std;

Animal::Animal(){
    this->name="?";
    this->species="?";
    this->feedingTime="None";
    this->story="None";
}

string Animal::get_name(){
    return this->name;
}
string Animal::get_species(){
    return this->species;
}
string Animal::get_feeding(){
    return this->feedingTime;
}
string Animal::get_story(){
    return this->story;
}
void Animal::set_story(string story){
    this->story=story;
}
void Animal::set_name(string name){
    this->name=name;
}
void Animal::set_species(string species){
    this->species=species;
}
void Animal::set_feeding(string feedingTime){
    this->feedingTime=feedingTime;
}
void Animal::feeding(){
    cout<<"Here are the feeding details, "<<this->get_feeding()<<"\n\n";
}
void Animal::events(){
    cout<<"This is where event details will be displayed for carnivores\n\n";
}