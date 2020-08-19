#include "../include/Provincial_agency.h"
#include <iostream>
using namespace std;

void Provincial::setNext(Documentchecker *superior)
{
    next = superior;
}
void Provincial::process(Document *request)
{
    if (request->get_type() == "Business license")
    {
        cout << "Your document (" << request->get_type() << ") has been received and processed by the Provincial level" << endl;
    }
    else
    {
        cout << "Your document (" << request->get_type() << ") has been received and processed by the Provincial level" << endl;
    }
}