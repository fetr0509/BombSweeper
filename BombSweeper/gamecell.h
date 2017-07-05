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
    void rightClick();
    bool isRevealed();

private:

    enum cellState
       {
          HIDDEN,
          REVEALED,
          FLAGGED,
          QUESTIONED
       };

    cellState CurrentState = HIDDEN;
    CellBrushClass* cellBrush;

    bool Revealed = false;
    bool Bomb = false;
    bool isLeftClick = false;
    int neighborbombs = 0;
};

#endif // GAMECELL_H
