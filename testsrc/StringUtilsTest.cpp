#include <gtest/gtest.h>
#include "StringUtils.h"

TEST(StringUtilsTest, SliceTest){
    std::string baseString = "Hello!";
    EXPECT_EQ(StringUtils::Slice(baseString,0,5),"Hello");
    EXPECT_EQ(StringUtils::Slice(baseString,0,4),"Hell");
    EXPECT_EQ(StringUtils::Slice(baseString,1,4),"ell");
    EXPECT_EQ(StringUtils::Slice(baseString,1),"ello!");
    EXPECT_EQ(StringUtils::Slice(baseString,-1),"!");
    EXPECT_EQ(StringUtils::Slice(baseString,-1,-2),"");
    EXPECT_EQ(StringUtils::Slice(baseString,-2,-1),"o");
}

TEST(StringUtilsTest, Capitalize){
    
}

TEST(StringUtilsTest, Upper){
    
}

TEST(StringUtilsTest, Lower){
    
}

TEST(StringUtilsTest, LStrip){
    
}

TEST(StringUtilsTest, RStrip){
    
}

TEST(StringUtilsTest, Strip){
    
}

TEST(StringUtilsTest, Center){
    
}

TEST(StringUtilsTest, LJust){
    
}

TEST(StringUtilsTest, RJust){
    
}

TEST(StringUtilsTest, Replace){
    
}

TEST(StringUtilsTest, Split){
    
}

TEST(StringUtilsTest, Join){
    
}

TEST(StringUtilsTest, ExpandTabs){
    
}

TEST(StringUtilsTest, EditDistance){
    
}
