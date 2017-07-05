#include "gamecell.h"
#include <QIcon>
#include <QColor>

GameCell::GameCell(CellBrushClass* cellBrush)
{
    this->cellBrush = cellBrush;
    setCellHidden();
}

void GameCell::setCellHidden()
{
    this->setBackground(cellBrush->hiddenImage);
}
