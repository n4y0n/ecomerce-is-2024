#include "static_lib.h"
#include "spdlog/spdlog.h"

#include <iostream>

int main() {
  spdlog::info("Starting application");

  ConnectReddis();
  ConnectPostgres();

  spdlog::info("Application finished");
  return 0;
}
