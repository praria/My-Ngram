# Welcome to My Ngram
***

## Task
To write a program my_ngram that counts the number of occurrences per character. We need to create three files: Makefile, my_ngram.h
and my_ngram.c

## Description
In computational linguistics and probability, an n-gram is a contiguous sequence of n items from a given sample of text or speech.
The items can be phonemes, syllables, letters, words or base pairs according to the application. 
The n-grams typically are collected from a text or speech corpus. When the items are words, n-grams may also be called shingles.

Google Inc. has used this technique to improve the completion of its Search Engine. 
The program was developed by Jon Orwant and Will Brockman and released in mid-December 2010.



## Installation
Technical information:
1. We create a Makefile, and the output is the command itself
2. We can use: printf() and write()
3. We can not use: 
    Any functions/syscalls which does not appear in the previous list
    Yes, it includes exit
    Multiline macros are forbidden
    Include another .c is forbidden
    Macros with logic (while/if/variables/...) are forbidden

Requirements:
Code must be compiled with the flags -Wall -Wextra -Werror.
Makefile must have a clean & fclean rules.

Example of some rules for Makefiles:
all : $(TARGET)

$(TARGET) : $(OBJ)
	gcc $(CFLAGS) -o $(TARGET) $(OBJ) 

$(OBJ) : $(SRC)
	gcc $(CFLAGS) -c $(SRC)

clean:
	rm -f *.o

fclean: clean
	rm -f $(TARGET)

re: fclean all


## Usage
My Ngram will take 1 or multiple strings as arguments.
It will display, one per line, each character and the numbers of times it appears. Order will be alphanumerical.

Example 00
$>./my_ngram "abcdef"
a:1
b:1
c:1
d:1
e:1
f:1
$>

Example 01
$>./my_ngram "        "
 :8
$>

Example 02
$>./my_ngram "aaabb" "abc"
a:4
b:3
c:1
$>


### The Core Team

1. Prakash Shrestha 
2. Mukhen Rawling

<span><i>Made at <a href='https://qwasar.io'>Qwasar SV -- Software Engineering School</a></i></span>
<span><img alt='Qwasar SV -- Software Engineering School's Logo' src='https://storage.googleapis.com/qwasar-public/qwasar-logo_50x50.png' width='20px'></span>
