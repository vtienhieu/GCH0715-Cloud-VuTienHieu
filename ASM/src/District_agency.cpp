#include "../include/District_agency.h"
#include <iostream>
using namespace std;

void District::setNext(Documentchecker *superior)
{
    next = superior;
}
void District::process(Document *request)
{
    if (request->get_type() == "Real estate")
    {
        cout << "Your document (" << request->get_type() << ") has been received and processed by the District level" << endl;
    }
    else
    {
        cout << "Your document (" << request->get_type() << ") beyond the authority of the District level" << endl;
        next->process(request);
    }
}