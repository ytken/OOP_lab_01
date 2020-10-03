#include <iostream>
#include <assert.h>

using namespace std;
#include "wastepaper.h"

/*
На одном из столов офиса растёт стопка макулатуры и одноразовой посуды. Сотрудники опасаются, что в определённый
момент равновесие нарушится и стопка упадёт. Разработайте для них программу, позволяющую воссоздать стопку и
определить, находится ли она в равновесии.
1. Лист бумаги: ширина, высота, толщина, координаты по двум осям
2. Стопка макулатуры (стек кусков бумаги): метод проверки на наличие равновесия
3. Бумажная тарелка: радиус, толщина, координаты по двум осям
*/

namespace WastePaperTests {

constexpr float PARAMETER_TEST_FIELD = 12.6;
constexpr float COORDS_TEST_FIELD = 7.4;
constexpr float INVALID_COORD = -8.5;

void testDefaultConstructor() {
    WastePaper defaultPaper;
    assert(defaultPaper.getWidth() == (float) 0);
    assert(defaultPaper.getHeight() == (float) 0);
    assert(defaultPaper.getThickness() == (float) 0);
    assert(defaultPaper.getX() == (float) 0);
    assert(defaultPaper.getY() == (float) 0);
}

void testPaperParameters() {
    WastePaper paperParameters(PARAMETER_TEST_FIELD,PARAMETER_TEST_FIELD,PARAMETER_TEST_FIELD);
    assert(paperParameters.getWidth() == PARAMETER_TEST_FIELD);
    assert(paperParameters.getHeight() == PARAMETER_TEST_FIELD);
    assert(paperParameters.getThickness() == PARAMETER_TEST_FIELD);
    assert(paperParameters.getX() == (float) 0);
    assert(paperParameters.getY() == (float) 0);
}

void testPaperCoordinates() {
    WastePaper paperCoordinates(COORDS_TEST_FIELD,COORDS_TEST_FIELD);
    assert(paperCoordinates.getWidth() == (float) 0);
    assert(paperCoordinates.getHeight() == (float) 0);
    assert(paperCoordinates.getThickness() == (float) 0);
    assert(paperCoordinates.getX() == COORDS_TEST_FIELD);
    assert(paperCoordinates.getY() == COORDS_TEST_FIELD);
}

void testWholePaper() {
    WastePaper paperAllParameters(PARAMETER_TEST_FIELD,PARAMETER_TEST_FIELD,PARAMETER_TEST_FIELD,COORDS_TEST_FIELD,COORDS_TEST_FIELD);
    assert(paperAllParameters.getWidth() == PARAMETER_TEST_FIELD);
    assert(paperAllParameters.getHeight() == PARAMETER_TEST_FIELD);
    assert(paperAllParameters.getThickness() == PARAMETER_TEST_FIELD);
    assert(paperAllParameters.getX() == COORDS_TEST_FIELD);
    assert(paperAllParameters.getY() == COORDS_TEST_FIELD);
}

void testCopyPaper() {
    WastePaper paperAllParameters(PARAMETER_TEST_FIELD,PARAMETER_TEST_FIELD,PARAMETER_TEST_FIELD,COORDS_TEST_FIELD,COORDS_TEST_FIELD);
    WastePaper copyPaper(paperAllParameters);
    assert(copyPaper.getWidth() == PARAMETER_TEST_FIELD);
    assert(copyPaper.getHeight() == PARAMETER_TEST_FIELD);
    assert(copyPaper.getThickness() == PARAMETER_TEST_FIELD);
    assert(copyPaper.getX() == COORDS_TEST_FIELD);
    assert(copyPaper.getY() == COORDS_TEST_FIELD);
}

void testInvalidPaper() {
    WastePaper invalidPaper(INVALID_COORD,INVALID_COORD,INVALID_COORD,INVALID_COORD,INVALID_COORD);
    assert(!(invalidPaper.getWidth() == INVALID_COORD));
    assert(!(invalidPaper.getHeight() == INVALID_COORD));
    assert(!(invalidPaper.getThickness() == INVALID_COORD));
    assert(invalidPaper.getX() == INVALID_COORD);
    assert(invalidPaper.getY() == INVALID_COORD);
}
}

int counti(int i) {
    for(i; i<4; i++)
        for(int i=0; i<3; i++)
            ::i+=++i;
    return i--;
}

int main()
{
    WastePaperTests::testDefaultConstructor();
    WastePaperTests::testPaperParameters();
    WastePaperTests::testPaperCoordinates();
    WastePaperTests::testWholePaper();
    WastePaperTests::testCopyPaper();
    int i=1;
    return counti(3);
}
