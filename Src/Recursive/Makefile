# Makefile for Recursive

include ../../Algo_Root.mk

TARGET = $(LIB_RECURSIVE)

SRCS = Fibonacci.cpp

OBJS = $(SRCS:.cpp=.o)

INCLUDE += -I. 

$(TARGET) : $(OBJS)
	@echo ">>> Making [$(TARGET)] ..."
	@$(AR) rv $@ $^
	@$(RANLIB) $@
	@echo ">>> ... [$(TARGET)] done"

.cpp.o:
	$(CXX) $(CXXFLAGS) $(INCLUDE) -c $<

.PHONY : clean

clean:
	$(RM) $(OBJS) $(TARGET)


