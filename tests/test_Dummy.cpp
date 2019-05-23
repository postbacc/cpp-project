
// gtest/gtest.h must be included here
#include <gtest/gtest.h>
#include "../code/Dummy.h"

class test_Dummy : public ::testing::Test {
protected:
	// this function runs Before every single TEST_F function
	void SetUp() override {
    }

	// this function runs After ever TEST_F function
	void TearDown() override {
    }
};

TEST_F(test_Dummy, YouCanPutAnyTextHere){
        // lets create an object of dummy
        Dummy dummy_obj;

        // if we pass in a number to SomeMethod function of dummy_obj
        // we should get back the same number+1
        EXPECT_EQ(2,dummy_obj.SomeMethod(1));
        // lets try another one
        EXPECT_EQ(13,dummy_obj.SomeMethod(12));

}

TEST_F(test_Dummy, SomeOtherNameForThisTest){
        // lets create an object of dummy
        Dummy dummy_obj;

        // this test should fail, since there is a mistake in the test code bellow
        EXPECT_EQ(20,dummy_obj.SomeMethod(20));
}

