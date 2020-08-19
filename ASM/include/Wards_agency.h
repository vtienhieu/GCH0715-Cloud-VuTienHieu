#ifndef __WARDS__H__
#define __WARDS__H__
#include "Documentchecker.h"
#include <iostream>
using namespace std;

class Ward : public Documentchecker
{
public:
    void setNext(Documentchecker *superior);
    void process(Document *request);
};
#endif