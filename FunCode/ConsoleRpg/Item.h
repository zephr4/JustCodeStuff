#include <iostream>
#include <iomanip>
#include <string>

#ifndef Item_h
#define Item_h

class Item {

    public:
        Item();
        virtual ~Item();
    
    private:
        std::string name;
        int buyValue;
        int sellValue;
};
#endif