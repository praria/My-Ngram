// This is a header file and contains the declaration of functions and the main function.
// The implementation of these functions will be in my_ngram.c file

// "# ifndef NGRAM_H" and "# define NGRAM_H" are preprocessor directives that check if the header file has already been included in the 
// program. If it hasn't been included, the header file is processed and its contents are made available to the rest of the program.
// "#endif" is a preprocessor directive that marks the end of the header file.

# ifndef NGRAM_H
# define NGRAM_H

void check_str(const char *str);
void num_occurrences();
int main(int argc, char *argv[]);

#endif