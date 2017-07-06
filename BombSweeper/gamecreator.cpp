#include "gamecreator.h"

void GameCreator::createGame(std::vector<std::vector<GameCell *> > &gameBoard, int numBombs, int seed)
{
    srand(seed);
    int rows = gameBoard.size();
    int columns = gameBoard[0].size();
    std::vector<GameCell*> bombs;

    GameCell *currentCell;
    while (numBombs--)
    {
        int randRow = rand() % rows;
        int randColumn = rand() % columns;
        currentCell = gameBoard[randRow][randColumn];
        if(currentCell->isbombCell() == false)
        {
            currentCell->setAsBomb();
            bombs.push_back(currentCell);
        }
        else
            numBombs++;

    }
    addNumbers(gameBoard,bombs);
    return;
}

void GameCreator::addNumbers(std::vector<std::vector<GameCell *> > &gameBoard, std::vector<GameCell*> bombs)
{
    int totalRows = gameBoard.size();
    int totalColumns = gameBoard[0].size();

    for(GameCell* bomb : bombs)
    {
        int row = bomb->getRow();
        int column = bomb->getColumn();

        // Cardinal Directions
        if(row-1 > 0)
            gameBoard[row-1][column]->incrementNeighborBombCount();
        if(row+1 < totalRows)
            gameBoard[row+1][column]->incrementNeighborBombCount();
        if(column-1 > 0)
            gameBoard[row][column-1]->incrementNeighborBombCount();
        if(column+1 < totalColumns)
            gameBoard[row][column+1]->incrementNeighborBombCount();

        // Diagonals
        if(row-1 > 0 && column-1 > 0)
            gameBoard[row-1][column-1]->incrementNeighborBombCount();
        if(row+1 < totalRows && column-1 > 0)
            gameBoard[row+1][column-1]->incrementNeighborBombCount();
        if(row-1 > 0 && column+1 < totalColumns)
            gameBoard[row-1][column+1]->incrementNeighborBombCount();
        if(row+1 < totalRows && column+1 < totalColumns)
            gameBoard[row+1][column+1]->incrementNeighborBombCount();
    }
    return;
}
