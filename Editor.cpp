//
// Created by YakirLaptop on 27/04/2019.
//

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
    cin >> command;
    while (command != "Q") {
        if (command == "p") {
            cout << pAction() << endl;
        } else if (command == "n") {
            cout << nAction() << endl;
        } else if (command == "%p") {
            cout << percentP_Action() << endl;
        } else if (is_number(command)) {
            numberAction(stoi(command));
        } else if (command.substr(0, command.find(" ")) == "a") {
            aAction(command.substr(command.find(" ")));
        } else if (command.substr(0, command.find(" ")) == "i") {
            iAction(command.substr(command.find(" ")));
        } else if (command.substr(0, command.find(" ")) == "c") {
            cAction(command.substr(command.find(" ") + 1));
        } else if (command == "d") {
            dAction();
        } else if (command.substr(0, command.find("/")) == "") {
            string ans = textAction(command.substr(command.find("/") + 1));
            if (ans != "-1")
                cout << textAction(command.substr(command.find("/") + 1)) << endl;
        } else if (command.substr(0, command.find("/")) == "s") {
            command.erase(0, command.find("/") + 1);
            string s1 = command.substr(0, command.find("/"));
            command.erase(0, command.find("/") + 1);
            string s2 = command.substr(0, command.find("/"));
            soldnewAction(s1, s2);

        }

    }
}


