#include "stdlib.h"
#include "stdio.h"
#include "list12.h"
#include "item11.h"

List *makeList12() {
    List *list = malloc(sizeof(List));
    if (!list) {
        return NULL;
    }
    list->head = NULL;
    list->size = 0;
    return list;
}

void add12(WoWMounts *mount, List *list) {
    WoWMounts *current = NULL;
    mount->next = NULL;
    mount->id = 0;

    if (list->head == NULL) {
        list->head = mount;
        mount->next = (struct WoWMounts *) list->head;
    } else {
        mount->next = (struct WoWMounts *) list->head;
        mount->id++;
        current = list->head;
        while (current->next != (struct WoWMounts *) list->head) {
            mount->id++;
            current = (WoWMounts *) current->next;
        }
                current->next = (struct WoWMounts *) mount;
    }
}

WoWMounts *get12(int id, List *list) {
    WoWMounts *current = list->head;
    int c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (current->id == id) {
            return current;
        }
        current = (WoWMounts *) current->next;
    }
    return NULL;
}

int Delete12(int id, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (current->id == id) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }

        return k;
}

int DeleteByCost12(int cost, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (current->cost == cost) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }
        return k;
}

int DeleteByName12(char *name, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (strcmp(current->name, name) == 0) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }
        return k;
}

int DeleteByQuest12(char *quest, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (strcmp(current->quest, quest) == 0){
            previous->next = current->next;
            if (current == list->head)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }
        return k;
}

int DeleteByAchieve12(char *achieve, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (strcmp(current->achieve, achieve) == 0) {
            previous->next = current->next;
            if (strcmp(current->achieve, achieve) == 0)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }
        return k;
}


int DeleteByCharacter12(char *character, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (strcmp(current->drop, character) == 0) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }
        return k;
}


int DeleteByChance12(double chance, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (current->chance == chance) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }
        return k;
}

int DeleteByAddon12(char *addon, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (strcmp(current->addon, addon) == 0) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }
        return k;
}

int DeleteByLocation12(char *location, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (strcmp(current->where, location) == 0) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }
        return k;
}

int DeleteByHolders12(double holders, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (current->holders == holders) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }
        return k;
}

int DeleteByRate12(int rate, List *list) {
    WoWMounts *current = list->head;
    WoWMounts *previous = current;
    int k = 0, c = 0;
    while (current != list->head || c == 0) {
        c++;
        if (current->rate == rate) {
            previous->next = current->next;
            if (current == list->head)
                list->head = (WoWMounts *) current->next;
            free(current);
             k++;
            }
        previous = current;
        current = (WoWMounts *) current->next;
    }
        return k;
}

void display12(List *list, int q, int Max) {
    WoWMounts *current = list->head;
    if (current == NULL) {
        printf("List is empty\n");
        return;
    }

    int c = 0;
    while ((current != list->head || c == 0) && c != Max-q) {
            c++;
        printf("Id: %d\nCost: %d\nName: %s\nQuest: %s\nAchievement: %s\nCharacter: %s\nDrop chance: %lf\nAddition: %s\nLocation: %s\nPercent of holders: %lf\nSubjective rate: %d\n\n",
               current->id,current->cost, current->name, current->quest, current->achieve, current->drop, current->chance, current->addon, current->where, current->holders, current->rate);
        current = (WoWMounts *) current->next;
    }
}

void destroy12(List *list, int q, int Max) {
    WoWMounts *current = list->head;
    WoWMounts *next = current;
    int c = 0;
    while ((current != list->head || c == 0) && c!=Max-q) {
        c++;
        next = (WoWMounts *) current->next;
        free(current);
        current = next;
    }
    free(list);
}
