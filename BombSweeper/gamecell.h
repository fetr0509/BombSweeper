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
    void setAsBomb();
    void setNeighborBombCount(int bombs);

    void rightClick();
    void leftClick();

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
    bool isBombCell = false;
    int neighborbombCount = 0;

    void setIconForBombCount();
};

#endif // GAMECELL_H
