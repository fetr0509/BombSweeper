#ifndef CELLBRUSHCLASS_H
#define CELLBRUSHCLASS_H

#include <QPixmap>
#include <QBrush>

class CellBrushClass
{
public:
    CellBrushClass(int cellSize);

    QBrush hiddenImage;
    QBrush revealedImage;
    QBrush bombImage;
    QBrush ExplosionImage;
    QBrush flagImage;
    QBrush num1Image;
    QBrush num2Image;
    QBrush num3Image;
    QBrush num4Image;
    QBrush num5Image;
    QBrush num6Image;
    QBrush num7Image;
    QBrush num8Image;
};

#endif // CELLBRUSHCLASS_H