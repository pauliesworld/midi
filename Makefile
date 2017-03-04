# Makefile,v 1.3 2004/02/02 16:52:32 ecen2120 Exp 

OBJS = midi.o lcd.o musicloop.o

# Put # in front of the next two lines if using MooseLoad

#LNKFLAGS= -M -c C:/MGC/embedded/lib/nze/cu68k.cmd

#LNKLIB = C:/MGC/embedded/lib/nze/mcc68kab.lib 

# Put # in front of the next two lines if using the XRAY Monitor

LNKFLAGS= -M -c C:/MGC/embedded/lib/nze/cu68k.cmd -F s

LNKLIB = C:/MGC/embedded/lib/nze/cut68kab.lib 

# Put # in front of the next line if using the "Command Prompt" window

RM = rm -f 

# Put # in front of the next line if using Cygwin

#RM = del 

CC = mcc68k
CFLAGS = -g
ASM = asm68k
AFLAGS = -g -L
LNKR = lnk68k 

driver: $(OBJS)
	$(LNKR) $(LNKFLAGS) -o $@ $^ $(LNKLIB)

%.o: %.src
	$(ASM) -L -o $*.o $*.src

clean:
	$(RM) *.o *.abs *.map *.obj *.lst core

midi.o: sine.c
