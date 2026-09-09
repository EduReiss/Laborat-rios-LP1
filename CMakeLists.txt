cmake_minimum_required(VERSION 4.3)
project(Laboratorios C)

set(CMAKE_C_STANDARD 11)

add_executable(S2_Lab1 Semana2_Part1_Lab1.c
)
add_executable(S2_Lab2 Semana2_Part1_Lab2.c)

add_executable(S2_Lab3 Semana2_Part1_Lab3.c)

add_executable(S1_Lab1 Semana1_Lab1.c
        Semana2_Part2_Lab1.c
        Semana2_Part2_Lab2.c
        Semana2_Part2_Lab3.c)
add_executable(S1_Lab2 Semana1_Lab2.c)
add_executable(S1_LabCasa Semana_1_LabCasa.c)
add_executable(S2_Part2_Lab1 Semana2_Part2_Lab1.c)
add_executable(S2_Part2_Lab2 Semana2_Part2_Lab2.c)
add_executable(S2_Part2_Lab3 Semana2_Part2_Lab3.c)
