#ifndef MONSTERS_H
#define MONSTERS_H

#include <iostream>
#include <string>
#include "Item.h"
#include "Inventory.h"

using namespace std;

class Monster {
public:
    virtual ~Monster() = default;
    virtual string getName() = 0;
    virtual int getHealth() = 0;
    virtual int getAttack() = 0;
    virtual void takeDamage(int damage) = 0;
    virtual Item* dropItem() = 0;
};

class Goblin : public Monster {
private:
    string name = "Goblin";
    int health = 0;
    int attack = 0;

public:
    Goblin(int level) : health(level * 20), attack(level * 10) {}

    string getName() override {
        return name;
    }

    int getHealth() override {
        return health;
    }

    int getAttack() override {
        return attack;
    }

    Item* dropItem() override { 
        return new HealthPotion(); // HealthPotion Drop.
    }

    void takeDamage(int damage) override {
        health -= damage;

        if (health < 0) {
            health = 0;
        }

        cout << name << " 이 " << damage << " 데미지 받음. 남은 체력 : " << health << endl;

        if (health == 0) {
            cout << name << " 사망." << endl;
            Inventory inventory;
            inventory.addItem(dropItem());
        }
    }

};

class Orc : public Monster {
private:
    string name = "Orc";
    int health = 0;
    int attack = 0;

public:
    Orc(int level) : health(level * 30), attack(level * 5) {}

    string getName() override {
        return name;
    }

    int getHealth() override {
        return health;
    }

    int getAttack() override {
        return attack;
    }

    Item* dropItem() override {
        return new AttackBoost(); // AttackBoost Drop.
    }

    void takeDamage(int damage) override {
        health -= damage;

        if (health < 0) {
            health = 0;
        }

        cout << name << " 이 " << damage << " 데미지 받음. 남은 체력 : " << health << endl;

        if (health == 0) {
            cout << name << " 사망." << endl;
            Inventory inventory;
            inventory.addItem(dropItem());
        }
    }
};

class Slime : public Monster {
private:
    string name = "Slime";
    int health = 0;
    int attack = 0;

public:
    Slime(int level) : health(level * 25), attack(level * 7) {}

    string getName() override {
        return name;
    }

    int getHealth() override {
        return health;
    }

    int getAttack() override {
        return attack;
    }

    Item* dropItem() override {
        return new HealthPotion(); // HealthPotion Drop.
    }

    void takeDamage(int damage) override {
        health -= damage;

        if (health < 0) {
            health = 0;
        }

        cout << name << " 이 " << damage << " 데미지 받음. 남은 체력 : " << health << endl;

        if (health == 0) {
            cout << name << " 사망." << endl;
            Inventory inventory;
            inventory.addItem(dropItem());
        }
    }

};

class BossMonster : public Monster {
private:
    string name = "BossMonster";
    int health = 0;
    int attack = 0;

public:
    BossMonster(int level) : health(level * 100), attack(level * 30) {}

    string getName() override {
        return name;
    }

    int getHealth() override {
        return health;
    }

    int getAttack() override {
        return attack;
    }

    Item* dropItem() override {
        return new AttackBoost(); // AttackBoost Drop.
    }

    void takeDamage(int damage) override {
        health -= damage;

        if (health < 0) {
            health = 0;
        }

        cout << name << " 이 " << damage << " 데미지 받음. 남은 체력 : " << health << endl;

        if (health == 0) {
            cout << name << " 사망." << endl;
            Inventory inventory;
            inventory.addItem(dropItem());
        }
    }
};