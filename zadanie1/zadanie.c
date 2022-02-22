#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include "zadanie.h"

#define UNDEF -1
#define MAX_LEN 64
#define ACCEPT 1
#define NON_ACCEPT -1

int state = 0;
bool is_firstly = true;


void start(char c) {
    if (c == 'a') {
        state = 1;
    } else if(c == 'b') {
        state = 2;
    } else {
        state = UNDEF;
    }
}

void end(char c) {
    if (c == 'b') {
        state = 2;
    } else if (c == 'a') {
        state = 1;
    } else {
        state = UNDEF;
    }
}

void first_group(char first_c, char second_c) {
    if((first_c == 'b') && (second_c == 'a')) {
        state = 1;
    } else {
        state = UNDEF;
    }
    is_firstly = false;
}

void second_group(char c) {
    if(c == 'a') {
        state = 2;
    } else {
        state = UNDEF;
    }
    is_firstly = false;
}

int isAccepted(char *in_str) {
    int i;
    int len = strlen(in_str);
    state = 0;
    is_firstly = true;
    
    if (len == 1) return NON_ACCEPT;
    
    for (i = 0; i < len; i++) {
        if (state == 0) 
        {
            start(in_str[i]);
        } 
        else if (state == 1) 
        {
            if(is_firstly) 
            {
                first_group(in_str[i], in_str[i + 1]);
                i += 1;
                continue;
            }
            end(in_str[i]);
        } 
        else if (state == 2) 
        {
            if(is_firstly)
            {
                second_group(in_str[i]);
                continue;
            }

            end(in_str[i]);
        }
    }
    
    if (state > 0) {
        return ACCEPT;
    } else {
        return NON_ACCEPT;
    }
}
