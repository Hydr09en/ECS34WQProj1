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
    EXPECT_EQ(StringUtils::Center("hello ",10,' '),"  hello   ");
    EXPECT_EQ(StringUtils::Center("hello",10,' '),"  hello   ");
    EXPECT_EQ(StringUtils::Center("hello",10,'-'),"--hello---");
    EXPECT_EQ(StringUtils::Center("ab",5,'-'),"-ab--");
    EXPECT_EQ(StringUtils::Center("ab",6,'-'),"--ab--");
    EXPECT_EQ(StringUtils::Center("ab",2,'-'),"ab");
}

TEST(StringUtilsTest, LJust){
    EXPECT_EQ(StringUtils::LJust("hello ",10,' '),"hello     ");
    EXPECT_EQ(StringUtils::LJust("hello",10,' '),"hello     ");
    EXPECT_EQ(StringUtils::LJust("hello",10,'-'),"hello-----");
    EXPECT_EQ(StringUtils::LJust("ab",5,'-'),"ab---");
    EXPECT_EQ(StringUtils::LJust("ab",6,'-'),"ab----");
    EXPECT_EQ(StringUtils::LJust("ab",2,'-'),"ab");
}

TEST(StringUtilsTest, RJust){
    EXPECT_EQ(StringUtils::RJust("hello ",10,' '),"    hello ");
    EXPECT_EQ(StringUtils::RJust("hello",10,' '),"     hello");
    EXPECT_EQ(StringUtils::RJust("hello",10,'-'),"-----hello");
    EXPECT_EQ(StringUtils::RJust("ab",5,'-'),"---ab");
    EXPECT_EQ(StringUtils::RJust("ab",6,'-'),"----ab");
    EXPECT_EQ(StringUtils::RJust("ab",2,'-'),"ab");
} 

TEST(StringUtilsTest, Replace){
    EXPECT_EQ(StringUtils::Replace("abcabcabcabcabc","abc","def"),"defdefdefdefdef");
    EXPECT_EQ(StringUtils::Replace("abcdefabcdefabc","abc","def"),"defdefdefdefdef");
    EXPECT_EQ(StringUtils::Replace("def","abc","def"),"def");
    EXPECT_EQ(StringUtils::Replace("123333333","3","4"),"124444444");
    EXPECT_EQ(StringUtils::Replace("one one one ","one ","two"),"twotwotwo");   
}

TEST(StringUtilsTest, Split){
    std::vector<std::string> a= {"Hello","World!"};
    EXPECT_EQ(StringUtils::Split("Hello World!"),a);
    a={"","1","2","3","4","5","6","7"};
    EXPECT_EQ(StringUtils::Split(" 1 2 3 4 5 6 7"),a);
    a={"Hello","World!"};
    EXPECT_EQ(StringUtils::Split("Hello-World!","-"),a);
    a={"Hello","World!"};
    EXPECT_EQ(StringUtils::Split("HelloOoooWorld!","Oooo"),a);
}

TEST(StringUtilsTest, Join){
    
}

TEST(StringUtilsTest, ExpandTabs){
    
}

TEST(StringUtilsTest, EditDistance){
    
}
