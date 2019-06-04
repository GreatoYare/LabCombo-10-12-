#include <stdio.h>
#include "item11.h"
#include "list11.h"
#include "file_manager11.h"
#include "menu11.h"

#define FILENAME "WOWMOUNTS.csv"

int man11() {
    // Read data from file
    FILE *readFile = fopen(FILENAME, "r");
    List *list = makeList11();
    readListFromFile11(readFile, list);
    fclose(readFile);

    showMenu11(list);

    // Save data to file
    FILE *writeFile = fopen(FILENAME, "w");
    saveListToFile11(writeFile, list);
    destroy11(list);
    fclose(writeFile);
    return 0;
}
