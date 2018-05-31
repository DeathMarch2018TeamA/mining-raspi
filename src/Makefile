CC		= g++
CFLAGS		= -O2
OBJS		= main.o calc.o comm.o
MAIN_CPP	= main.cpp
CALC_CPP	= calc.cpp
CALC_HPP	= calc.hpp
COMM_CPP	= comm.cpp
COMM_HPP	= comm.hpp

rasp_bin:	$(OBJS)
		$(CC) $(CFLAGS) -o rasp.bin $(OBJS)

main.o:		$(MAIN_CPP) calc.o comm.o
		$(CC) $(CFLAGS) -o main.o -c $(MAIN_CPP)

calc.o:		$(CALC_CPP) $(CALC_HPP)
		$(CC) $(CFLAGS) -o calc.o -c $(CALC_CPP)

comm.o:		$(COMM_CPP) $(COMM_HPP)
		$(CC) $(CFLAGS) -o comm.o -c $(COMM_CPP)

clean:
		rm main.o calc.o comm.o rasp.bin
