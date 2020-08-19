#include <iostream>
#include "../include/Document.h"

Document::Document(const string &type, const string &content)
{
    this->type = type;
    this->content = content;
}

void Document::set_content(const string &content)
{
    this->content = content;
}

void Document::set_type(const string &type)
{
    this->type = type;
}

string Document::get_type() const
{
    return type;
}

string Document::get_content() const
{
    return content;
}

// void Document::add_document()
// {
//     string type;
//     string content;
//     bool isRight = true;
//     cout << "Add a new document" << endl;
//     while (isRight)
//     {
//         cout << "Enter document type: ";
//         cin >> type;
//         if (type == "Notarized" || type == "Business-license" || type == "Real-estate")
//         {
//             isRight = false;
//         }
//         else
//         {
//             cout << "We not support this document!" << endl;
//         }
//     }
//     cout << "Enter content: ";
//     cin >> content;
//     Document *Request = new Document(type, content);
//     cout << "We take: " << Request->get_type() << endl;
//     Doc.push_back(Request);
// }
// void Document::display_document()
// {
//     Documentchecker *Warda = new Ward();
//     Documentchecker *Districta = new District();
//     Documentchecker *Provinciala = new Provincial();
//     Warda->setNext(Districta);
//     Districta->setNext(Provinciala);
//     for (int i = 0; i < Doc.size(); i++)
//     {
//         cout << "Type of document: " << Doc[i]->get_type() << endl;
//         cout << "Content: " << Doc[i]->get_content() << endl;
//         Warda->process(Doc[i]);
//     }
//     for (int i = 0; i < Doc.size(); i++)
//     {
//         delete Doc[i];
//     }
// }