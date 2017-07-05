#include "gamecell.h"
#include <QMouseEvent>

GameCell::GameCell(CellBrushClass* cellBrush)
{
    this->cellBrush = cellBrush;
    setCellHidden();
    this->setFlags(this->flags() & ~Qt::ItemIsSelectable);
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

void GameCell::setCellHidden()
{
    this->setBackground(cellBrush->hiddenImage);
}
