
#include "TrainerCard.h"

TrainerCard::TrainerCard(const string& name,const string& effect):
Card(name), trainerEffect(effect){}

string& TrainerCard::getTrainerEffect(){
    return trainerEffect;
}

string TrainerCard::displayInfo() {
    return "Trainer Card - Name:" + getName() + ", Effect:" + trainerEffect;
}

