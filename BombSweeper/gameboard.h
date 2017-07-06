#ifndef GAMEBOARD_H
#define GAMEBOARD_H

#include <QTableWidget>
#include "cellbrush.h"
#include "gamecell.h"
class GameBoard : public QTableWidget
{
    Q_OBJECT
public:
    explicit GameBoard(QWidget *parent = 0);
    ~GameBoard();

    void refresh();
    void SetNumberRowsColumns(int rows, int columns);

private slots:
    void mouseReleaseEvent(QMouseEvent *e);
    void gameCellSelected(int row, int column);

private:
    CellBrush* cellBrush;

    int rows = 25;
    int columns = 25;
    std::vector<std::vector<GameCell*>> cellVector;
    int currentRow = 0;
    int currentColumn = 0;
};

#endif // GAMEBOARD_H
