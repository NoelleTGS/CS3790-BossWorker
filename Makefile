TARGET = worker
TARGET2 = boss

all: bin/$(TARGET) bin/$(TARGET2)

bin/$(TARGET) : $(TARGET).o
	mkdir -p bin
	g++ -o bin/$(TARGET) $(TARGET).o

$(TARGET).o : $(TARGET).cpp
	g++ -c $(TARGET).cpp

bin/$(TARGET2) : $(TARGET2).o
	mkdir -p bin
	g++ -o bin/$(TARGET2) $(TARGET2).o

$(TARGET2).o : $(TARGET2).cpp
	g++ -c $(TARGET2).cpp

.PHONY: clean
clean :
	rm -f *.o
	rm bin/*