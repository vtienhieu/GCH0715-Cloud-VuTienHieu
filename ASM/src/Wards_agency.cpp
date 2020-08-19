#include "../include/Wards_agency.h"
#include <iostream>
using namespace std;

void Ward::setNext(Documentchecker *superior)
{
    next = superior;
}
void Ward::process(Document *request)
{
    if (request->get_type() == "Notarized")
    {
        cout << "Your document (" << request->get_type() << ") has been received and processed by the Ward level" << endl;
    }
    else
    {
        cout << "Your document (" << request->get_type() << ") beyond the authority of the Ward level" << endl;
        next->process(request);
    }
}