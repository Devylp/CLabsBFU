# CMakeList.txt: проект CMake для LAB_8; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#

# Добавьте источник в исполняемый файл этого проекта.
add_executable (LAB_8 "LAB_8_t2.cpp" "LAB_8.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET LAB_8 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
