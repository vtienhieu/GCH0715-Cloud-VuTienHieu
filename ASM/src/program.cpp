
#include "../include/Document.h"
#include "../include/Documentchecker.h"
#include "../include/Wards_agency.h"
#include "../include/District_agency.h"
#include "../include/Provincial_agency.h"
#include "../include/program.h"
#include <string>
using namespace std;

void Program::print_menu()
{
    cout << "Administrative service system: " << endl;
    cout << "\t1. Add a document." << endl;
    cout << "\t2. Display all document." << endl;
    cout << "\t0. Exit." << endl;
}

int Program::get_option()
{
    cout << "Your choice: ";
    int opt;
    cin >> opt;
    return opt;
}

void Program::do_task(const int &option)
{
    switch (option)
    {
    case DISPLAY:
        display_document();
        break;
    case ADD_DOCUMENT:
        add_document();
        break;
    case EXIT:
        break;
    default:
        cout << "invalid option!" << endl;
    }
}

void Program::add_document()
{
    string type;
    string content;
    bool isRight = true;
    cout << "Add a new document" << endl;
    while (isRight)
    {
        cout << "Please enter one of the following supported documents : " << endl;
        cout << "Notarized" << endl;
        cout << "Real estate" << endl;
        cout << "Business license" << endl;
        cout << "" << endl;
        cin.ignore();
        cout << "Your document type: ";
        getline(std::cin, type);
        if (type == "Notarized" || type == "Real estate" || type == "Business license")
        {
            isRight = false;
        }
        else
        {
            cout << "We not support this document!" << endl;
        }
    }
    cout << "Enter content: ";
    getline(std::cin, content);
    Document *Request = new Document(type, content);
    cout << "We have received (" << Request->get_type() << ") from you" << endl;
    cout << "" << endl;
    Doc.push_back(Request);
}
void Program::display_document()
{
    Documentchecker *Warda = new Ward();
    Documentchecker *Districta = new District();
    Documentchecker *Provinciala = new Provincial();
    Warda->setNext(Districta);
    Districta->setNext(Provinciala);
    if (Doc.empty())
    {
        cout << "Empty!" << endl;
    }
    else
    {
        for (int i = 0; i < Doc.size(); i++)
        {
            cout << "" << endl;
            cout << "Type of document: " << Doc[i]->get_type() << endl;
            cout << "Content: " << Doc[i]->get_content() << endl;
            Warda->process(Doc[i]);
            cout << "" << endl;
        }
        Doc.clear();
    }
}

void Program::run()
{
    bool running = true;

    while (running)
    {
        print_menu();
        int opt = get_option();
        do_task(opt);

        if (opt == EXIT)
        {
            running = false;
        }
    }
}
