main: program3 

program1:
	g++ -g program1.cpp -o program1

program2:
	g++ -g program2.cpp -o program2

program3:
	g++ -g program3.cpp -o program3

clean:
	rm program1 program2

all: program1 program2
