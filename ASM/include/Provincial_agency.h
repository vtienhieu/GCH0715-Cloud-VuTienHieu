#ifndef __PROVINCIAL__H__
#define __PROVINCIAL__H__
#include "Documentchecker.h"
#include <iostream>
using namespace std;

class Provincial : public Documentchecker
{
public:
    void setNext(Documentchecker *superior);
    void process(Document *request);
};
#endif