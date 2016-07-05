#include <gtest/gtest.h>

namespace {
    class PlaceHolderTest : public ::testing::Test {
    protected:
        PlaceHolderTest() {
        }

        virtual ~PlaceHolderTest() {
        }

        virtual void SetUp() {
        }

        virtual void TearDown() {
        }

    };
    TEST_F(PlaceHolderTest, AlwaysFail) {

        EXPECT_EQ(0, 1);
    }

    TEST_F(PlaceHolderTest, AlwaysSuccess) {
        EXPECT_EQ(0, 0);
    }

}