#include "TString.hpp"

std::vector<std::string> JDK::TString::_availableLanguages = {"Anglais"};
std::string JDK::TString::_chosenLanguage = "Anglais";

JDK::TString::TString()
{

}

JDK::TString::TString(std::vector<std::string> texts)
{
    size_t i = 0;

    if (texts.size() < TString::getDefinedLanguages().size())
    {
        throw Exception("TSring", "Trying to create a String but you don't provide enough traslations");
    }
    else if (texts.size() > TString::getDefinedLanguages().size())
    {
        throw Exception("TSring", "Trying to create a String but you provide too much traslations");
    }

    for (const std::string &lang : TString::getDefinedLanguages())
    {
        _texts[lang] = texts[i];
        i++;
    }
}

JDK::TString::TString(const TString &old)
{
    this->_texts = old._texts;
}

JDK::TString::~TString()
{
    
}

JDK::TString &JDK::TString::operator=(const TString &old)
{
    this->_texts = old._texts;
    return *this;
}

std::string operator+(std::string str, const JDK::TString tstring)
{
    str += tstring.get();
    return str;
}

char *& operator+(char *&str, const JDK::TString &tstring)
{
    str = const_cast<char *>((std::string(str) + tstring).c_str());
    return str;
}

std::ostream& operator<<(std::ostream &os, const JDK::TString &tstring)
{
    os << tstring.get();
    return os;
}