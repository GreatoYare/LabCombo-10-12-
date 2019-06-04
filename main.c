#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "menu12.h"
#include "menu11.h"
#include "menu10.h"
#include "checks.h"
#include "man12.h"
#include "man11.h"
#include "man10.h"

// For adaptive clear screen
#ifdef _WIN32
#define CLEAR "cls"
#else
#define CLEAR "clear"
#endif

int main() {
    int menu = 0;
    while (menu != 3) {
        system(CLEAR);
        puts("================= [MENU] ===================");
        puts("0. Lab10");
        puts("1. Lab11");
        puts("2. Lab12");
        puts("3. Exit");
        puts("============================================");
        menu = enterInt("Write your command: ");

        if (menu == 0) {
            man10();
        } else if (menu == 1) {
            man11();
        } else if (menu == 2) {
            man12();
        }
    }
    return 0;
}
