# Makefile for Main

include ./Algo_Root.mk

TARGET = algo

# Algorithms
BINARY_SEARCH_PATH = $(SRC_PATH)/BinarySearch
SELECTION_SORT_PATH = $(SRC_PATH)/SelectionSort

INCLUDE += -I$(BINARY_SEARCH_PATH) \
		   -I$(SELECTION_SORT_PATH)

LIBS = $(LIB_BINARY_SEARCH) \
	   $(LIB_SELECTION_SORT)


SRCS = $(SRC_PATH)/Main.cpp

OBJS = $(SRCS:.cpp=.o)

$(TARGET) : $(OBJS) $(LIBS)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJS) : $(SRCS)
	$(CXX) $(CXXFLAGS) $(INCLUDE) -o $(SRC_PATH)/Main.o -c $(SRC_PATH)/Main.cpp
	
$(LIB_BINARY_SEARCH):
	@cd $(BINARY_SEARCH_PATH) && make

$(LIB_SELECTION_SORT):
	@cd $(SELECTION_SORT_PATH) && make

.PHONY : clean

clean:
	@cd $(BINARY_SEARCH_PATH) && make clean
	@cd $(SELECTION_SORT_PATH) && make clean
	$(RM) $(OBJS) $(TARGET)

