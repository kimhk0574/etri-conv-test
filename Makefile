CC = g++
CFLAGS = -g -Wall -std=c++11
SRCS = $(shell find . -name "*.cpp")
PROG = ${SRCS:.cpp=.bin}

OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

$(PROG):$(SRCS)
<<<<<<< HEAD
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)
=======
	@$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)
>>>>>>> upstream/master
