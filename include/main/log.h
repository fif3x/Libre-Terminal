#ifndef LOG_H
#define LOG_H

#include <string>
#include <vector>

namespace Log{
    extern std::vector<std::string> logs;
    extern inline void log(std::string message, bool print);
}

#endif