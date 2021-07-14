#ifndef TSTRING_HPP
#define TSTRING_HPP

#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <list>

#include "Exception.hpp"

namespace JDK
{
    class TString
    {
        private:
            static std::vector<std::string> _availableLanguages;
            static std::string _chosenLanguage;

            std::map<std::string, std::string> _texts;

        public:
            TString();
            TString(std::vector<std::string> texts);
            TString(const TString &old);
            ~TString();

            static void defineLanguages(std::vector<std::string> languages);
            static std::vector<std::string> &getDefinedLanguages();
            static void setLanguage(const std::string &language);
            static const std::string &getChosenLanguage();

            std::string get() const;

            TString& operator=(const TString &old);
    };

    #include "TString.inl"
};

std::string operator+(std::string str, const JDK::TString tstring);
char *& operator+(char *&str, const JDK::TString &tstring);
std::ostream& operator<<(std::ostream &os, const JDK::TString &tstring);

#endif