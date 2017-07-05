#ifndef GAMECELL_H
#define GAMECELL_H

#include <QWidget>
#include <QTableWidgetItem>
#include "cellbrushclass.h"

class GameCell : public QTableWidgetItem
{
public:
    GameCell(CellBrushClass* cellBrush);

    void setCellHidden();

    bool isRevealed();
private:
    CellBrushClass* cellBrush;

    bool Revealed = false;
    bool Bomb = false;
    int neighborbombs = 0;
    int cellSize;
};

#endif // GAMECELL_H
