

#include "Card.h"

Card::Card(const string& name):
cardName(name){}

string Card::displayInfo(){

}

string& Card::getName(){
    return cardName;
}