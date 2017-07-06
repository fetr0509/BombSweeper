#ifndef GAMECREATOR_H
#define GAMECREATOR_H

#include "gamecell.h"
#include <vector>

class GameCreator
{
public:
    static void createGame(std::vector<std::vector<GameCell*>> &gameBoard, int numBombs, int seed);

private:
    static void placeBombs(std::vector<std::vector<GameCell*>> &gameBoard, int numBombs);
    static void addNumbers(std::vector<std::vector<GameCell*>> &gameBoard, std::vector<GameCell*> bombs);
};

#endif // GAMECREATOR_H
