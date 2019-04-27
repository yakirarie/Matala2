//
// Created by YakirLaptop on 27/04/2019.
//

#ifndef MATALA_2_DOCUMENT_H
#define MATALA_2_DOCUMENT_H
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <streambuf>
#include <algorithm>    // std::find


using namespace std;

class Document {

private:
    vector<string> rows;
    string filename;
public:
    Document() : filename("") {};
    Document(string s) : filename(s) { readfile();};
    void readfile();
    string pAction();
    string nAction();
    string percentP_Action();
    void numberAction(int);
    void aAction(string);
    void iAction(string);
    void cAction(string);
    void dAction();
    string textAction(string);
    void soldnewAction(string,string);
};

static int currentLine = 0;


#endif //MATALA_2_DOCUMENT_H
