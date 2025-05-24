cmake_minimum_required(VERSION 3.16)

project(hashtable-linear-probe LANGUAGES C)

add_executable(hashtable-linear-probe hashtable_main.c
    hashtable.c
    hashtable.h)

include(GNUInstallDirs)
install(TARGETS hashtable-linear-probe
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
