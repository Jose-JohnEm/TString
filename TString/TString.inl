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
    _chosenLanguage = language;
}

inline const std::string &JDK::TString::getChosenLanguage()
{
    return _chosenLanguage;
}
