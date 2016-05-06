#include "StrBlob.h"

StrBlob::StrBlob():data(std::make_shared<std::vector<std::string>>())
{
    //ctor
}
StrBlob::StrBlob(std::initializer_list<std::string> il):
    data(std::make_shared<std::vector<std::string>>(il))
{
    //ctor
}
void StrBlob::pop_back()
{
    check(0,"pop_back on empty StrBlob!");
    data->pop_back();
}
std::string& StrBlob::front()
{
    check(0,"front on empty StrBlob!");
    return data->front();
}
std::string& StrBlob::back()
{
    check(0,"back on empty StrBlob!");
    return data->back();
}
std::string& StrBlob::front()const
{
    check(0,"front on empty StrBlob!");
    return data->front();
}
std::string& StrBlob::back()const
{
    check(0,"back on empty StrBlob!");
    return data->back();
}
void StrBlob::check(size_t i,const std::string &msg)const
{
    if(i>=data->size())
    {
        throw std::out_of_range(msg);
    }
}
StrBlobPtr StrBlob::begin()
{
    return StrBlobPtr(*this);
}
StrBlobPtr StrBlob::end()
{
    return StrBlobPtr(*this, data->size());
}
StrBlob::~StrBlob()
{
    //dtor
}
