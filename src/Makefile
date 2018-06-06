CC		= g++
CFLAGS		= -O2
OBJS		= main.o calc.o comm.o
MAIN_CPP	= main.cpp
CALC_CPP	= calc.cpp
CALC_HPP	= calc.hpp
COMM_CPP	= comm.cpp
COMM_HPP	= comm.hpp

TARGET		= ../bin/mining-raspi
SOURCES		= $(wildcard *.cpp)
INCLUDE		= -I ../include
OBJDIR		= ../obj
OBJECTS		= $(addprefix $(OBJDIR)/, $(SOURCES:.cpp=.o))

$(TARGET):	$(OBJECTS)
		$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o:	%.cpp
		@[ -d $(OBJDIR) ]
		$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

all: clean $(TARGET)

clean:
		rm -f $(OBJECTS) $(TARGET)
