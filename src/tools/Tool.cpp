#include "Tool.h"

#include <QPainter>

Tool::Tool(QObject *parent)
    : QObject(parent)
    , m_paintDevice(0)
{

}

Tool::~Tool()
{

}

void Tool::setPaintDevice(QPaintDevice *paintDevice)
{
    m_paintDevice = paintDevice;
}

QPaintDevice *Tool::paintDevice() const
{
    return m_paintDevice;
}

void Tool::onMousePress(const QPoint &pos, Qt::MouseButton button)
{
    Q_UNUSED(pos);
    Q_UNUSED(button);
}

void Tool::onMouseMove(const QPoint &pos)
{
    Q_UNUSED(pos);
}

void Tool::onMouseRelease(const QPoint &pos)
{
    Q_UNUSED(pos);
}



