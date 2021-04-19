# g++ -c -g -Wall ../Util.cpp -I../

# g++ -c -g -Wall ParseFileTestCases.cpp 
 
# g++ -g -Wall Util.o ParseFileTestCases.o -lgtest -lgtest_main -pthread -o ParseFileTestCases


all: main.exe

main.exe: main.o util.o
	g++ -o main.exe main.o util.o

main.o: main.cpp
	g++ -g -c main.cpp

util.o: util.cpp util.h
	g++ -g -c util.cpp

clean:
	rm main.exe main.o util.o