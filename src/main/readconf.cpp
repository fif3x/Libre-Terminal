#include <fstream>
#include <string>
#include <cstdint>
#include <vector>
#include <iostream>
#include <filesystem>

#include "../../include/main/readconf.h"
#include "../../include/main/vars.h"
#include "../../include/main/os.h"
#include "../../include/main/log.h"
#include "../../include/main/configvars.h"

namespace fs = std::filesystem;

bool readconf::is_comment(std::string str)
{
    if (str.find(";") != std::string::npos) // does not have the comment line
    {
        return false;
    }
    else
    {
        return true;
    }
}

void readconf::read_config()
{
    os OS;
    OS = detect_os();

    fs::path path = { };

    error_code = 0;
    status_code = 0;

    if (minimum)
    {
        return;
    }

    if (OS == lnx)
    {
        path = fs::path(std::getenv("HOME")) / ".config/libreterminal/config.conf";
    }
    else if (OS == win)
    {
        path = fs::path("C:\\LibreTerminal\\config.conf");
    }
    else
    {
        Log::log("ERROR 005 - CANNOT CONTINUE", true);
        error_code = 5;
        status_code = 1;
        exit(error_code);
    }

    std::fstream config_f(path);

    std::string text;
    
    if (fs::exists(path))
    {

        if (close_conf_before_reading)
        {
            config_f.close();
        }

        if (config_f.is_open())
        {
            error_code = 4;
            status_code = 1;
            Log::log("ERROR 004 - CANNOT CONTINUE\n", true);
            exit(error_code);
        }

        while (std::getline(config_f, text))
        {
            if (is_comment(text)){
                
            } else {
                std::cout << "test";
            }
        }

        config_f.close();
    }
    else
    {
        error_code = 3;
        status_code = 1;
        Log::log("ERROR 003 - CANNOT CONTINUE", true);
        exit(error_code);
    }
}
