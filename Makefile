
CC = g++
CFLAGS = -std=c++11

SRCS = main.cpp simulate.cpp horse.cpp track.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = race_simulation

.PHONY: all clean run valgrind

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

run: $(EXEC)
	./$(EXEC)

valgrind: $(EXEC)
	valgrind ./$(EXEC)

