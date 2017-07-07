#include "gamelogic.h"

void GameLogic::handleCellRevealed(std::vector<std::vector<GameCell *> > &gameBoard, GameCell *cell)
{
    std::unordered_map<int, GameCell *> cellMap;
    cellMap[getHashCode(cell->getRow(),cell->getColumn())] = (cell);

    int count = 0;
    while (!cellMap.empty() && count < 10000)
    {
        GameCell *currentCell = (cellMap.begin())->second;
        cellMap.erase(cellMap.begin());
        currentCell->leftClick();
        if(currentCell->getNeighborbombCount() == 0 && !currentCell->isBombCell())
            addNeigbors(gameBoard,currentCell,cellMap);
        count++;
    }
}

void GameLogic::addNeigbors(std::vector<std::vector<GameCell*>> &gameBoard,
                            GameCell *cell, std::unordered_map<int, GameCell *> &cellMap)
{
    int totalRows = gameBoard.size();
    int totalColumns = gameBoard[0].size();

    int row = cell->getRow();
    int column = cell->getColumn();

    // Cardinal Directions
    if(row-1 >= 0)
        if(gameBoard[row-1][column]->isRevealed() == false && !gameBoard[row-1][column]->isBombCell())
            cellMap[getHashCode(row-1,column)] = (gameBoard[row-1][column]);
    if(row+1 < totalRows)
        if(gameBoard[row+1][column]->isRevealed() == false && !gameBoard[row+1][column]->isBombCell())
            cellMap[getHashCode(row+1,column)] = (gameBoard[row+1][column]);
    if(column-1 >= 0)
        if(gameBoard[row][column-1]->isRevealed() == false && !gameBoard[row][column-1]->isBombCell())
            cellMap[getHashCode(row-1,column-1)] = (gameBoard[row][column-1]);
    if(column+1 < totalColumns)
        if(gameBoard[row][column+1]->isRevealed() == false && !gameBoard[row][column+1]->isBombCell())
            cellMap[getHashCode(row-1,column+1)] = (gameBoard[row][column+1]);

    // Diagonals
    if(row-1 >= 0 && column-1 >= 0)
        if(gameBoard[row-1][column-1]->isRevealed() == false && !gameBoard[row-1][column-1]->isBombCell())
            cellMap[getHashCode(row-1,column-1)] = (gameBoard[row-1][column-1]);

    if(row+1 < totalRows && column-1 >= 0)
        if(gameBoard[row+1][column-1]->isRevealed() == false && !gameBoard[row+1][column-1]->isBombCell())
            cellMap[getHashCode(row+1,column-1)] = (gameBoard[row+1][column-1]);

    if(row-1 >= 0 && column+1 < totalColumns)
        if(gameBoard[row-1][column+1]->isRevealed() == false && !gameBoard[row-1][column+1]->isBombCell())
            cellMap[getHashCode(row-1,column+1)] = (gameBoard[row-1][column+1]);

    if(row+1 < totalRows && column+1 < totalColumns)
        if(gameBoard[row+1][column+1]->isRevealed() == false && !gameBoard[row+1][column+1]->isBombCell())
            cellMap[getHashCode(row+1,column+1)] = (gameBoard[row+1][column+1]);
    return;
}

int GameLogic::getHashCode(int row, int column)
{
        int hash = 17;
        hash = ((hash + row) << 5) - (hash + row);
        hash = ((hash + column) << 5) - (hash + column);
        return hash;
}
