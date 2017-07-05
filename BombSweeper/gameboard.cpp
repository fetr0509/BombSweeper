#include "gameboard.h"
#include <string>
#include <QString>
#include <QHeaderView>
#include <QTableWidget>
#include "gamecell.h"
#include "cellbrushclass.h"

#define GAMECELLSIZE 20

GameBoard::GameBoard (QWidget *parent) : QTableWidget(parent)
{
    this->horizontalHeader()->setDefaultSectionSize(GAMECELLSIZE);
    this->verticalHeader()->setDefaultSectionSize(GAMECELLSIZE);

    this->horizontalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    this->verticalHeader()->setSectionResizeMode(QHeaderView::Fixed);
    cellBrush = new CellBrushClass(GAMECELLSIZE);
    refresh();
}

void GameBoard::refresh()
{
    this->setFixedSize((columns)*GAMECELLSIZE,(rows)*GAMECELLSIZE);
    setRowCount(rows);
    setColumnCount(columns);

    int count = 0;
    for(int row = 0; row < rows; row++)
    {
        for(int column = 0; column < columns; column++)
        {
            QString countString = QString::fromStdString(std::to_string(count));
            setItem(row, column, new GameCell(cellBrush));
            count++;
        }
    }

}

void GameBoard::SetNumberRowsColumns(int rows, int columns)
{
    this->rows = rows;
    this->columns = columns;
}

GameBoard::~GameBoard() {}
