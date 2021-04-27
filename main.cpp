#include "Animal.h"
#include "Herbivore.h"
#include "Carnivore.h"
#include "Zoo.h"
// #include <bits/stdc++.h>

using namespace std;

int main(){

    cout<<"\nWelcome to Zoomate, your personal zoo companion!\n\n";
    cout<<"-------------------------------------------\n\n";

    string goat="Loves to eat wheat and nothing else. A very energetic goat that loves to roam around her locale";
    string llama="He was born and raised here, groomed to have fur that is enviable by the fluffiest animals in the world.";
    string tiger="Born in India, he was brought in to the zoo as a cub by our founder.\nHe often spends his time napping in his locale.";
    string panda="A natural-born slacker that loves to roll around and chew on our imported bamboo.\nA cluddy companion for all those who visits.";
    string koala="A local favorite, her fuzziness attracts all those who visits and is often the main attraction of our zoo.";
    string lion="Her family has lived in this zoo for generations and her shows are often packed.";


    Herbivore * dubwool= new Herbivore("Dubwool","Goat",goat,"10-11 AM","Wheat");
    Herbivore * andrew= new Herbivore("Andrew","Llama",llama,"9-11 AM","Carrots");
    Carnivore * johnny= new Carnivore("Johnny","Tiger",tiger,"Ring of fire","2 PM - 3 PM");
    Carnivore * wao= new Carnivore("Wao","Panda",panda,"Water Slide","9 AM - 10 AM");
    Herbivore * snooze= new Herbivore("Snooze","Koala",koala,"1-2 PM","Eucalyptus leaves");
    Carnivore * mane=new Carnivore("Mane","Lion",lion,"The King's Parkour","4 PM - 5 PM");

    Animal * animals[]={dubwool,andrew,johnny,wao,snooze,mane};

    string help[]={"end","help","feeding","animals","zoo","events"};

    Zoo * zoo=new Zoo();

    while (1){
        cout<<"Enter your command, ask for help using 'help': ";
        string command;
        cin>>command;
        cout<<"\n-------------------------------------------\n";
        if (command=="end"){
            break;
        }
        else if (command=="help"){
            cout<<"\nThe available commands are : ";
            for (int i=0; i<6; i++){
                cout<<help[i]<<" ";
            }
            cout<<"\n\n";
        }
        else if (command=="feeding"){
            cout<<"\n\n";
            for (int i=0; i<6; i++){
                animals[i]->feeding();
            }
        }
        else if (command=="animals"){
            cout<<"\n\nIn this zoo, we have : \n\n";
            for (int i=0; i<6; i++){
                cout<<i+1<<". "<<animals[i]->get_name()<<" the "<<animals[i]->get_species()<<"\n";
            }
            cout<<"\n";
            cout<<"Please enter a number for the animal you wish to find more information on : ";
            cout<<"\n";
            int index;
            cin>>index;
            cout<<"\n";
            if (index>6){
                cout<<"Invalid input"<<"\n";
            }
            else{
                cout<<animals[index-1]->get_story()<<"\n\n";
            }
        }
        else if (command=="zoo"){
            zoo->display();
        }
        else if (command=="events"){
            cout<<"\n\n";
            for (int i=0; i<6; i++){
                animals[i]->events();
            }
        }
        else{
            cout<<"\nInvalid command, please try again\n\n";
        }
        cout<<"-------------------------------------------\n\n";
    }

    delete zoo;

    cout<<"\nThank you for using Zoomate. Have a nice day!\n\n";
    return 0;
}