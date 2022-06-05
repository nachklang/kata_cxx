#include "kata/StringUtils.hpp"

#include <gtest/gtest.h>

TEST(StringUtilsTest, IntToBinaryRepresentationTest)
{
    constexpr auto FIVE_AS_BINARY{ "00000000000000000000000000000101"};
    EXPECT_EQ(kata::intToBinaryRepresentation(5), FIVE_AS_BINARY);

    constexpr auto MINUS_ONE_AS_BINARY{ "11111111111111111111111111111111"};
    EXPECT_EQ(kata::intToBinaryRepresentation(-1), MINUS_ONE_AS_BINARY);

    constexpr auto ELEVEN_AS_BINARY{ "00000000000000000000000000001011" };
    EXPECT_EQ(kata::intToBinaryRepresentation(11), ELEVEN_AS_BINARY);

    constexpr auto FIVE_NINES_IN_BINARY = "00000000000000011000011010011111";
    EXPECT_EQ(kata::intToBinaryRepresentation(99999), FIVE_NINES_IN_BINARY);
}
