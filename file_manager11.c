#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "list11.h"

int getStringSize11(char *string) {
    int i = 0;
    while (string[i] != '\0') {
        i++;
    }
    return i + 1;
}

char *initStringField11(char *string) {
    int len = getStringSize11(string);
    char *str = (char *) malloc(len * sizeof(char));

    strcpy(str, string);
    return str;
}

void readListFromFile11(FILE *file, List *list) {
    if (file != NULL) {
        char scanner[1024];
        while (fgets(scanner, 1024, file)) {
            WoWMounts *mount = malloc(sizeof(WoWMounts));
            int count = 0;
            char *words = strtok(scanner, ";");
            while (words != NULL) {
                if(count == 0) {
                    mount->cost = atoi(words);
                }
                else if(count == 1) {
                    mount->name = initStringField11(words);
                }
                else if(count == 2) {
                    mount->quest = initStringField11(words);
                }
                else if(count == 3) {
                    mount->achieve = initStringField11(words);
                }
                else if(count == 4) {
                    mount->drop = initStringField11(words);
                }
                else if(count == 5) {
                    mount->chance = atof(words);
                }
                else if(count == 6) {
                    mount->addon = initStringField11(words);
                }
                else if(count == 7) {
                    mount->where = initStringField11(words);
                }
                else if(count == 8) {
                    mount->holders = atof(words);
                }
                else if(count == 9) {
                    mount->rate = atoi(words);
                }
                count++;
                words = strtok(NULL, ";,");
            }

            add11(mount, list);
        }
    }
}

void saveListToFile11(FILE *file, List *list) {
    WoWMounts *current = list->head;
    if (current == NULL)
        return;

    while (current != NULL) {
        fprintf(file, "%d;%s;%s;%s;%s;%lf;%s;%s;%lf;%d\n", current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        current = (WoWMounts *) current->next;
    }
}
