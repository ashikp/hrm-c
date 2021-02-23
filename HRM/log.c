#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

struct log{
char week[50];
char month[50];
int date;
int hour;
int mint;
int sec;
int year;
int uid;
} logs;



void read_logs(){
    system("cls");
    bannerdesign("User Login Logs");
    FILE *a_logfile = fopen("data/admin_logs.txt", "rb");
    FILE *e_logfile = fopen("data/employee_logs.txt", "rb");
    FILE *c_logfile = fopen("data/client_logs.txt", "rb");
    int post=15;
    getcod(5,6);
    printf("1. Admin Logs\n");
    getcod(5,7);
    printf("2. Employee Logs\n");
    getcod(5,8);
    printf("3. Employee Logs\n");
    int select;
    getcod(5,9);
    printf("Enter Selection: ");
    scanf("%i", &select);
    switch(select){
    case 1:
    while(fscanf(a_logfile, "%s %s %i %i:%i:%i %i\n%i\n\n", logs.week, logs.month, &logs.date, &logs.hour, &logs.mint, &logs.sec, &logs.year, &logs.uid)!=EOF){
        getcod(5,post);
        printf("Day: %s | Month: %s | Date: %i | Time: %i:%i:%i | Year: %i | User Id: %i\n", logs.week, logs.month, logs.date, logs.hour, logs.mint, logs.sec, logs.year, logs.uid);
        printf("\n");
        post++;
    }
    fclose(a_logfile);
    printf("Press any key to go Back \n");
    getch();
    Administrator_Menu();
    break;
    case 2:
    while(fscanf(e_logfile, "%s %s %i %i:%i:%i %i\n%i\n\n", logs.week, logs.month, &logs.date, &logs.hour, &logs.mint, &logs.sec, &logs.year, &logs.uid)!=EOF){
        getcod(5,post);
        printf("%s %s %i %i:%i:%i %i %i\n", logs.week, logs.month, logs.date, logs.hour, logs.mint, logs.sec, logs.year, logs.uid);
        post++;
    }
    fclose(e_logfile);
    printf("Press any key to go Back \n");
    getch();
    Administrator_Menu();
    break;
    case 3:
    while(fscanf(c_logfile, "%s %s %i %i:%i:%i %i\n%i\n\n", logs.week, logs.month, &logs.date, &logs.hour, &logs.mint, &logs.sec, &logs.year, &logs.uid)!=EOF){
        getcod(5,post);
        printf("%s %s %i %i:%i:%i %i %i\n", logs.week, logs.month, logs.date, logs.hour, logs.mint, logs.sec, logs.year, logs.uid);
        post++;
    }
    fclose(c_logfile);
    printf("Press any key to go Back \n");
    getch();
    Administrator_Menu();
    break;
    default:
    printf("Press any key to go Back \n");
    getch();
    }

}
