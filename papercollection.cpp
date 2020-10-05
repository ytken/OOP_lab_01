#include "papercollection.h"
#include <iostream>

using namespace std;

PaperCollection::PaperCollection() {
    first = nullptr;
    count = 0;
}

PaperCollection::PaperCollection(const PaperCollection &paperStack) {
    first = paperStack.first;
    count = paperStack.count;
}

void PaperCollection::push(const WastePaper &paper) {
    auto cur = first;
    while(cur->next) cur=cur->next;
    cur->next = new PaperElement(paper);
}

WastePaper &PaperCollection::pop(int pos) {
    if(pos<count){
        auto prev=first;
        for(int i=0; i<pos-1 && prev; i++, prev=prev->next);
        auto res = prev->paper;
        auto next = prev->next->next;
        delete(prev->next);
        prev->next = next;
        return res;
    }
    cout <<"Cannot delete: there is no element under such number";
    return first->paper;
}

void PaperCollection::insert(int pos, const WastePaper &paper) {
    if(pos<count){
        auto prev=first;
        for(int i=0; i<pos && prev; i++, prev=prev->next);
        auto cur = new PaperElement(paper);
        cur->next = prev->next;
        prev->next = cur;
        return;
    }
    cout << "Not so many elements, insert in the end\n";
    push(paper);
}

WastePaper &PaperCollection::get(int pos) const {
    auto cur = first;
    if(pos<count){
        for(int i=0; i<pos; i++, cur=cur->next);
        return cur->paper;
    }
    cout<<"Cannot get: there is no element under such number\n";
    return first->paper;
}

void PaperCollection::set(int pos, const WastePaper &paper) {
    if(pos<count){
        auto cur=first;
        for(int i=0; i<pos && cur; i++, cur=cur->next);
        cur->paper = paper;
        return;
    }
    cout << "Cannot set: there is no element under such number";
}

int PaperCollection::getCount() const {
    return count;
}

PaperCollection::~PaperCollection() {
    PaperElement *next = first;
    while(next) {
        next = first->next;
        delete first;
        first = next;
    }
};

bool PaperCollection::isTheStackSustainable() const {
    return true;
}

PaperCollection::PaperElement::PaperElement(const WastePaper &)
{

}
