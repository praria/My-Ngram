CC = gcc
CFLAGS += -Wall -Wextra -Werror
LINKERFLAG = -lm
SOURCES = my_ngram.c
OBJECTS = $(SOURCES: .c=.o)
TARGET = my_ngram

all : $(TARGET)

$(TARGET) : $(OBJECTS)
    $(CC) $(CFLAGS) -o $@ $^


.PHONY: clean fclean re

clean: 
    @rm -f $(TARGET)

fclean: 
    @rm $(TARGET)
    $(clean) 

re: $(fclean) 
    $(MAKE)