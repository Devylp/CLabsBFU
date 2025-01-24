cmake_minimum_required(VERSION 3.8) # Или более новая, если нужно
project(CLabsBFU) # Имя всего проекта

# Включаем каждую лабораторную работу как отдельную цель (исполняемый файл)
add_executable(LAB_1_executable LAB_1/LAB_1.cpp)
target_include_directories(LAB_1_executable PRIVATE LAB_1)

add_executable(LAB_2_executable LAB_2/LAB_2.cpp)
target_include_directories(LAB_2_executable PRIVATE LAB_2)

add_executable(LAB_3_executable LAB_3/LAB_3.cpp)
target_include_directories(LAB_3_executable PRIVATE LAB_3)

add_executable(LAB_4_executable LAB_4/LAB_4.cpp)
target_include_directories(LAB_4_executable PRIVATE LAB_4)

add_executable(LAB_5_executable LAB_5/LAB_5.cpp)
target_include_directories(LAB_5_executable PRIVATE LAB_5)

add_executable(LAB_6_executable LAB_6/LAB_6_t1.cpp LAB_6/LAB_6_t2.cpp LAB_6/LAB_6_t3.cpp LAB_6/LAB_6_t4.cpp LAB_6/LAB_6_t5.cpp)
target_include_directories(LAB_6_executable PRIVATE LAB_6)

add_executable(LAB_7_executable LAB_7/LAB_7.cpp)
target_include_directories(LAB_7_executable PRIVATE LAB_7)

add_executable(LAB_8_executable LAB_8/LAB_8_t2.cpp)
target_include_directories(LAB_8_executable PRIVATE LAB_8)

add_executable(LAB_9_executable LAB_9/LAB_9.cpp)
target_include_directories(LAB_9_executable PRIVATE LAB_9)

if (CMAKE_VERSION VERSION_GREATER 3.31.4)
  set_property(TARGET LAB_1_executable LAB_2_executable LAB_3_executable LAB_4_executable LAB_5_executable LAB_6_executable LAB_7_executable LAB_8_executable LAB_9_executable LAB_10_executable PROPERTY CXX_STANDARD 20) # Применяем стандарт C++20 ко всем целям
endif()