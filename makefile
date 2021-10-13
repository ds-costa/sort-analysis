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
	@echo "\n# ==================================== #\n# Type ./bin/runtests to perform the tests. #\n# ===================================== #"


$(BINS): $(OBJ) $(BIN) $(LIB) $(OBJS) $(LIBS)
	$(CC) $(OBJS) main.c $(CFLAGS) -D_POSIX_C_SOURCE=199309L -o $@
	$(CC) $(OBJS) test.c $(CFLAGS) -o bin/runtests

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
	$(RM) bin/runtests
	$(RM) $(OBJ)
	$(RM) $(LIB)
	@echo "\n# ====================== #\n# All done.              #\n# ====================== #"
