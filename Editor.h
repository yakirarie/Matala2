//
/* Yakir Arie 205387491 */
/* Ofek Darhi 207975772 */

#ifndef MATALA_2_EDITOR_H
#define MATALA_2_EDITOR_H


#include "Document.h"

class Editor {

private:
    Document doc;
    int currentLine;
public:
    Editor() : doc(){}
    void loop();
    string pAction(int i){ return doc.pAction(i);}
    string nAction(int i){ return doc.nAction(i);}
    string percentP_Action(){ return doc.percentP_Action();}
    void numberAction(int i);
    int aiAction(int i,string s){ return doc.aiAction(i,s);}
    void cAction(int i,string s){ doc.cAction(i,s);}
    int dAction(int i){ return doc.dAction(i);}
    string textAction(int i,string s){ return doc.textAction(i,s);}
    void soldnewAction(int i,string s1, string s2){ doc.soldnewAction(i,s1,s2);}



};


#endif //MATALA_2_EDITOR_H
