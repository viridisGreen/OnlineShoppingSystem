cmake_minimum_required(VERSION 3.21)
project(OnlineShoppingSYS)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(OnlineShoppingSYS
        admin.cpp
        admin.h
        globalFile.h
        goods.cpp
        goods.h
        guest.cpp
        guest.h
        human.h
        myalgorithm.h
        mystring.cpp
        mystring.h
        myvector.h
        OnlineShoppingSYS.cpp
        order.h)
