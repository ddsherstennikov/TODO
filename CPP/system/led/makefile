BIN_DIR=./bin/
TARGET = ivi_server

.PHONY: all clean

all: $(TARGET)

$(TARGET): protocol.o led.o main.o
	g++ -std=c++11 protocol.o led.o main.o -o $(TARGET) 
	
main.o: main.cpp protocol.h led.h
	g++ -std=c++11 -c main.cpp

led.o: led.cpp led.h protocol.h
	g++ -std=c++11 -c led.cpp
    
protocol.o: protocol.cpp protocol.h
	g++ -std=c++11 -c protocol.cpp
	
clean:
	rm -f *.o;
	rm -f $(TARGET)