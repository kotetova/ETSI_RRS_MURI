cmake_minimum_required(VERSION 3.10)
project(ETSI_RRS_MURI)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(ETSI_RRS_MURI CMakeLists.txt ETSI_RRS_MURI.cpp ETSI_RRS_MURI.h ETSI_RRS_MURI_AccessControlServices.cpp ETSI_RRS_MURI_AccessControlServices.h ETSI_RRS_MURI_AdministrativeServices.cpp ETSI_RRS_MURI_AdministrativeServices.h ETSI_RRS_RadioComputer.cpp ETSI_RRS_RadioComputer.h main.cpp AppTemplate.cpp)
