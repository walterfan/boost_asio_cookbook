set(TinyUtil_SRCS TinyUtil.cpp TinyConfig.cpp TinyTimer.cpp  TinyServer.cpp  TinyClient.cpp)

add_library(tinyutil ${TinyUtil_SRCS})

target_link_libraries(tinyutil pthread)