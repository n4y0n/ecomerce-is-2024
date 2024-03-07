#include "test_lib.h"

#include <iostream>
#include <sstream>
#include <static_lib.h>

bool hasEnding(std::string const& fullString, std::string const& ending) {
  if (fullString.length() >= ending.length()) {
    return (0 == fullString.compare(fullString.length() - ending.length(), ending.length(), ending));
  } else {
    return false;
  }
}

TEST_CASE("first test case") {
  std::ostringstream oss;
  std::streambuf* p_cout_streambuf = std::cout.rdbuf();
  std::cout.rdbuf(oss.rdbuf());

  static_lib_p();

  std::cout.rdbuf(p_cout_streambuf);  // restore
  auto out = oss.str();
  CHECK(hasEnding(out, "static_lib_p"));
}

// TEST_CASE("sencod test case") {
// }