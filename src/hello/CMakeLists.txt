set(HDRS hello.h)
set(SRCS hello.cpp)

add_library(hello ${SRCS} ${HDRS})
target_include_directories(hello INTERFACE ..)
