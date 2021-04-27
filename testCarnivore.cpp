#include <bits/stdc++.h>
#include "Carnivore.h"
#include "Animal.h"

using namespace std;

int main(){
    string story="The sharpest jaws in town, Alli the alligator";
    Carnivore alli("Alli", "Alligator",story,"Allimpic Games","9 AM - 11 AM");
    cout<<"\nName : "<<alli.get_name()<<"\n";
    cout<<"Expected : Alli\n\n";
    cout<<"\nSpecies : "<<alli.get_species()<<"\n";
    cout<<"Expected : Alligator\n\n";
    cout<<"\nFeeding : "<<alli.get_feeding()<<"\n";
    cout<<"Expected : None\n\n";
    cout<<"\nStory : "<<alli.get_story()<<"\n";
    cout<<"Expected : The sharpest jaws in town, Alli the alligator\n\n";
    cout<<"\nEvent : "<<alli.get_event()<<"\n";
    cout<<"Expected : Allimpic Games\n\n";
    cout<<"\nEvent Schedule : "<<alli.get_eventSchedule()<<"\n";
    cout<<"Expected : 9 AM - 11 AM\n\n";

    alli.set_story("Once upon a time...");
    alli.set_name("Crocs");
    alli.set_species("Crocodile");
    alli.set_feeding("None");
    alli.set_event("Fruits Ninja");
    alli.set_eventSchedule("3 PM - 4 PM");

    cout<<"\nAfter changing:\n\n";

    cout<<"\nName : "<<alli.get_name()<<"\n";
    cout<<"Expected : Crocs\n\n";
    cout<<"\nSpecies : "<<alli.get_species()<<"\n";
    cout<<"Expected : Crocodile\n\n";
    cout<<"\nFeeding : "<<alli.get_feeding()<<"\n";
    cout<<"Expected : None\n\n";
    cout<<"\nStory : "<<alli.get_story()<<"\n";
    cout<<"Expected : Once upon a time...\n\n";
    cout<<"\nEvent : "<<alli.get_event()<<"\n";
    cout<<"Expected : Fruits Ninja\n\n";
    cout<<"\nEvent Schedule : "<<alli.get_eventSchedule()<<"\n";
    cout<<"Expected : 3 PM - 4 PM\n\n";

    cout<<"Feeding : ";
    alli.feeding();
    cout<<"Expected : Crocs the Crocodile is a carnivore, you can't feed them\n\n";

    cout<<"Events : ";
    alli.events();
    cout<<"Expected : Crocs the Crocodile will be performing Fruits Ninja\nThe event is scheduled at : 3 PM - 4 PM\n\n";

    return 0;
}