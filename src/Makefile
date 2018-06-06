CC		= g++
CFLAGS		= -O2
BINDIR		= ../bin
TARGET		= $(BINDIR)/mining-raspi
SOURCES		= $(wildcard *.cpp)
INCLUDE		= -I ../include
OBJDIR		= ../obj
OBJECTS		= $(addprefix $(OBJDIR)/, $(SOURCES:.cpp=.o))

all:
		mkdir $(BINDIR) $(OBJDIR)
		make $(TARGET)

$(TARGET):	$(OBJECTS)
		$(CC) $(CFLAGS) -o $@ $^

$(OBJDIR)/%.o:	%.cpp
		@[ -d $(OBJDIR) ]
		$(CC) $(CFLAGS) $(INCLUDE) -o $@ -c $<

clean:
		rm -rf $(OBJDIR) $(BINDIR)
