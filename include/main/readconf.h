#ifndef READCONF_H
#define READCONF_H

#include <string>

namespace config{
    extern bool is_comment(std::string str);
    extern void read_config();
}

#endif