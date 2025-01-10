#include "Character.h"
#include <iostream>

using namespace std;

Character* Character::instance = nullptr;

//생성자 구현
Character::Character(string userName) : name(userName), level(1), maxHelth(200), helth(200), attack(30), experience(0), gold(0) {}

Character* Character::getInstance(string userName) {
	if (instance == nullptr) {
		instance = new Character(userName);
	}
	return instance;
}

void Character::dispalyStatus()
{
	cout << "현재 유저의 정보" << endl;
	cout << "레벨: " << level << endl;
	cout << "체력: " << helth << "/" << maxHelth << endl;
	cout << "경험치: " << experience << endl;
	cout << "공격력: " << attack << endl;
	cout << "보유골드: " << gold << endl;
}

void Character::levelUp()
{

}

void Character::useItem(int index)
{
}
