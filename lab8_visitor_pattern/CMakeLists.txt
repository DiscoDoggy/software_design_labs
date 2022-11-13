CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

ADD_SUBDIRECTORY(googletest)

SET(CMAKE_CXX_STANDARD 11)


ADD_EXECUTABLE(run-main
   op.cpp
   rand.cpp
   mult.cpp
   sub.cpp
   pow.cpp
   add.cpp
   div.cpp
   printLatexVisitor.cpp
   iterator.cpp
   main.cpp

)

ADD_EXECUTABLE(test
   unit_test.cpp
      op.cpp
   rand.cpp
   mult.cpp
   sub.cpp
   pow.cpp
   add.cpp
   div.cpp
   printLatexVisitor.cpp
   iterator.cpp
)

TARGET_LINK_LIBRARIES(test gtest)
TARGET_COMPILE_DEFINITIONS(test PRIVATE gtest_disable_pthreads=ON)

