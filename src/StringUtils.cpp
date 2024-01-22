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
    size_t leftInsert = (width-str.length())/2;

    return LJust(RJust(str,str.length()+leftInsert,fill),width,fill);
}

std::string LJust(const std::string &str, int width, char fill) noexcept{
    auto Copy = str;
    
    for(int i = 0;i < width - str.length();i++){
        Copy=Copy+fill;
    }

    return Copy;
}

std::string RJust(const std::string &str, int width, char fill) noexcept{
    auto Copy = str;
    
    for(int i = 0;i < width - str.length();i++){
        Copy=fill+Copy;
    }

    return Copy;
}

std::string Replace(const std::string &str, const std::string &old, const std::string &rep) noexcept{
    auto Copy = str;
    auto oldLen=old.length();
    for(size_t i=0;i<Copy.length();i++){
        if(Copy.substr(i,oldLen)==old){
            Copy.erase(i,oldLen);
            Copy.insert(i,rep);
        }
    }
    return Copy;
}

std::vector< std::string > Split(const std::string &str, const std::string &splt) noexcept{
    size_t pos=0;
    size_t found;
    std::vector< std::string > vect={};

    auto spliter=splt;

    if(spliter==""){
        spliter=" ";
    }
    
    while ((found = str.find(spliter, pos)) != std::string::npos) {
        vect.push_back(str.substr(pos, found - pos));
        pos = found + spliter.length();
    }

    vect.push_back(str.substr(pos)); 

    return vect;
}

std::string Join(const std::string &str, const std::vector< std::string > &vect) noexcept{    
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
