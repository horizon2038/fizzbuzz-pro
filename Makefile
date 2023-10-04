CXX = clang++
CXXFLAGS = -O2 -Wall
TARGET = fizzbuzz
SRCDIR = ./src
SRCS = main.cpp fizzbuzz.cpp print_writter.cpp
BUILDDIR = ./build
OBJS = $(SRCS:%.cpp=$(BUILDDIR)/%.o) 
LIBS = -lstdc++

$(warning SRCS = $(SRCS))
$(warning OBJS = $(OBJS))

.PHONY : all clean

all : $(BUILDDIR)/$(TARGET)

$(BUILDDIR)/$(TARGET) : $(OBJS)
	$(CXX) $(OBJS) $(CXXFLAGS) $(LIBS) -o $@

$(BUILDDIR)/%.o : $(SRCDIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean :
	rm -f $(BUILDDIR)/*.o $(TARGET)
