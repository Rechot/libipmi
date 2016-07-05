find_package (GTest REQUIRED)
set(LIBS ${LIBS} ${GTest_LIBRARIES})

enable_testing()
add_executable(tests tests.cpp)
target_link_libraries(tests gtest gtest_main)
add_test (NAME AllTests COMMAND tests)
install(TARGETS tests DESTINATION bin)
