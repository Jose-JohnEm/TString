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
        TString::defineLanguages({"Anglais", "Portugais"});
        TString::setLanguage("Portugais");
    }
    catch(const JDK::Exception &e)
    {
        std::cerr << "Error thrown from '" << e.who() << "' Class" << endl << "Because " << e.what() << endl;
    }

    cout << TString::getChosenLanguage() << endl;
    return 0;
}