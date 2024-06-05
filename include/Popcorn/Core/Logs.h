#pragma once

#include "Global_Macros.h"
#include <fstream>
#include <iostream>

ENGINE_NAMESPACE_BEGIN
static void write_log(const char *msg) {
  std::cout << msg << std::endl;
  std::ofstream logs;
  logs.open("common_logs.txt", std::ofstream::app | std::ofstream::out);
  logs << msg << "\n";
  logs.close();
}
ENGINE_NAMESPACE_END
