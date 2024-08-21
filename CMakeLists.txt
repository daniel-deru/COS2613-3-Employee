cmake_minimum_required(VERSION 3.14)

project(Employee LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core)

add_executable(Employee
  main.cpp
  Employee.h
  Payment.h
  Salary.h
  Hourly.h
  Commission.h
  Commission.cpp
  Employee.cpp
  Hourly.cpp
  Payment.cpp
  Salary.cpp
  EmployeeList.cpp
  EmployeeList.h
)
target_link_libraries(Employee Qt${QT_VERSION_MAJOR}::Core)

include(GNUInstallDirs)
install(TARGETS Employee
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
