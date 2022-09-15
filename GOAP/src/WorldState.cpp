#include "WorldState.h"

WorldState::WorldState(const int nb_villagers, const int nb_rocks, const int nb_woods, const int nb_houses)
{
    villagers = nb_villagers;
    rocks = nb_rocks;
    woods = nb_woods;
    houses = nb_houses;
}

WorldState::~WorldState()
{
    //dtor
}

int WorldState::operator[](const int index)const{
    switch(index){
    case 0:
        return woods;
        break;
    case 1:
        return rocks;
        break;
    case 2:
        return villagers;
        break;
    case 3:
        return houses;
        break;
    }
}

void WorldState::SetNewValue(const int index, int value)
{
    switch(index){
    case 0:
        woods = value;
        break;
    case 1:
        rocks = value;
        break;
    case 2:
        villagers = value;
        break;
    case 3:
        houses = value;
        break;
    }
}

