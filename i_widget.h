#ifndef I_WIDGET_H_INCLUDED
#define I_WIDGET_H_INCLUDED

class IWidget
{
    public:
        virtual ~IWidget() {}
        virtual void Draw() = 0;
};

#endif // I_WIDGET_H_INCLUDED
