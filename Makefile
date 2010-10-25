main: program2 

program1:
	g++ -g program1.cpp -o program1

program2:
	g++ -g program2.cpp -o program2

clean:
	rm program1 program2

all: program1 program2
