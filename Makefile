LIBS=-lsfml-graphics -lsfml-window -lsfml-system
CXX := g++

all: main

%.o: %.cpp
        $(CXX) -c $< -o $@

%.o: %.hpp
        $(CXX) -c $< -o $@

main: 
        @echo "** Building the dvd theme..."
        $(CXX) -o main main.o State.o PlayState.o Object.o Player.o $(LIBS)
