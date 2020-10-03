#ifndef WASTEPAPER_H
#define WASTEPAPER_H

class WastePaper
{
private:
    float paperWidth, paperHeight, paperThickness, x, y;

public:
    void setWidth(float width);
    float getWidth();
    void setHeight(float height);
    float getHeight();
    void setThickness(float thickness);
    float getThickness();
    void setX(float x);
    float getX();
    void setY(float y);
    float getY();
    WastePaper();
    WastePaper(float width, float height, float thickness);
    WastePaper(float x, float y);
    WastePaper(float width, float height, float thickness, float x,float y);
    WastePaper(const WastePaper &anotherPaper);
};

#endif // WASTEPAPER_H
