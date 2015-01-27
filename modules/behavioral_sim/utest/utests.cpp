#include <gtest/gtest.h>

// implemented in test_data.cpp
int pull_test_data();

// See this link for explanation:
// https://code.google.com/p/googletest/wiki/Primer#Important_note_for_Visual_C++_users
void pull_tests() {
  pull_test_data();
}

#ifdef __cplusplus
extern "C" {
#endif

int run_all_gtests(int argc, char **argv) {
  pull_tests();

  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

#ifdef __cplusplus
}
#endif
