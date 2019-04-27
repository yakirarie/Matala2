//
// Created by YakirLaptop on 27/04/2019.
//

#ifndef MATALA_2_EDITOR_H
#define MATALA_2_EDITOR_H


#include "Document.h"

class Editor {

private:
    Document doc;
public:
    Editor(string s) : doc(s){}
    void loop();
    string pAction(){ return doc.pAction();}
    string nAction(){ return doc.nAction();}
    string percentP_Action(){ return doc.percentP_Action();}
    void numberAction(int i){ doc.numberAction(i);}
    void aAction(string s){ doc.aAction(s);}
    void iAction(string s){ doc.iAction(s);}
    void cAction(string s){ doc.cAction(s);}
    void dAction(){ doc.dAction();}
    string textAction(string s){ return doc.textAction(s);}
    void soldnewAction(string s1, string s2){ doc.soldnewAction(s1,s2);}



};


#endif //MATALA_2_EDITOR_H
