set(SRCS say.main.cpp)

add_executable(say ${SRCS})
target_link_libraries(say PRIVATE hello)

if(CMAKE_PROJECT_NAME STREQUAL PROJECT_NAME)
    add_test(NAME smoke_test COMMAND say)
endif()
