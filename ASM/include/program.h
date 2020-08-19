#ifndef __PROGRAM__H__
#define __PROGRAM__H__
#include "Document.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

// define option constant
#define ADD_DOCUMENT 1
#define DISPLAY 2
#define EXIT 0

class Program
{
private:
    vector<Document *> Doc;

public:
    void print_menu();
    int get_option();
    void do_task(const int &option);
    void add_document();
    void display_document();
    void run();
};

#endif
