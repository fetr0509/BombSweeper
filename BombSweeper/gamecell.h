#ifndef GAMECELL_H
#define GAMECELL_H

#include <QWidget>
#include <QTableWidgetItem>
#include "cellbrush.h"

class GameCell : public QTableWidgetItem
{
public:
    GameCell(CellBrush* cellBrush);

    void setCellHidden();
    void setAsBomb();
    void setNeighborBombCount(int bombs);

    void rightClick();
    void leftClick();

    bool isRevealed();
    bool isbombCell();

    int getNeighborbombCount();
private:

    enum cellState
       {
          HIDDEN,
          REVEALED,
          FLAGGED,
          QUESTIONED
       };

    cellState CurrentState = HIDDEN;
    CellBrush* cellBrush;

    bool revealed = false;
    bool bombCell = false;
    int neighborbombCount = 0;

    void setIconForBombCount();
};

#endif // GAMECELL_H
