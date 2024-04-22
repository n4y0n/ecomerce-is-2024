#include "static_lib.h"
#include <spdlog/spdlog.h>
#include <pgsql.h>


void ConnectReddis() {
  spdlog::info("Connecting to Reddis");
}

void ConnectPostgres() {
  spdlog::info("Connecting to Postgres");
  Con2DB pg("127.0.0.1", "5432", "postgres", "postgres", "postgres");
}
