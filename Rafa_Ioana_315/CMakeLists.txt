cmake_minimum_required(VERSION 3.21)
project(PROIECT_SD)

set(CMAKE_CXX_STANDARD 14)

add_executable(PROIECT_SD main.cpp Domain/Multime.cpp Domain/Multime.h Domain/Node.h Domain/Tree.h Repository/RepositoryPrieteni.h Service/ServicePrieteni.cpp Service/ServicePrieteni.h Domain/Prieteni.cpp Domain/Prieteni.h Domain/Mesaje.cpp Domain/Mesaje.h Repository/RepositoryMesaje.h Service/ServiceMesaje.cpp Service/ServiceMesaje.h)
