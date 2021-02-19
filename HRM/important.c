#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
// declare the getcod function



void getcod(short x, short y)
{
    COORD pos = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}

int getlocalyear(){
    SYSTEMTIME T;
    GetLocalTime(&T);
    return T.wYear;
}

char getlocalmonth(){
    char *month[12] = {"","Jan","Feb","Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    SYSTEMTIME T;
    GetLocalTime(&T);
    return month[T.wMonth];
}
