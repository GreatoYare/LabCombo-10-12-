#ifndef LAB_11_FILE_MANAGER_H
#define LAB_11_FILE_MANAGER_H

#include <stdlib.h>
#include <stdio.h>
#include "list11.h"

/*Get String Length*/
int getStringSize11(char *string);

/*Initialization String Field*/
char *initStringField11(char *string);

/* Read List of items from CSV file*/
void readListFromFile11(FILE *file, List *list);

/* Save List of items to CSV file*/
void saveListToFile11(FILE *file, List *list);

#endif //LAB_11_FILE_MANAGER_H
