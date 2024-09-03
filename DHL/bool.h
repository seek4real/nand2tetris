#ifndef _bool_cc_
#define _bool_cc_

class BoolTest
{
private:
    int x;
    int y;
    int z;
public:
    BoolTest() = delete;
    BoolTest(int _x, int _y, int _z);
    ~BoolTest();

    void Print();
};


#endif