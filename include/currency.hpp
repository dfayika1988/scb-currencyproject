#ifndef quantlib_currency_hpp
#define quantlib_currency_hpp

#include <ql/math/rounding.hpp>
#include <ql/errors.hpp>
#include <iosfwd>

namespace QuantLib {

    //! %Currency specification
    class Currency {
      public:
        //! default constructor
        /*! Instances built via this constructor have undefined
            behavior. Such instances can only act as placeholders
            and must be reassigned to a valid currency before being
            used.
        */
        Currency() = default;
        //! \name Inspectors
        //@{
        //! currency name, e.g, "U.S. Dollar"
        const std::string& name() const;
        //! ISO 4217 three-letter code, e.g, "USD"
        const std::string& code() const;
        //! ISO 4217 numeric code, e.g, "840"
        Integer numericCode() const;
        //! symbol, e.g, "$"
        const std::string& symbol() const;
        //! fraction symbol, e.g, "¢"
        const std::string& fractionSymbol() const;
        //! number of fractionary parts in a unit, e.g, 100
        Integer fractionsPerUnit() const;
        //! rounding convention
        const Rounding& rounding() const;
        //! output format
        /*! The format will be fed three positional parameters,
            namely, value, code, and symbol, in this order.
        */
        std::string format() const;
        //@}
        //! \name Other information
        //@{
        //! is this a usable instance?
        bool empty() const;
        //! currency used for triangulated exchange when required
        const Currency& triangulationCurrency() const;
        //@}
      protected:
        struct Data;
        ext::shared_ptr<Data> data_;
     private:
        void checkNonEmpty() const;
    };

    struct Currency::Data {
        std::string name, code;
        Integer numeric;
        std::string symbol, fractionSymbol;
        Integer fractionsPerUnit;
        Rounding rounding;
        Currency triangulated;
        std::string formatString;

        Data(std::string name,
             std::string code,
             Integer numericCode,
             std::string symbol,
             std::string fractionSymbol,
             Integer fractionsPerUnit,
             const Rounding& rounding,
             std::string formatString,
             Currency triangulationCurrency = Currency());
    };
