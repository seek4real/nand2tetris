// Cxx.h

#ifndef _CXX_H_
#define _CXX_H_

class Cxx
{

private:
    typedef unsigned char byte;
    mutable int index = 0;
    const size_t MAX = 10;
    static bool running;
    // unsigned char length;
    byte length;
    Cxx* next;
public:
    Cxx() = delete;
    Cxx(int, byte, Cxx*);
    ~Cxx();

    inline byte GetLength() const;

    Cxx& MoveNext();
};




#endif