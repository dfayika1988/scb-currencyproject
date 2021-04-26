
#include <ql/currency.hpp>
#include <utility>

namespace QuantLib {

    std::ostream& operator<<(std::ostream& out, const Currency& c) {
        if (!c.empty())
            return out << c.code();
        else
            return out << "null currency";
    }

    Currency::Data::Data(std::string name,
                         std::string code,
                         Integer numericCode,
                         std::string symbol,
                         std::string fractionSymbol,
                         Integer fractionsPerUnit,
                         const Rounding& rounding,
                         std::string formatString,
                         fractionsPerUnit(fractionsPerUnit),
      rounding(rounding), triangulated(std::move(triangulationCurrency)),
      formatString(std::move(formatString)) {}
}
