#include <bits/stdc++.h>
#include "Herbivore.h"
#include "Animal.h"

using namespace std;

int main(){
    string story="Able to jump over 100 obstacles in a row, this horse is the pinnacle of athleticism.";
    Herbivore horsey("Horsey", "Horse",story,"8 AM - 10 AM","Tall grass");
    cout<<"\nName : "<<horsey.get_name()<<"\n";
    cout<<"Expected : Horsey\n\n";
    cout<<"\nSpecies : "<<horsey.get_species()<<"\n";
    cout<<"Expected : Horse\n\n";
    cout<<"\nFeeding : "<<horsey.get_feeding()<<"\n";
    cout<<"Expected : 8 AM - 10 AM\n\n";
    cout<<"\nStory : "<<horsey.get_story()<<"\n";
    cout<<"Expected : Able to jump over 100 obstacles in a row, this horse is the pinnacle of athleticism.\n\n";
    cout<<"\nFodder : "<<horsey.get_fodder()<<"\n";
    cout<<"Expected : Tall grass\n\n";

    horsey.set_story("Once upon a time...");
    horsey.set_name("Hersheys");
    horsey.set_species("Pony");
    horsey.set_feeding("9 AM - 12 AM");
    horsey.set_fodder("Fruits");

    cout<<"\nAfter changing:\n\n";

    cout<<"\nName : "<<horsey.get_name()<<"\n";
    cout<<"Expected : Hersheys\n\n";
    cout<<"\nSpecies : "<<horsey.get_species()<<"\n";
    cout<<"Expected : Pony\n\n";
    cout<<"\nFeeding : "<<horsey.get_feeding()<<"\n";
    cout<<"Expected : 9 AM - 12 AM\n\n";
    cout<<"\nStory : "<<horsey.get_story()<<"\n";
    cout<<"Expected : Once upon a time...\n\n";
    cout<<"\nFodder : "<<horsey.get_fodder()<<"\n";
    cout<<"Expected : Fruits\n\n";

    cout<<"Feeding : ";
    horsey.feeding();
    cout<<"Expected : You can feed Hersheys the Pony during : 9 AM - 12 AM\nTheir fodder of choice is : Fruits\n\n";

    cout<<"Events : ";
    horsey.events();
    cout<<"Expected : Hersheys the pony is a herbivore, there are no events\n\n";

    return 0;
}