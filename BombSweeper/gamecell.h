#ifndef GAMECELL_H
#define GAMECELL_H

#include <QWidget>
#include <QTableWidgetItem>
#include "cellbrush.h"

class GameCell : public QTableWidgetItem
{
public:
    GameCell(CellBrush* cellBrush,int row,int column);

    void setCellHidden();
    void setAsBomb();
    void incrementNeighborBombCount();

    void rightClick();
    void leftClick();

    bool isRevealed();
    bool isBombCell();

    int getNeighborbombCount();
    int getRow();
    int getColumn();
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

    int row;
    int column;
    int neighborbombCount = 0;

    void setIconForBombCount();
};

#endif // GAMECELL_H
