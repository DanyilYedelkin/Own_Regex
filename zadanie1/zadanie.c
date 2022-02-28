#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "zadanie.h"

#define UNDEF -1
#define MAX_LEN 64
#define ACCEPT 1
#define NON_ACCEPT -1

int state = 0;


void start(char c) {
    if (c == 'a') {
        state = 1;
    } else if (c == 'b') {
        state = 2;
    } else {
        state = UNDEF;
    }
}

void q1(char c) {
    if (c == 'b') {
        state = 2;
    } else {
        state = UNDEF;
    }
}

void q2(char c) {
    if (c == 'a') {
        state = 3;
    } else {
        state = UNDEF;
    }
}

void q3(char c) {
    if (c == 'a' || c == 'b') {
        state = 3;
    } else {
        state = UNDEF;
    }
}



int isAccepted(char *in_str) {
    int i;
    int len = strlen(in_str);
    state = 0;

    
    for (i = 0; i < len; i++) {
        if (state == 0) {
            start(in_str[i]);
        } else if (state == 1) {
            q1(in_str[i]);
        } else if (state == 2) {
            q2(in_str[i]);
        } else if (state == 3) {
            q3(in_str[i]);
        }
    }
    
    if (state == 3) {
        return ACCEPT;
    } else {
        return NON_ACCEPT;
    }
}
