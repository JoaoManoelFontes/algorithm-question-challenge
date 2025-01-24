# Versão mínima do CMake necessária
cmake_minimum_required(VERSION 3.10)

# Nome do projeto
project(Question VERSION 1.0)

# Define o padrão C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Inclui o diretório de cabeçalhos (opcional)
include_directories(include)

# Define o executável principal
add_executable(Question src/main.cpp)
