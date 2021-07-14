#include <iostream>
#include <string>
#include <vector>
#include "TString.hpp"
#include "Exception.hpp"

using namespace std;
using namespace JDK;

int main()
{
    try
    {
        TString::defineLanguages({"Anglais", "Francais", "Portugais"});
        TString::setLanguage("Francais");

        TString text = vector<std::string>({"Hello my friend", "Wesh mon gars", "Oi minha poto"});
        string cmd;
        string tmp;

        while (1)
        {
            cout << "$ ";
            getline(cin, cmd);

            if (cmd == "disp")
            {
                cout << ">> " + text << endl;
                continue;
            }
            if (cmd.substr(0, 4) == "set ")
            {
                TString::setLanguage(cmd.substr(4));
            }
            else
                cout << "Unknown Command" << endl;
        }
    }
    catch(const JDK::Exception &e)
    {
        std::cerr << "Error thrown from '" << e.who() << "' Class" << endl << "Because " << e.what() << endl;
    }

    return 0;
}