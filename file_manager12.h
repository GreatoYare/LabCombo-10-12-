#ifndef LAB_12_FILE_MANAGER_H
#define LAB_12_FILE_MANAGER_H

#include <stdlib.h>
#include <stdio.h>
#include "list12.h"

/*Get String Length*/
int getStringSize12(char *string);

/*Initialization String Field*/
char *initStringField12(char *string);

/* Read List of items from CSV file*/
void readListFromFile12(FILE *file, List *list);

/* Save List of items to CSV file*/
void saveListToFile12(FILE *file, List *list, int q, int Max);

#endif //LAB_12_FILE_MANAGER_H
