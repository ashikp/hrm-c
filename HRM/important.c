#include <conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
// declare the getcod function



void getcod(short x, short y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}
