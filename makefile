# ------
# GCC
# ------
CC := gcc
CFLAGS := -std=c99 -Wall -Wextra -lm

# ------
# UNIX
# ------
MKDIR := mkdir
RM := rm -rf

# ------
# SOURCE
# ------
SRC := src
OBJ := obj
BIN := bin
LIB := lib
TEST := test

SRCS := $(wildcard $(SRC)/*.c)
OBJS := $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))
LIBS := $(patsubst $(SRC)/%.c, $(LIB)/$(LIB)%.a, $(SRCS))
BINS := $(BIN)/app

# ------
# RULES
# ------
.PHONY: all clean

all: $(BINS)
	@echo "\n# ====================== #\n# Type ./bin/app to run. #\n# ====================== #\n"
	@echo "\n# ==================================== #\n# Type ./tests/runtests to perform the tests. #\n# ===================================== #"


$(BINS): $(OBJ) $(BIN) $(LIB) $(OBJS) $(LIBS)
	$(CC) $(OBJS) main.c $(CFLAGS) -o $@
	$(CC) $(OBJS) tests/test.c $(CFLAGS) -o tests/runtests

$(OBJ):
	$(MKDIR) $@

$(BIN):
	$(MKDIR) $@

$(LIB):
	$(MKDIR) $@

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $^ $(CFLAGS) -c -o $@

$(LIB)/$(LIB)%.a: $(OBJ)/%.o
	ar rcs $@ $^

clean:
	$(RM) $(BIN)
	$(RM) tests/runtests
	$(RM) $(OBJ)
	$(RM) $(LIB)
	@echo "\n# ====================== #\n# All done.              #\n# ====================== #"
