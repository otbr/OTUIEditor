#ifndef OTUIBUTTON_H
#define OTUIBUTTON_H

#include "widget.h"

namespace OTUI {
    class Button : public Widget
    {
    public:
        Button();
        Button(QString widgetId, QString dataPath, QString imagePath);
        ~Button();

    private:
        QString getText() const { return m_text; }
        void setText(const QString &text) {
            m_text = text;
        }

    public:
        void draw(QPainter &painter);

    private:
        QString m_text = "Button";
    };
}

#endif // OTUIBUTTON_H
