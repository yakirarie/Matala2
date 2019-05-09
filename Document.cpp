//
/* Yakir Arie 205387491 */
/* Ofek Darhi 207975772 */
//

#include "Document.h"


string Document::pAction(int ind) {
    if (ind>=0&&ind<rows.size())
        return rows.at(ind);
    return "";

}

string Document::nAction(int ind) {
  return to_string(ind+1)+"\t"+pAction(ind);
}

string Document::percentP_Action() {
    string ans;
    for(auto i: rows)
        ans+=i+"\n";
    return ans;
}



int Document::aiAction(int ind, string text) {
    if(ind>=0&&ind<rows.size()){
        rows.insert(rows.begin()+ind,text);
        ind++;
        if(ind<=rows.size())
            return ind;
        else
            return rows.size();
    }
    rows.push_back(text);
    return rows.size();
}


void Document::cAction(int ind,string text) {
    if (ind>=0&&ind<rows.size())
        rows[ind] = text;
}

int Document::dAction(int ind) {
    if (ind>=0&&ind<rows.size()){
        rows.erase(rows.begin()+ind);
        ind++;
        if(ind<=rows.size())
            return ind;
        else
            return rows.size();
    }
    return -1;
}

string Document::textAction(int ind, string text) {
    if (ind>=0&&ind<rows.size()) {
        for (int i = ind; i < rows.size(); i++)
            if (rows[i].find(text) != string::npos)
                return rows[i];
        for (int i = 0; i < ind; i++)
            if (rows[i].find(text) != string::npos)
                return rows[i];
    }
    return "-1";
}

void Document::soldnewAction(int ind,string Old, string New) {
    if (ind>=0&&ind<rows.size()) {
        for (int i = ind; i < rows.size(); i++)
            if (rows[i].find(Old) != string::npos)
                rows[i].replace(rows[i].begin() + rows[i].find(Old), rows[i].begin() + rows[i].find(Old) + Old.length(), New);
        for (int i = 0; i < ind; i++)
            if (rows[i].find(Old) != string::npos)
                rows[i].replace(rows[i].begin() + rows[i].find(Old), rows[i].begin() + rows[i].find(Old) + Old.length(), New);
    }

}







