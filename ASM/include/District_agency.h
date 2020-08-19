#ifndef __District__H__
#define __District__H__
#include "Documentchecker.h"
#include <iostream>
using namespace std;

class District : public Documentchecker
{
public:
    void setNext(Documentchecker *superior);
    void process(Document *request);
};
#endif