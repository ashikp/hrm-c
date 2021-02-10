#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

struct user_entry{
    int id;
    char username[50];
    char password[50];
    char first_name[50];
    char last_name[50];
    char role[5];
}aue;

void add_user(){
    char answer[2];
    system("cls");
    bannerdesign("Add User");
    int vaild = 0 , i;

    FILE *add_user_file;
    add_user_file = fopen("data/users.txt", "a");

    getcod(20,6);
    printf("Enter ID:   ");
    scanf("%i", &aue.id);

    do{
    getcod(20,7);
    printf("Enter Username:   ");
    fflush(stdin);
    gets(aue.username);
    for(i=0; i<strlen(aue.username); ++i){
        if(isalpha(aue.username[i])){
            vaild = 1;
        }else{
            vaild = 0;
            break;
        }
    }
    if(!vaild){
        printf("\n UserName Can't have Number on it. \n");
    }
    }
    while(!vaild);


        do{
    getcod(20,8);
    printf("Enter Password:   ");
    fflush(stdin);
    gets(aue.first_name);
    for(i=0; i<strlen(aue.first_name); ++i){
        if(isalpha(aue.first_name[i])){
            vaild = 1;
        }else{
            vaild = 0;
            break;
        }
    }
    if(!vaild){
        printf("\n Password Can't have Number on it. \n");
    }
    }
    while(!vaild);


    do{
    getcod(20,9);
    printf("Enter First Name:   ");
    fflush(stdin);
    gets(aue.first_name);
    for(i=0; i<strlen(aue.first_name); ++i){
        if(isalpha(aue.first_name[i])){
            vaild = 1;
        }else{
            vaild = 0;
            break;
        }
    }
    if(!vaild){
        printf("\n First Name Can't have Number on it. \n");
    }
    }
    while(!vaild);

        do{
    getcod(20,10);
    printf("Enter Last Name:   ");
    fflush(stdin);
    gets(aue.last_name);
    for(i=0; i<strlen(aue.last_name); ++i){
        if(isalpha(aue.last_name[i])){
            vaild = 1;
        }else{
            vaild = 0;
            break;
        }
    }
    if(!vaild){
        printf("\n Last Name Can't have Number on it. \n");
    }
    }
    while(!vaild);

        do{
    getcod(20,11);
    printf("Enter ROLE (A|E|C):   ");
    fflush(stdin);
    gets(aue.role);
    for(i=0; i<strlen(aue.role); ++i){
        if(isalpha(aue.role[i])){
            vaild = 1;
        }else{
            vaild = 0;
            break;
        }
    }
    if(!vaild){
        printf("\n Role Can't have Number on it. \n");
    }
    }
    while(!vaild);

    fprintf(add_user_file,"%i %s %s %s %s %s\n\n", aue.id, aue.username, aue.password, aue.first_name, aue.last_name, aue.role);
    fclose(add_user_file);
    printf("User Add Complete\n");
    getch();
    printf("Press any key to go Back \n");
    admin_user_management();

}
void delete_user(){}
void view_user(){
system("cls");
bannerdesign("View Users");
FILE *mainfile = fopen("data/users.txt", "rb");


getcod(5,6);
printf("ID");
getcod(12,6);
printf("UserName");
getcod(26,6);
printf("First Name");
getcod(38,6);
printf("Last Name");
getcod(58,6);
printf("Role Name");
}
void update_user(){}
