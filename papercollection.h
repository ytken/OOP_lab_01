#ifndef PAPERCOLLECTION_H
#define PAPERCOLLECTION_H
#include "wastepaper.h"


class PaperCollection
{
 public:
    PaperCollection();
    PaperCollection(const PaperCollection&);
    void push(const WastePaper &paper);
    WastePaper &pop(int pos);
    void insert(int pos, const WastePaper &paper);
    WastePaper &get(int pos) const;
    void set(int pos, const WastePaper &paper);
    int getCount() const;
    ~PaperCollection();
    bool isTheStackSustainable() const;

 private:
    struct PaperElement {
        WastePaper paper;
        PaperElement *next;
        PaperElement();
        PaperElement(const WastePaper&);
    };
    PaperElement *first;
    int count;
    int xCentre=0, yCentre=0, zCentre=0; //координаты центра тяжести
};

#endif // PAPERCOLLECTION_H
