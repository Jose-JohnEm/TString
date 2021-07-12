#include <iostream>
#include <string>
#include <vector>
#include "TString.hpp"

using namespace std;
using namespace JDK;

int main()
{
    TString::defineLanguages({"Anglais", "Francais"});
    TString::setLanguage("Francais");

    cout << TString::getChosenLanguage() << endl;
    return 0;
}