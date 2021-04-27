#include <bits/stdc++.h>
#include "Zoo.h"

using namespace std;

int main(){
    Zoo zoo;
    cout<<"Display : \n"; 
    zoo.display();
    cout<<"Expected : \n\nOur zoo offers many attractions such as feeding for the herbivores and events by the carnivores\n\nDa Local Zu is currently under the management of our awesome zookeeper : Patrick Sumarli\nWe are open from 7 AM - 5 PM\n\nIf you need our assistance, please contact us at : \nPhone: +61 9999 9999 or Email: dalocalzu@gmail.com\n";

    zoo.set_description("A nice zoo");
    zoo.set_contact("Phone : X and Email : Y");
    zoo.set_name("Illegal Zoo");
    zoo.set_zookeepers("Masked man");
    zoo.set_openingHours("12 AM - 6 AM");

    cout<<"\n-------------------------------------------\n";
    cout<<"\nAfter changing:\n\n";
    cout<<"-------------------------------------------\n\n";

    cout<<"Display : \n"; 
    zoo.display();
    cout<<"Expected : \n\nA nice zoo\n\nIllegal Zoo is currently under the management of our awesome zookeeper : Masked man\nWe are open from 12 AM - 6 AM\n\nIf you need our assistance, please contact us at : \nPhone : X and Email : Y\n";

    return 0;
}