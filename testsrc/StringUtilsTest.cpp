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
    EXPECT_EQ(StringUtils::Capitalize("hello"),"Hello");
    EXPECT_EQ(StringUtils::Capitalize("heLLo"),"Hello");
    EXPECT_EQ(StringUtils::Capitalize("12hello"),"12hello");
    }

TEST(StringUtilsTest, Upper){
    EXPECT_EQ(StringUtils::Upper("hello"),"HELLO");
    EXPECT_EQ(StringUtils::Upper("heLLo"),"HELLO");
    EXPECT_EQ(StringUtils::Upper("12hello"),"12HELLO");
}

TEST(StringUtilsTest, Lower){
    EXPECT_EQ(StringUtils::Lower("HELLO"),"hello");
    EXPECT_EQ(StringUtils::Lower("heLLo"),"hello");
    EXPECT_EQ(StringUtils::Lower("12HELlo"),"12hello");
}

TEST(StringUtilsTest, LStrip){
    EXPECT_EQ(StringUtils::LStrip("           hello            "),"hello            ");
    EXPECT_EQ(StringUtils::LStrip("      hello            "),"hello            ");
    EXPECT_EQ(StringUtils::LStrip("                                                                        hello            "),"hello            ");
    EXPECT_EQ(StringUtils::LStrip("hello"),"hello");

}

TEST(StringUtilsTest, RStrip){
    EXPECT_EQ(StringUtils::RStrip("           hello            "),"           hello");
    EXPECT_EQ(StringUtils::RStrip("      hello            "),"      hello");
    EXPECT_EQ(StringUtils::RStrip("          hello                                                                          "),"          hello");
    EXPECT_EQ(StringUtils::RStrip("hello"),"hello");
}

TEST(StringUtilsTest, Strip){
    EXPECT_EQ(StringUtils::Strip("           hello            "),"hello");
    EXPECT_EQ(StringUtils::Strip("      hello            "),"hello");
    EXPECT_EQ(StringUtils::Strip("                                                                        hello            "),"hello");
    EXPECT_EQ(StringUtils::Strip("hello"),"hello");
  
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
