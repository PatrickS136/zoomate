#include <bits/stdc++.h>
#include "Animal.h"
#include "Zoo.h"
#include "Herbivore.h"
#include "Carnivore.h"


using namespace std;

Zoo::Zoo(){
    set_zookeepers("Patrick Sumarli");
    set_openingHours("7 AM - 5 PM");
    set_name("Da Local Zu");
    set_contact("Phone: +61 9999 9999 or Email: dalocalzu@gmail.com");
    set_description("Our zoo offers many attractions such as feeding for the herbivores and events by the carnivores");
}
string Zoo::get_name(){
    return this->name;
}
string Zoo::get_zookeepers(){
    return this->zookeepers;
}
string Zoo::get_openingHours(){
    return this->openingHours;
}
string Zoo::get_description(){
    return this->description;
}
void Zoo::set_description(string description){
    this->description=description;
}
void Zoo::set_name(string name){
    this->name=name;
}
void Zoo::set_zookeepers(string zookeepers){
    this->zookeepers=zookeepers;
}
void Zoo::set_openingHours(string openingHours){
    this->openingHours=openingHours;
}
void Zoo::display(){
    cout<<"\n"<<this->get_description()<<"\n";
    cout<<"\n"<<this->get_name()<<" is currently under the management of our awesome zookeeper : "<<this->get_zookeepers()<<"\n";
    cout<<"We are open from "<<this->get_openingHours()<<"\n\n";
    cout<<"If you need our assistance, please contact us at : \n"<<this->get_contact()<<"\n\n";
}
string Zoo::get_contact(){
    return this->contact;
}
void Zoo::set_contact(string contact){
    this->contact=contact;
}
