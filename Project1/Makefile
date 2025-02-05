COMPILER = g++
OPTIONS = -Wall
PROGRAM = isolation.out

all : $(PROGRAM)

run: $(PROGRAM)
	./$(PROGRAM)

$(PROGRAM): main.cpp Date.h Date.cpp calcDays.h calcDays.cpp
	$(COMPILER) $(OPTIONS) main.cpp Date.h Date.cpp calcDays.h calcDays.cpp -o $(PROGRAM)

clean:
	rm -f $(PROGRAM)

