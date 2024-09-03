// Boolean.h

#ifndef _DHL_BOOLEAN_H_
#define _DHL_BOOLEAN_H_

namespace DHL
{
    class Boolean
    {
    private:
        static int static_variable;
    public:
        typedef unsigned short ushort;

        Boolean(/* args */) = delete;
        ~Boolean() = default;

        static bool _xor_(ushort a, ushort b);
        static int static_test();
    };
}

#endif // _DHL_BOOLEAN_H_
