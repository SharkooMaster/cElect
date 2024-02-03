cmake_minimum_required(VERSION 3.12)
project(cElect VERSION 0.1.0)

#add_library(
#	cElect
#	./src/*
#)

add_executable(run ./src/main.c)

#target_link_libraries(run PRIVATE cElect)