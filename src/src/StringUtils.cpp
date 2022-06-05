#include "kata/StringUtils.hpp"

namespace kata {

std::string intToBinaryRepresentation(int value)
{
    constexpr auto BITS_IN_BYTE{ 8 };
    constexpr int BIT_SHIFT{ (sizeof(int) * BITS_IN_BYTE) - 1 };

    constexpr auto MASK{ 1U };
    constexpr auto ASCII_SHIFT{ 48 };

    std::string result{};

    for(auto i = BIT_SHIFT; i >= 0; --i)
    {
        auto bitValue{ (value >> i) & MASK };
        result.push_back(static_cast<char>(ASCII_SHIFT + bitValue));
    }

    return result;
}

} // kata
