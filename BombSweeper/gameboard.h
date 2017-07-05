#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QTableWidget>
#include "cellbrushclass.h"
class GameBoard : public QTableWidget
{
    Q_OBJECT

public:
    explicit GameBoard(QWidget *parent = 0);
    ~GameBoard();

    void refresh();
    void SetNumberRowsColumns(int rows, int columns);

private:
    CellBrushClass* cellBrush;

    int rows = 25;
    int columns = 25;
};

#endif // GAMEBOARD_H
