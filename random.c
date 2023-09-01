#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char randchar(){
    char letters[26] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    return letters[rand() % 26];
}