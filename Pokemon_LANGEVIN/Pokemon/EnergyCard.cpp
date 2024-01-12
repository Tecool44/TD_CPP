

#include "EnergyCard.h"

EnergyCard::EnergyCard(const string& type):
Card("Energy"), energyType(type){}

string& EnergyCard::getType(){
    return energyType;
}