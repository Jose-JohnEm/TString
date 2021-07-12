#ifndef TSTRING_HPP
#define TSTRING_HPP

#include <vector>
#include <string>

namespace JDK
{
    class TString
    {
        private:
            static std::vector<std::string> _availableLanguages;
            static std::string _chosenLanguage;

        public:
            TString();
            ~TString();

            static void defineLanguages(std::vector<std::string> languages);
            static std::vector<std::string> &getDefinedLanguages();
            static void setLanguage(const std::string &language);
            static const std::string &getChosenLanguage();


    };

    #include "TString.inl"
};

#endif