//
/* Yakir Arie 205387491 */
/* Ofek Darhi 207975772 */
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

public:
    Document() {};
    string pAction(int);
    string nAction(int);
    string percentP_Action();
    int aiAction(int,string);
    void cAction(int,string);
    int dAction(int);
    string textAction(int,string);
    void soldnewAction(int,string,string);
    int getSize(){return rows.size();}

};



#endif //MATALA_2_DOCUMENT_H
