#ifndef GAMELOGIC_H
#define GAMELOGIC_H

#include <vector>
#include "gamecell.h"
#include <unordered_map>

class GameLogic
{
public:
    static void handleCellRevealed(std::vector<std::vector<GameCell*>> &gameBoard, GameCell* cell);

private:
    static void addNeigbors(std::vector<std::vector<GameCell*>> &gameBoard, GameCell* cell,
                            std::unordered_map<int,GameCell*> &cellMap);
    static int getHashCode(int row, int column);
};

#endif // GAMELOGIC_H
