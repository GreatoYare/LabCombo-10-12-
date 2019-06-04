#ifndef LAB_11_LIST_H
#define LAB_11_LIST_H

#include "item11.h"
#include "list.h"

/* Init Array */
List *makeList12();

/* Create new node */
void add12(WoWMounts *mount, List *list);

/* Create new node to prelast */
void addToPreLast12(WoWMounts *mount, List *list);

/* Get node by id */
WoWMounts *get12(int id, List *list);

/* Delete note by id */
int DeletePrevious12(int id, List *list);

/* Write all list */
void display12(List *list, int q, int Max);

/* Destroy List */
void destroy12(List *list, int q, int Max);

#endif //LAB_11_LIST_H
