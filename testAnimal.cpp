#include <bits/stdc++.h>
#include "Animal.h"

using namespace std;

int main(){
    Animal nameless;
    cout<<"\nName : "<<nameless.get_name()<<"\n";
    cout<<"Expected : ?\n\n";
    cout<<"\nSpecies : "<<nameless.get_species()<<"\n";
    cout<<"Expected : ?\n\n";
    cout<<"\nFeeding : "<<nameless.get_feeding()<<"\n";
    cout<<"Expected : None\n\n";
    cout<<"\nStory : "<<nameless.get_story()<<"\n";
    cout<<"Expected : None\n\n";

    nameless.set_story("Once upon a time...");
    nameless.set_name("Kong");
    nameless.set_species("Gorilla");
    nameless.set_feeding("People can't feed this one");

    cout<<"\nAfter changing:\n\n";

    cout<<"\nName : "<<nameless.get_name()<<"\n";
    cout<<"Expected : Kong.\n\n";
    cout<<"\nSpecies : "<<nameless.get_species()<<"\n";
    cout<<"Expected : Gorilla\n\n";
    cout<<"\nFeeding : "<<nameless.get_feeding()<<"\n";
    cout<<"Expected : People can't feed this one\n\n";
    cout<<"\nStory : "<<nameless.get_story()<<"\n";
    cout<<"Expected : Once upon a time...\n\n";

    cout<<"Feeding : ";
    nameless.feeding();
    cout<<"Expected : Here are the feeding details, People can't feed this one\n\n";

    cout<<"Events : ";
    nameless.events();
    cout<<"Expected : This is where event details will be displayed for carnivores\n\n";

    return 0;
}