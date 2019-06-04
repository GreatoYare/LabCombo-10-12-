#ifndef LAB_11_LIST_H
#define LAB_11_LIST_H

#include "item11.h"
#include "list.h"

/* Init Array */
List *makeList11();

/* Create new node */
void add11(WoWMounts *mount, List *list);

/* Create new node to prelast */
void addToPreLast11(WoWMounts *mount, List *list);

/* Get node by id */
WoWMounts *get11(int id, List *list);

/* Delete note by id */
int DeletePrevious11(int id, List *list);

/* Write all list */
void display11(List *list);

/* Destroy List */
void destroy11(List *list);

#endif //LAB_11_LIST_H
