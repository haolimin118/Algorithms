# Makefile for Main

include ./Algo_Root.mk

TARGET = algo

# Algorithms
BINARY_SEARCH_PATH = $(SRC_PATH)/BinarySearch

INCLUDE += -I$(BINARY_SEARCH_PATH)

LIBS = $(LIB_BINARY_SEARCH)


SRCS = $(SRC_PATH)/Main.cpp

OBJS = $(SRCS:.cpp=.o)

$(TARGET) : $(OBJS) $(LIBS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJS) : $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $(SRC_PATH)/Main.o -c $(SRC_PATH)/Main.cpp
	
$(LIB_BINARY_SEARCH):
	@cd $(BINARY_SEARCH_PATH) && make

.PHONY : clean

clean:
	@cd $(BINARY_SEARCH_PATH) && make clean
	$(RM) $(OBJS) $(TARGET)

