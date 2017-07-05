#include "cellbrushclass.h"

CellBrushClass::CellBrushClass(int cellSize)
{

    QPixmap map(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    QBrush brush(map);

    QPixmap map(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    hiddenImage = QBrush(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    revealedImage(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    bombImage(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    ExplosionImage(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    flagImage(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num1Image(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num2Image(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num3Image(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num4Image(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num5Image(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num6Image(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num7Image(map);

    map = QPixmap(":/images/images/HiddenCell.png");
    map = map.scaled(cellSize,cellSize,Qt::IgnoreAspectRatio,Qt::FastTransformation);
    num8Image(map);
}
