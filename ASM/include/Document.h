#ifndef __DOCUMENT__H__
#define __DOCUMENT__H__
#include <iostream>
#include <vector>
using namespace std;
class Document
{
protected:
    string type;
    string content;

public:
    Document(const string &type, const string &content);
    void set_content(const string &content);
    string get_content() const;
    void set_type(const string &type);
    string get_type() const;
    // void add_document();
    // void display_document();
};

#endif