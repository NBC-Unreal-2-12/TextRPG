#ifndef CHARACTER_H
#define CHARACTER_H
#pragma once

#include <string>
#include <vector>

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
	int speed;
	static Character* instance;
	Character(string userName);
	//vector<item*> inventory;    아이템 클래스 기반 벡터

public:
	Character(const Character&) = delete;
	Character& operator=(const Character&) = delete;
	static Character* getInstance(std::string userName);
	void dispalyStatus();
	void levelUp();
	void useItem(int index);

};

#endif