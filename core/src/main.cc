#include "static_lib.h"
#include "spdlog/spdlog.h"

#include <iostream>

int main() {
  static_lib_p();
  spdlog::info("hello spd log");
  return 0;
}
