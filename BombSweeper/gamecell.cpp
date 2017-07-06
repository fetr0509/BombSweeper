#include "gamecell.h"
#include <QMouseEvent>

GameCell::GameCell(CellBrush* cellBrush, int row, int column)
{
    this->cellBrush = cellBrush;
    this->row = row;
    this->column = column;
    setCellHidden();
    this->setFlags(this->flags() & ~Qt::ItemIsSelectable);
}

void GameCell::setCellHidden()
{
    this->setBackground(cellBrush->hiddenImage);
}

void GameCell::setAsBomb()
{
    bombCell = true;
}

void GameCell::incrementNeighborBombCount()
{
    neighborbombCount += 1;
}

void GameCell::setIconForBombCount()
{
    switch (neighborbombCount) {
    case 0:
        this->setBackground(cellBrush->blankImage);
        break;
    case 1:
        this->setBackground(cellBrush->num1Image);
        break;
    case 2:
        this->setBackground(cellBrush->num2Image);
        break;
    case 3:
        this->setBackground(cellBrush->num3Image);
        break;
    case 4:
        this->setBackground(cellBrush->num4Image);
        break;
    case 5:
        this->setBackground(cellBrush->num5Image);
        break;
    case 6:
        this->setBackground(cellBrush->num6Image);
        break;
    case 7:
        this->setBackground(cellBrush->num7Image);
        break;
    default:
        this->setBackground(cellBrush->num8Image);
        break;
    }
}

void GameCell::rightClick()
{
    switch(CurrentState)
    {
    case HIDDEN:
        this->setBackground(cellBrush->flagImage);
        CurrentState = FLAGGED;
        break;
    case FLAGGED:
        this->setBackground(cellBrush->questionImage);
        CurrentState = QUESTIONED;
        break;
    case QUESTIONED:
        this->setBackground(cellBrush->hiddenImage);
        CurrentState = HIDDEN;
        break;
    default:
        break;
    }
}

void GameCell::leftClick()
{
    switch(CurrentState)
    {
    case REVEALED:
        break;
    default:
        if(this->bombCell)
            this->setBackground(cellBrush->bombImage);
        else
            setIconForBombCount();
        CurrentState = REVEALED;
        break;
    }
}

bool GameCell::isRevealed()
{
    return revealed;
}

bool GameCell::isbombCell()
{
    return bombCell;
}

int GameCell::getNeighborbombCount()
{
    return neighborbombCount;
}

int GameCell::getRow()
{
    return row;
}

int GameCell::getColumn()
{
    return column;
}
