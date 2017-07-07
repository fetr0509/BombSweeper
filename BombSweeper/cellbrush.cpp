#include "cellbrush.h"

CellBrush::CellBrush(int cellSize)
{
    QPixmap map(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    hiddenImage = QBrush(map);

    map = QPixmap(":/images/images/BlankCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    blankImage = QBrush(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    revealedImage = QBrush(map);

    map = QPixmap(":/images/images/BombCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    bombImage = QBrush(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    ExplosionImage = QBrush(map);

    map = QPixmap(":/images/images/FlagCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    flagImage = QBrush(map);

    map = QPixmap(":/images/images/QuestionCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    questionImage = QBrush(map);

    map = QPixmap(":/images/images/Num1Cell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num1Image = QBrush(map);

    map = QPixmap(":/images/images/Num2Cell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num2Image = QBrush(map);

    map = QPixmap(":/images/images/Num3Cell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num3Image = QBrush(map);

    map = QPixmap(":/images/images/Num4Cell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num4Image = QBrush(map);

    map = QPixmap(":/images/images/Num5Cell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num5Image = QBrush(map);

    map = QPixmap(":/images/images/Num6Cell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num6Image = QBrush(map);

    map = QPixmap(":/images/images/Num7Cell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num7Image = QBrush(map);

    map = QPixmap(":/images/images/Num8Cell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num8Image = QBrush(map);
}
