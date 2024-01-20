#include "StringUtils.h"

namespace StringUtils{

std::string Slice(const std::string &str, ssize_t start, ssize_t end) noexcept{
    if(start<0) {
        start=str.length()+start;
    }
    if(end==0){
        end=str.length();
    }
    if(end<0){
        end=str.length()+end;
    }
    if(end-start<0){
        return "";
    }
    return str.substr(start,end-start);
}

std::string Capitalize(const std::string &str) noexcept{
    auto Copy = str;

    Copy[0]=toupper(str[0]);
    for(size_t index=1;index<Copy.length();index++){
        Copy[index]=tolower(Copy[index]);
    }
    return Copy;
}

std::string Upper(const std::string &str) noexcept{
    auto Copy = str;

    for(size_t index=0;index<Copy.length();index++){
        Copy[index]=toupper(Copy[index]);
    }

    return Copy;
}

std::string Lower(const std::string &str) noexcept{
    auto Copy = str;

    for(size_t index=0;index<Copy.length();index++){
        Copy[index]=tolower(Copy[index]);
    }

    return Copy;
}

std::string LStrip(const std::string &str) noexcept{
    size_t counter=0;
    while(str[counter]==' '){
        counter++;
    }
    return str.substr(counter,str.length());
}

std::string RStrip(const std::string &str) noexcept{
    size_t counter=str.length()-1;
    while(str[counter]==' '){
        counter--;
    }
    return StringUtils::Slice(str,0,counter+1);
}

std::string Strip(const std::string &str) noexcept{
    return LStrip(RStrip(str));
}

std::string Center(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string LJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string RJust(const std::string &str, int width, char fill) noexcept{
    // Replace code here
    return "";
}

std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    // Replace code here
    return "";
}

std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
    // Replace code here
    return {};
}

std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{
    // Replace code here
    return "";
}

std::string ExpandTabs(const std::string &str, int tabsize) noexcept{
    // Replace code here
    return "";
}

int EditDistance(const std::string &left, const std::string &right, bool ignorecase) noexcept{
    // Replace code here
    return 0;
}

};
