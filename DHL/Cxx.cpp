// Cxx.cpp

#include <iostream>
#include "Cxx.h"

Cxx::Cxx(int _index, byte _len, Cxx* p)
:index(_index),
length(_len),
next(p)
{
    std::cout << "CXX constructor." << std::endl;
}

Cxx::~Cxx()
{
    std::cout << "CXX Destroy index=" << index << " max=" << MAX << " len=" << length << std::endl;
    index = 0;
    length = 0;
    if(next != nullptr){
        delete next;
        next = nullptr;
    }

}

Cxx::byte Cxx::GetLength() const
{
    return length;
}

Cxx& Cxx::MoveNext()
{
    index++;
    if(index >= MAX){
        index = MAX;
    }
    return *this;
}
