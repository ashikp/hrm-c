#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
void welcome(){
// Making Banner
    getcod(25,6);
    printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    getcod(25,7);
    printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    getcod(25,8);
    printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    getcod(25,9);
    printf("        =                 WELCOME                   =");
    getcod(25,10);
    printf("        =                   TO                      =");
    getcod(25,11);
    printf("        =                 HUMAN                     =");
    getcod(25,12);
    printf("        =               RESOURCE                    =");
    getcod(25,13);
    printf("        =                 MANAGEMENT                =");
    getcod(25,14);
    printf("        =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=");
    getcod(25,15);
    printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    getcod(25,16);
    printf("  **-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**-**");
    getcod(28,22);
    printf(" Enter any key to continue.....");
    getch();

}

void bannerdesign(char title[]){

    printf("\n------------------------------------------------------------------------------------------------");
    getcod(20,2);
    printf("%s", title);
    printf("\n------------------------------------------------------------------------------------------------");
}

void endline(){
printf("\n------------------------------------------------------------------------------------------------\n");
}
