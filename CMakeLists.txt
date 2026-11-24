cmake_minimum_required(VERSION 3.15)
project(cpp_pra CXX)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pro1
    main.cpp
    01_pointer_array/arr_pp_demo.cpp
    01_pointer_array/ptr_for_arr.cpp
    02_linear_list/sequential_list/Dynamic_arr.cpp
    02_linear_list/linked_list/List.cpp
    03_stack_queue/Stack.cpp
    03_stack_queue/Queue.cpp
)

target_include_directories(pro1 PRIVATE
    01_pointer_array
    02_linear_list/sequential_list
    02_linear_list/linked_list
    03_stack_queue
)

if (MSVC)
    target_compile_options(pro1 PRIVATE /EHsc)
endif ()

enable_testing()
add_test(NAME run_pro1 COMMAND $<TARGET_FILE:pro1>)
