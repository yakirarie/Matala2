//
/* Yakir Arie 205387491 */
/* Ofek Darhi 207975772 */

#include <sstream>
#include "Editor.h"

static bool is_number(const std::string &s) {
    std::string::const_iterator it = s.begin();
    while (it != s.end() && std::isdigit(*it)) ++it;
    return !s.empty() && it == s.end();
}

void Editor::loop() {
//    istringstream command(percentP_Action());
//    string line;
//    while (std::getline(command, line)) {
    string command;
    currentLine = 0;
    getline(cin,command);
    while (command != "Q") {
        if (command == "p") {
            cout << pAction(currentLine-1) << endl;
        } else if (command == "n") {
            cout << nAction(currentLine-1) << endl;
        } else if (command == "%p") {
            cout<<percentP_Action();
        } else if (is_number(command)) {
            numberAction(stoi(command));
        } else if (command == "a") {
            string buffer;
            getline(cin, buffer);
            while (buffer!="\.") {
                currentLine = aiAction(currentLine, buffer);
                getline(cin, buffer);
            }
        } else if (command == "i") {
            string buffer;
            getline(cin, buffer);
            while (buffer!="\.") {
                currentLine = aiAction(currentLine - 1, buffer);
                currentLine += 1;
                getline(cin, buffer);
            }
        } else if (command == "c") {
            string buffer;
            getline(cin, buffer);
            while (buffer!="\.") {
                cAction(currentLine - 1, buffer);
                getline(cin, buffer);
            }
        } else if (command == "d") {
            int deletedLine = dAction(currentLine - 1);
            if (deletedLine!=-1)
                currentLine = deletedLine;
        } else if (command[0] == '/') {
            cout << textAction(currentLine-1,command.substr(1)) << endl;
        } else if (command.substr(0, command.find("/")) == "s") {
            command.erase(0, command.find("/") + 1);
            string s1 = command.substr(0, command.find("/"));
            command.erase(0, command.find("/") + 1);
            string s2 = command.substr(0, command.find("/"));
            soldnewAction(currentLine-1,s1, s2);

        }
        getline(cin,command);

    }

}

void Editor::numberAction(int i) {
    if (i>0&&i<=doc.getSize()){
        currentLine = i;
        cout << pAction(currentLine-1) << endl;
    }
}


