// Nand2Tetris

#include <iostream>
#include <string>
#include "DHL/bool.h"
#include "DHL/Cxx.h"
#include "DHL/Boolean.h"
#include "spdlog/spdlog.h"


// declare
class BoolTest;
// static bool DHL::Boolean::_xor_(ushort, ushort); // Wrong: static function not allow called in foriegner.

int main(int argc, char* argv[])
{
    const BoolTest test1 {1, 0, 1};
    const BoolTest test2 (0, 1, 0);
    std::cout << "exit main" << std::endl;

    Cxx test3 {0, 1, nullptr};
    Cxx* pTest3 = new Cxx (1, 1, nullptr);
    pTest3->MoveNext().MoveNext();
    delete pTest3;
    pTest3 = nullptr;

    // boolean
    DHL::Boolean::ushort t1, t2;
    t1 = 1000;
    t2 = 2000;

    // DHL::Boolean boolean; // error default constructor is delete.
    auto result = DHL::Boolean::_xor_(t1, t2);
    std::cout << "Boolean xor" << " t1=" << t1 << " t2=" << t2 << " result=" << result << std::endl;

    DHL::Boolean::static_test();
    DHL::Boolean::static_test();
    DHL::Boolean::static_test();
    int result_test = DHL::Boolean::static_test();
    std::cout << "Boolean static_test" << " variable=" << result_test << std::endl;

    // spdlog include
    std::string hello = "Hello spdlog!";
    //spdlog::info(hello, "Hello World!");
    //spdlog::create<daily_file_sink_st>("test", "spdlog_log", 11, 59);
    SPDLOG_INFO(hello);

    return 0;
}