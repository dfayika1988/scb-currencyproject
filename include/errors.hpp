#ifndef quantlib_errors_hpp
#define quantlib_errors_hpp
#include <exception>
#include <sstream>
#include <string>

namespace QuantLib {

    //! Base error class
    class Error : public std::exception {
      public:
        /*! The explicit use of this constructor is not advised.
            Use the QL_FAIL macro instead.
        */
        Error(const std::string& file,
              long line,
              const std::string& functionName,
              const std::string& message = "");
        #ifdef QL_PATCH_MSVC_2013
        /*! the automatically generated destructor would
            not have the throw specifier.
        */
        ~Error() throw() override {}
        #endif
        //! returns the error message.
        const char* what() const QL_NOEXCEPT override;

      private:
        ext::shared_ptr<std::string> message_;
    };

}
