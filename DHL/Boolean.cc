// Boolean.cc implements for Boolean class

#include "Boolean.h"



namespace DHL
{
    // static成员变量，必须在使用之前初始化
    int Boolean::static_variable = 0;
    // Boolean::Boolean(/* args */)
    // {
    // }

    // Boolean::~Boolean()
    // {
    // }

    bool Boolean::_xor_(ushort a, ushort b)
    {
        if(a == b) return true;
        return false;
    }


    int Boolean::static_test()
    {
        return ++static_variable;
    }


}
