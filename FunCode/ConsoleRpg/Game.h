#include "Functions.h"
#include "Character.h"
#include <ctime>

#ifndef Game_h
#define Game_h

class Game{

    public:
        Game();
        virtual ~Game();

        //operators

        //Member Functions
        void initGame();
        void mainMenu();

        //Accessors
        inline bool getPlaying() const { return this ->playing; }

        //Modifiers

    private:
        //variables
        int choice;
        bool playing;

        Character character;
        //Character Related
};

#endif
