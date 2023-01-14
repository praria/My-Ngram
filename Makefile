# Makefiles are typically used to build and manage large, multi-file projects
# The make command reads the Makefile and runs the commands specified in the Makefile.

# the C compiler gcc is set to the variable CC

CC = gcc

# The values "-Wall -Wextra -Werror" are set to variable "CFLAGS" which are optons passed to the compiler 
# to enable all warning messages, extra warning messages, and treat warnings as errors

CFLAGS = -Wall -Wextra -Werror


# The default target "all: my_ngram" is build when the "make" command is run without any arguments

all: my_ngram

# The following first command specifies that the target "my_ngram" depends on the file "my_ngram.c"
# The next command runs the C compiler, by passing the variables "CC" and "CFLAGS" as options

my_ngram: my_ngram.c
	$(CC) $(CFLAGS) -o my_ngram my_ngram.c

# The "clean" and "fclean" targets clean up the project by removing files that are generated during the build process
# The command "make clean" removes the file "my_ngram" and the command "make fclean" removes the file "my_ngram" and "my_ngram.o"

clean:
	rm -f my_ngram

fclean: clean
	rm -f ngram.o
