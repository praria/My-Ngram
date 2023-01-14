# include <stdio.h>
# include <string.h>
# include "my_ngram.h"

// Macro definition and it will be used to define the size of the array "count_arr"
#define NUM_CHARS 512

int count_arr[NUM_CHARS];

// The function check_str takes a string as input and counts the number of occurrences of each character in the string
// Inside the loop, the current character str[i] is converted to ASCII by casting it to an int and is used as the index to access 
// the corresponding element in the count_arr array. The value at that element is incremented by 1 for each
// occurrences of that character in the str argument

void check_str(const char *str) {
    for(size_t i =0; i< strlen(str); i++){
        count_arr[(int)str[i]]++;
    }
}

// The function num_occurrences prints the number of occurrences of each character in the str that has been counted in count_arr array
// Inside the loop, if the value in the count_arr at current index i is grater than 0, then the corresponding character is obtained 
// by casting "i" to a char and passed as the first argument to the printf() function. The second argument is the value at that index
// in the count_arr array which represents the count of the character

void num_occurrences(){
    for (int i = 0; i < NUM_CHARS; i++) {
        if (count_arr[i] > 0) {
            printf("%c:%d\n", (char)i, count_arr[i]);
        } 
    }
}

// The main function takes command line arguments and processes them one by one. For each argument, the function "check_str" is called to count the characters and 
// then calls "num_occurrences" function to print the final counts of number of occurrences.

int main (int argc, char *argv[]) {
    for (int i = 1; i < argc; i++) {
        check_str(argv[i]);
    }
    num_occurrences();
    return 0;
}

