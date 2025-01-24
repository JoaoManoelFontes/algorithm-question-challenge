#!/bin/bash

# Definir o nome do projeto e o diretório de build
PROJECT_NAME="Question"
BUILD_DIR="build"

# Criar o diretório de build (se não existir)
if [ ! -d "$BUILD_DIR" ]; then
    echo "Criando o diretório de build..."
    mkdir $BUILD_DIR
fi

# Navegar para o diretório de build
cd $BUILD_DIR

# Configurar o projeto com o CMake
echo "Configurando o projeto com CMake..."
cmake ..

# Compilar o projeto com make
echo "Compilando o projeto..."
make

# Verificar se o binário foi gerado
if [ -f "$PROJECT_NAME" ]; then
    echo "Execução do projeto $PROJECT_NAME..."
    ./$PROJECT_NAME
else
    echo "Erro: o executável $PROJECT_NAME não foi encontrado."
fi
