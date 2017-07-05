#include "gameboard.h"
#include <string>
#include <QString>
#include <QHeaderView>
#include <QTableWidget>
#include "gamecell.h"
#include "cellbrushclass.h"
#include <QMouseEvent>

#define GAMECELLSIZE 20

GameBoard::GameBoard (QWidget *parent) : QTableWidget(parent)
{
    this->horizontalHeader()->setDefaultSectionSize(GAMECELLSIZE);
    this->verticalHeader()->setDefaultSectionSize(GAMECELLSIZE);
    this->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    this->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    this->setFocusPolicy(Qt::NoFocus);
    cellBrush = new CellBrushClass(GAMECELLSIZE);

    refresh();
}

GameBoard::~GameBoard() {}

void GameBoard::refresh()
{
    this->setFixedSize((columns)*GAMECELLSIZE,(rows)*GAMECELLSIZE);
    setRowCount(rows);
    setColumnCount(columns);

    for(int row = 0; row < rows; row++)
    {
        std::vector<GameCell*> cellRow;
        for(int column = 0; column < columns; column++)
        {
            GameCell* cell = new GameCell(cellBrush);
            cellRow.push_back(cell);
            setItem(row, column, cell);
        }
        cellVector.push_back(cellRow);
    }

}

void GameBoard::SetNumberRowsColumns(int rows, int columns)
{
    this->rows = rows;
    this->columns = columns;
}

void GameBoard::mouseReleaseEvent(QMouseEvent* e)
{
    if (e->button() == Qt::RightButton) {
        qDebug("right");
        cellVector[currentRow][currentColumn]->rightClick();
        QTableWidget::mousePressEvent(e);
    }
    else {
        qDebug("left");
        QTableWidget::mousePressEvent(e);
    }
}

void GameBoard::gameCellSelected(int row, int column)
{
    qDebug("clicked");
    currentRow = row;
    currentColumn = column;
}
