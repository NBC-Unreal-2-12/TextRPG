#ifndef INVENTORY_H
#define INVENTORY_H

#include <vector>
#include <algorithm>
#include "Item.h"

using namespace std;

class Inventory {
private:
    vector<Item*> inventory;

public:
    void addItem(Item* item) {
        inventory.push_back(item);
        cout << "인벤토리에 " << item->getName() << "이(가) 추가되었습니다." << endl;
    }

    void useItem(Item* item) {
        vector<Item*>::iterator it = find(inventory.begin(), inventory.end(), item);
        if(it != inventory.end()){
            item->use();
            cout << item->getName() << "을(를) 사용했습니다." << endl;
            inventory.erase(it);
        }
        else {
            cout << item->getName() << "이 없습니다." << endl;
        }
    }
};
