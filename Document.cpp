//
// Created by YakirLaptop on 27/04/2019.
//

#include "Document.h"

void Document::readfile() {
    ifstream in(filename+".txt");
    string str;
    while (getline(in, str))
    {
        if(str.size() > 0)
            rows.push_back(str);
    }

}

string Document::pAction() {
    string ans = rows[currentLine];
    currentLine++;
    return ans;

}

string Document::nAction() {
    string ans = to_string(currentLine)+"\t"+rows[currentLine];
    currentLine++;
    return ans;
}

string Document::percentP_Action() {
    string ans;
    for(auto i: rows)
        ans.append(i+"\n");
    return ans;
}

void Document::numberAction(int i) {
    currentLine = i;
}

void Document::aAction(string text) {
    rows[currentLine]+= text;
}

void Document::iAction(string text) {
    rows[currentLine-1]+= text;
}

void Document::cAction(string text) {
    rows[currentLine] = text;
}

void Document::dAction() {
    rows.erase(rows.begin()+currentLine-1);
}

string Document::textAction(string text) {
    vector<string>::iterator it;
    it = find(rows.begin()+currentLine, rows.end(),text);
    if (it != rows.end()){
        int index = std::distance(rows.begin(), it);
        return to_string(index);
    }
    else
        return "-1";
}

void Document::soldnewAction(string Old, string New) {
    int index =  stoi(textAction(Old));
    if (index!=-1){// old text exists
        rows[index] = New;
    }

}



