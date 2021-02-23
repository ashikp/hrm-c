#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
// declare the getcod function
struct Time{
  int seconds;
  int minutes;
  int hours;
};

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

int getlocalmonth(){
    char *month[12] = {"","Jan","Feb","Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    SYSTEMTIME T;
    GetLocalTime(&T);
    return month[T.wMonth];
}


char getlocalctime(){
    time_t c_time;
    char* c_t_s;

    c_time = time(NULL);
    if(c_time == ((time_t)-1)){
        return "Failed to Get Time";
    }
    c_t_s = ctime(&c_time);
    if(c_t_s == NULL){
        return "Failed to Obtain time";
    }
    return c_t_s;
}



void timecount(struct Time start, struct Time stop, struct Time *diff)
{
    if(stop.seconds > start.seconds){
        --start.minutes;
        start.seconds += 60;
    }

    diff->seconds = start.seconds - stop.seconds;
    if(stop.minutes > start.minutes){
        --start.hours;
        start.minutes += 60;
    }

    diff->minutes = start.minutes - stop.minutes;
    diff->hours = start.hours - stop.hours;
}
