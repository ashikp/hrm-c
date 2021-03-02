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
    int callbackid;

    FILE *add_user_file;
    add_user_file = fopen("data/users.txt", "aw");
    FILE *readfile = fopen("data/users.txt", "rb");

    while(fscanf(readfile, "%i %s %s %s %s %s\n\n", &aue.id, aue.username, aue.password, aue.first_name, aue.last_name, aue.role)!=EOF){
        if(aue.id==""){
            callbackid = 0;
        }
        callbackid = aue.id;
    }

    getcod(20,6);
    callbackid++;

    do{
    getcod(20,7);
    printf("Enter Username:   ");
    fflush(stdin);
    scanf("%s", aue.username);
    break;
    }
    while(!vaild);


        do{
    getcod(20,8);
    printf("Enter Password:   ");
    fflush(stdin);
    scanf("%s", aue.password);
    break;
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

    fprintf(add_user_file,"%i %s %s %s %s %s\n\n", callbackid, aue.username, aue.password, aue.first_name, aue.last_name, aue.role);
    fclose(add_user_file);
    fclose(readfile);
    printf("User Add Complete\n");
    getch();
    printf("Press any key to go Back \n");
    admin_user_menu();

}
void delete_user(){
    system("cls");
    bannerdesign("Delete User");
    FILE *mainfile = fopen("data/users.txt", "rb+");
    FILE *tempfile = fopen("data/u_temp.txt", "w+");
    int id, found;

    getcod(5,6);
    printf("Enter Id: ");
    scanf("%i", &id);

    while(fscanf(mainfile, "%i %s %s %s %s %s\n\n", &aue.id, aue.username, aue.password, aue.first_name, aue.last_name, aue.role)!=EOF){
        if(id!=aue.id){
            fprintf(tempfile, "%i %s %s %s %s %s\n\n", aue.id, aue.username, aue.password, aue.first_name, aue.last_name, aue.role);
        }else{
            found = 1;
        }
    }
    if(!found){
        printf("Record Not Found \n");
    }else{
        printf("Record Updated \n");
    }
    fclose(mainfile);
    fclose(tempfile);
    remove("data//users.txt");
    rename("data//u_temp.txt", "data//users.txt");
    printf("Press any key to go Back \n");
    getch();
    admin_user_menu();

}
void view_user(){
    system("cls");
    bannerdesign("View Users");
    FILE *mainfile = fopen("data/users.txt", "r");
    int i, post = 8;


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
    getcod(0,7);
    for(i=0; i<95; i++){
        printf("-");
    }
    while(fscanf(mainfile, "%i %s %s %s %s %s\n\n", &aue.id, aue.username, aue.password, aue.first_name, aue.last_name, aue.role)!=EOF){
        getcod(5,post);
        printf("%i", aue.id);
        getcod(12,post);
        printf("%s", aue.username);
        getcod(26,post);
        printf("%s", aue.first_name);
        getcod(38,post);
        printf("%s", aue.last_name);
        getcod(58,post);
        printf("%s", aue.role);
        post++;
    }
    printf("\n");
    for(i=0; i<95; i++){
        printf("-");
    }
    printf("\n");
    fclose(mainfile);
    printf("Press any key to go Back \n");
    getch();
    admin_user_menu();
}
void update_user(){
    system("cls");
    bannerdesign("Update User Details");
    FILE *mainfile = fopen("data/users.txt", "rb+");
    FILE *tempfile = fopen("data/u_temp.txt", "wa+");
    int found = 0, id, vaild=0,i,mount;
    char update[100];
    getcod(20,6);
    printf("Enter the User ID: ");
    scanf("%i", &id);
    while(fscanf(mainfile, "%i %s %s %s %s %s\n\n", &aue.id, aue.username, aue.password, aue.first_name, aue.last_name, aue.role)!=EOF){
        if(id!=aue.id){
            fprintf(tempfile, "%i %s %s %s %s %s\n\n", aue.id, aue.username, aue.password, aue.first_name, aue.last_name, aue.role);
        }else{
            mount = 1;
        }
        if(id==aue.id){
            found=1;
            getcod(20,7);
            printf("Id: %i\n", aue.id);
            getcod(20,8);
            printf("UserName: %s\n", aue.username);
            getcod(20,9);
            printf("Password: %s\n", aue.password);
            getcod(20,10);
            printf("First Name: %s\n", aue.first_name);
            getcod(20,11);
            printf("Last Name: %s\n", aue.last_name);
            getcod(20,12);
            printf("Role: %s\n", aue.role);
            getcod(20,14);
            printf("Updating Information");

            do{
                getcod(20,15);
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
                getcod(20,16);
                printf("Enter Password:   ");
                fflush(stdin);
                gets(aue.password);
                break;
                }
                while(!vaild);


                do{
                getcod(20,17);
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
                getcod(20,18);
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
                getcod(20,19);
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
    printf("\nPress 'U' to update and other key to cancel....! \n");
    char answer;
    answer = getche();
    if(answer=='U' || answer=='u'){
        fprintf(tempfile,"%i %s %s %s %s %s\n\n", aue.id, aue.username, aue.password, aue.first_name, aue.last_name, aue.role);
        fclose(tempfile);
        printf("\nUser Updated\n");
    }else{
        fprintf(tempfile,"%i %s %s %s %s %s\n\n", aue.id, aue.username, aue.password, aue.first_name, aue.last_name, aue.role);
        fclose(tempfile);
        printf("Update Failed");
    }

        }
    }
    if(!found)printf("\n\tNo record found!");
    fclose(mainfile);
    fclose(tempfile);
    remove("data//users.txt");
    rename("data//u_temp.txt", "data//users.txt");
    printf("Press any key to go Back \n");
    getch();
    admin_user_menu();

}
