#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "list10.h"
#include "file_manager10.h"
#include "list11.h"
#include "file_manager11.h"
#include "list12.h"
#include "file_manager12.h"

int enterInt(char *message) {
    char string[1024];
    int result = 0;
    while (result != 1) {
        int i = 0;
        result = 1;
        printf(message);
        scanf("%s", &string);
        while (string[i] != '\0') {
            if(!isdigit(string[i])) {
                result = 0;
            }
            i++;
        }
    }
    return atoi(string);
}

double enterDouble(char *message) {
    char string[1024];
    int result = 0;
    while (result != 1) {
        int i = 0;
        result = 1;
        printf(message);
        scanf("%s", &string);
        while (string[i] != '\0') {
            if(!isdigit(string[i]) && string[i] != '.') {
                result = 0;
            }
            i++;
        }
    }
    return atof(string);
}

char *enterString(char *message) {
    char str[1024];
    int result = 0;
    while (result != 1) {
        int i = 0;
        result = 1;
        printf(message);
        scanf("%s", str);
        while (str[i] != '\0') {
            if(str[i] == ';') {
                result = 0;
            }
            i++;
        }
    }
    return initStringField(str);
}
