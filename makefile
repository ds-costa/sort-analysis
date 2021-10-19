# ------
# GCC
# ------
CC := g++
CFLAGS := -Wall -Wextra -lm

# ------
# UNIX
# ------
MKDIR := mkdir
RM := rm -rf

# ------
# SOURCE
# ------
SRC := src
BIN := bin

SRCS := $(wildcard $(SRC)/*.cpp)
BINS := $(BIN)/app

# ------
# RULES
# ------
.PHONY: all clean

all: $(BIN) $(BINS)
	@echo "\nType [./bin/app <insertion | shell | merge | quick | bucket | counting> <r | a | d> <array_size>] to run.\n"
	@echo "Type ./bin/runtests to perform the tests.\n"


$(BINS): 
	$(CC) $(SRCS) main.cpp $(CFLAGS) -D_POSIX_C_SOURCE=199309L -o $@
	$(CC) $(SRCS) test.cpp $(CFLAGS) -o bin/runtests

$(BIN):
	$(MKDIR) $@

clean:
	$(RM) $(BIN)
	$(RM) bin/runtests
	@echo "\n# ====================== #\n# All done.              #\n# ====================== #"
