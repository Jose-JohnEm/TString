#include "Exception.hpp"

JDK::Exception::Exception(const std::string &object, const std::string &what)
: _what(what), _object(object)
{

}

JDK::Exception::~Exception()
{

}

const char *JDK::Exception::what() const noexcept
{
    return _what.c_str();
}

const char *JDK::Exception::who() const noexcept
{
    return _object.c_str();
}