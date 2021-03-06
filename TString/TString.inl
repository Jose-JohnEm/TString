inline void JDK::TString::defineLanguages(std::vector<std::string> languages)
{
   _availableLanguages = languages;
}

inline std::vector<std::string> &JDK::TString::getDefinedLanguages()
{
    return _availableLanguages;
}

inline void JDK::TString::setLanguage(const std::string &language)
{
    if (std::find(_availableLanguages.begin(), _availableLanguages.end(), language) == _availableLanguages.end())
        throw Exception("TString", language + " is not available");

    _chosenLanguage = language;
}

inline const std::string &JDK::TString::getChosenLanguage()
{
    return _chosenLanguage;
}

inline std::string JDK::TString::get() const
{
    return _texts.at(JDK::TString::getChosenLanguage());
}