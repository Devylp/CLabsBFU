# CMakeList.txt: проект CMake для CMakeProject1; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (CMakeProject1 "LAB_5.cpp" "CMakeProject1.h" "LAB_6.cpp" "LAB_7.cpp" "LAB_8/LAB_8.cpp" "LAB_9.cpp" "LAB_10.cpp" "LAB_6/LAB_6_t1.cpp" "LAB_6/LAB_6_t2.cpp" "LAB_6/LAB_6_t3.cpp" "LAB_6/LAB_6_t4.cpp" "LAB_6/LAB_6_t5.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProject1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
