#ifndef CHARACTER_H
#define CHARACTER_H
#pragma once

#include <string>
#include "Job.h"
#include "Inventory.h"
#include "Item.h"

using namespace std;


class Character
{
private:
    string name;
    int level;
    int helth;
    int maxHelth;
    int attack;
    int experience;
    int gold;
    int attackspeed;
    int accuracy;
    int evasion;
    Job* job;
    bool isDead;
    static Character* instance;
    Character(string userName, Job* characterJob);
	Inventory inventory;

public:
    Character(const Character&) = delete;
    Character& operator=(const Character&) = delete;
    static Character* getInstance(string userName, Job* characterJob);
    void displayStatus();
    void levelUp();
	void useItem(Item* item);
	void addItemToInventory(Item* item);
	void removeItemFromInventory(Item* item);
};

#endif