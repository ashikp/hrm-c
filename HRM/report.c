#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

void gen_reports(){
system("cls");
bannerdesign("Generate Reports");
char getfile[100], t_getfile[100];

sprintf(getfile, "data/report/reports_%s_%i.txt", getlocalmonth(), getlocalyear());
FILE * report = fopen(getfile, "aw");




}



void admin_reports_month(){
system("cls");
bannerdesign("Reports By Month");
char month[100], getfile[100];
int year;


}

void admin_reports_year(){
}
