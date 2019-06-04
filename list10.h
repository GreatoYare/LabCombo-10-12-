#ifndef LAB_10_LIST_H
#define LAB_10_LIST_H

#include "item11.h"
#include "list.h"

/* Init Array */
List *makeList10();

/* Create new node */
void add10(WoWMounts *mount, List *list);

/* Create new node to prelast */
void addToPreLast10(WoWMounts *mount, List *list);

/* Get node by id */
WoWMounts *get10(int id, List *list);

/* Delete note by id */
int DeletePrevious10(int id, List *list);

/* Write all list */
void display10(List *list);

/* Destroy List */
void destroy10(List *list);

#endif //LAB_10_LIST_H
