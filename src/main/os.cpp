#include <iostream>
#include "../../include/main/os.h"


void print_os()
{
    os OS = detect_os();

    if (OS == os::WIN)
    {
        std::cout << "WIN>";
    }
    else if (OS == os::LINUX)
    {
        std::cout << "LNX>";
    }
    else
    {
        std::cout << "UNK>";
    }
}