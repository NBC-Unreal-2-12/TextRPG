#include "Character.h"
#include <iostream>
using namespace std;

int main() {
    Character* player = Character::getInstance("Hero");

    player->dispalyStatus();
    return 0;
}