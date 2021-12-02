#include <string_view>
#include <climits>

#include "../detail/utility.hpp"

namespace chcnv::from {
    template<typename T> T base2(const std::string_view str) {
        if (str.size() > sizeof(T) * CHAR_BIT) {
            ::chcnv::detail::panic(); // ??? refactor...
        }
        T res{};
        for (auto ch : str | std::views::reverse) {
            
        }
    }
}