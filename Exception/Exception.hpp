#ifndef JDK_EXCEPTION_HPP
#define JDK_EXCEPTION_HPP

#include <exception>
#include <string>

namespace JDK
{
    class Exception : public std::exception
    {
        private:
            std::string _what;
            std::string _object;

        public:
            Exception(const std::string &object, const std::string &what);
            ~Exception();

            const char *who() const noexcept;
            const char *what() const noexcept override;
    };
}

#endif