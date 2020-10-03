#include "wastepaper.h"
#include <iostream>

void WastePaper::setWidth(float width) {width>0 ? this->paperWidth = width : this->paperWidth = 0;}
//Проверяет корректность ширины и устанавливает значение соответствующего атрибута

float WastePaper::getWidth(){return paperWidth;}
//Возвращает ширину листа

void WastePaper::setHeight(float height) {height>0 ? this->paperHeight = height : this->paperHeight = 0;}
//Проверяет корректность длины и устанавливает значение соответствующего атрибута

float WastePaper::getHeight(){return paperHeight;}
//Возвращает длину листа

void WastePaper::setThickness(float thickness) {thickness>0 ? this->paperThickness = thickness : this->paperThickness = 0;}
//Проверяет корректность толщины и устанавливает значение соответствующего атрибута

float WastePaper::getThickness(){return paperThickness;}
//Возвращает высоту листа

void WastePaper::setX(float x) {this->x = x;}
//Устанавливает значение абсциссы

float WastePaper::getX(){return x;}
//Возвращает абсциссу

void WastePaper::setY(float y) {this->y = y;}
//Устанавливает значение ординаты

float WastePaper::getY(){return y;}
//Возвращает ординату

WastePaper::WastePaper(){
    //Конструктор по умолчанию
    //Все переменные равны 0
    setWidth(0);
    setHeight(0);
    setThickness(0);
    setX(0);
    setY(0);
    std::cout <<"Default constructor\n";
}

WastePaper::WastePaper(float width, float height, float thickness){
    //Конструктор, инициализирующий параметры листа бумаги
    //При этом он находится в начале координат
    setWidth(width);
    setHeight(height);
    setThickness(thickness);
    setX(0);
    setY(0);
    std::cout <<"Constructor of parameters\n";
}

WastePaper::WastePaper(float x, float y){
    //Конструктор, инициализирующий координаты листа
    //Его начальные размеры все 0
    setWidth(0);
    setHeight(0);
    setThickness(0);
    setX(x);
    setY(y);
    std::cout <<"Constructor of coordinates\n";
}

WastePaper::WastePaper(float width, float height, float thickness, float x, float y){
    //Конструктор инициализирующий параметры листа и его координаты
    setWidth(width);
    setHeight(height);
    setThickness(thickness);
    setX(x);
    setY(y);
    std::cout <<"Constructor of all variables\n";
}

WastePaper::WastePaper(const WastePaper &anotherPaper){
    //Конструктор копирования
    setWidth(anotherPaper.paperWidth);
    setHeight(anotherPaper.paperHeight);
    setThickness(anotherPaper.paperThickness);
    setX(anotherPaper.x);
    setY(anotherPaper.y);
    std::cout <<"Copy constructor\n";
}
