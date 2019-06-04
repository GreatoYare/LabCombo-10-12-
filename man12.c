#include <stdio.h>
#include "item11.h"
#include "list12.h"
#include "file_manager12.h"
#include "menu12.h"

#define FILENAME "WOWMOUNTS.csv"

int man12() {
    // Read data from file
    FILE *readFile = fopen(FILENAME, "r");
    List *list = makeList12();
    readListFromFile12(readFile, list);
    fclose(readFile);

    WoWMounts *current = list->head;
    int c = 0, z = 1;
    int q = 0, Max = 0;
    z = Max+1;
    if (z == 1)
    {
        while (current != list->head || c == 0)
        {
            c++;
            Max++;
            current = (WoWMounts *) current->next;
        }
    }

    q = showMenu12(list);

    // Save data to file
    FILE *writeFile = fopen(FILENAME, "w");
    saveListToFile12(writeFile, list, q, Max);
    destroy12(list, q, Max);
    fclose(writeFile);
    return 0;
}
