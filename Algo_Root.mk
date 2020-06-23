# Algo_Root.mk : Root for make

HOME = /Users/haolimin/Github/Algorithms
SRC_PATH = $(HOME)/Src
BIN_PATH = $(HOME)/Bin
LIB_PATH = $(HOME)/Lib

INCLUDE = -I$(SRC_PATH)

# All Algorithms
LIB_BINARY_SEARCH = $(LIB_PATH)/libbs.a


CXX = clang++
# CXX = g++
AR = ar
RANLIB = ranlib

RM = rm -f

# For debug
# CXXFLAGS = -Wall -g -std=c++11 -DDEBUG -DTRACE 

# For release
# CXXFLAGS = -w -O3 -std=c++11 -DNDEBUG -DTRACE
CXXFLAGS = -w -O3 -std=c++11 -DNDEBUG
