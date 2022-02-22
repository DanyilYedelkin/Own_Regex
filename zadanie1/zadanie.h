#ifndef ZADANIE_H
#define ZADANIE_H


#define UNDEF -1
#define MAX_LEN 64
#define ACCEPT 1
#define NON_ACCEPT -1


int isAccepted(char* in_str);
void start(char c);
void end(char c);
void first_group(char first_c, char second_c);
void second_group(char c);


#endif /*ZADANIE_H*/
