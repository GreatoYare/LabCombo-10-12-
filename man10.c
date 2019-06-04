#include <stdio.h>
#include "item11.h"
#include "list10.h"
#include "file_manager10.h"
#include "menu10.h"

#define FILENAME "WOWMOUNTS.csv"

int man10() {
    // Read data from file
    FILE *readFile = fopen(FILENAME, "r");
    List *list = makeList10();
    readListFromFile10(readFile, list);
    fclose(readFile);

    showMenu10(list);

    // Save data to file
    FILE *writeFile = fopen(FILENAME, "w");
    saveListToFile10(writeFile, list);
    destroy10(list);
    fclose(writeFile);
    return 0;
}
