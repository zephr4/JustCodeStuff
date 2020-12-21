#include "Item.h"

#ifndef Inventor_h
#define Inventory_h

class Inventory {

    public:
        Inventory();
        virtual ~Inventory();
        void addItem(const Item &item);
        void removeItem(int index);

    private:
        int capacity;
        int numOfItems;
        Item **itemArr;
        void expand();
        void initialize();
};
#endif