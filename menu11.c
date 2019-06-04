#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "list11.h"
#include "file_manager11.h"
#include "checks.h"

// For adaptive clear screen
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

WoWMounts *readItem11(WoWMounts *wowMounts)
{
    wowMounts->cost = enterInt("Write cost of mount: ");
    wowMounts->name = enterString("Write name of mount: ");
    wowMounts->quest = enterString("Write quest where you can earn mount: ");
    wowMounts->achieve = enterString("Write achievement where you can earn mount: ");
    wowMounts->drop = enterString("Write from who you can earn mount: ");
    wowMounts->chance = enterDouble("Write chance of mount drop: ");
    wowMounts->addon = enterString("Write addition where mount stand: ");
    wowMounts->where = enterString("Write location where mount stand: ");
    wowMounts->holders = enterDouble("Write percent of mount holders: ");
    wowMounts->rate = enterInt("Write your rate of mount: ");
    return wowMounts;
}

void showAbout11()
{
    system(CLEAR);
    puts("================= [About] ===================");
    puts("Title: \"Labwork 11\"");
    puts("Author: Spiridonov Leonid 8307");
    puts("=============================================");
    printf("Press anything to continue: ");
    getch();
}

void showDelete11(List *list)
{

    system(CLEAR);
    puts("================== [Delete] ====================");
    puts("At this point you can delete a mount\nfrom the library. Follow the instructions.");
    puts("=============================================");

    int id;
    printf("Enter the mount id before which you want to delete:");
    scanf("%d", &id);

    DeletePrevious11(id, list);
    puts("Item was deleted from library");
    printf("Write anything to continue: ");
    getch();
}

void showAdd11(List *list)
{
    WoWMounts *wowMounts = malloc(sizeof(WoWMounts));

    system(CLEAR);
    puts("================== [Add] ====================");
    puts("At this point you can add a new mount\nto the library. Follow the instructions.");
    puts("=============================================");

    readItem11(wowMounts);

    addToPreLast11(wowMounts, list);
    puts("Mount was added to library");
    printf("Write anything to continue: ");
    getch();
}

void showList11(List *list)
{
    system(CLEAR);
    puts("================= [List] ====================");
    display11(list);
    puts("=============================================");
    printf("Write anything to continue: ");
    getch();
}

void showMenu11(List *list)
{
    int menu = 0;
    while (menu != 4)
    {
        system(CLEAR);
        puts("================= [MENU] ===================");
        puts("0. Abouts");
        puts("1. Add new note");
        puts("2. Print list");
        puts("3. Delete previous element(It does not work very well, but it was not needed in this laboratory)");
        puts("4. Exit");
        puts("============================================");
        menu = enterInt("Write your command: ");

        if (menu == 0)
        {
            showAbout11();
        }
        else if (menu == 1)
        {
            showAdd11(list);
        }
        else if (menu == 2)
        {
            showList11(list);
        }
        else if (menu == 3)
        {
            showDelete11(list);
        }
    }
}
