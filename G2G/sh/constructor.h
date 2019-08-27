#ifndef SHAPES_H
#define SHAPES_H

#include <QPointF>
class QGraphicsItem;
namespace ShapePr {

enum PrType {
    NullPT,
    Rect,
    Line,
    Elipse,
    ArcPT,
    Text,
};

class Constructor {
    static PrType type;
    static int counter;
    static QPointF point;
    static QGraphicsItem* item;
    static bool m_snap;

public:
    static void addItem(const QPointF& value);
    static void updateItem(const QPointF& value);

    static PrType getType();
    static void setType(const PrType& value);

    static void update(bool click);

    static int getCounter();
    static void setCounter(int value);
    static bool snap();
    static void setSnap(bool snap);
};

} // namespace ShapePr
#endif // SHAPES_H