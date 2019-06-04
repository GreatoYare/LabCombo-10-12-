#ifndef LAB_10_FILE_MANAGER_H
#define LAB_10_FILE_MANAGER_H

#include <stdlib.h>
#include <stdio.h>
#include "list10.h"

/*Get String Length*/
int getStringSize10(char *string);

/*Initialization String Field*/
char *initStringField10(char *string);

/* Read List of items from CSV file*/
void readListFromFile10(FILE *file, List *list);

/* Save List of items to CSV file*/
void saveListToFile10(FILE *file, List *list);

#endif //LAB_10_FILE_MANAGER_H
