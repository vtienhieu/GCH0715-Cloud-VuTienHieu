#ifndef __DOCUMENTCHECKER__H__
#define __DOCUMENTCHECKER__H__
#include "Document.h"
using namespace std;

class Documentchecker
{
protected:
    Documentchecker *next;

public:
    virtual void setNext(Documentchecker *superior) = 0;
    virtual void process(Document *request) = 0;
};
#endif
