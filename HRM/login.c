#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

struct userchecking{
        int id;
        char username[50];
        char password[50];
        char a[50];
        char b[50];
        char role[5];
} ucheck;

void login(){
// Declare Checking

int check = 0;
FILE *userdata_file;

userdata_file = fopen("data/users.txt", "rb");

FILE *a_logs = fopen("data/admin_logs.txt","aw+");
FILE *e_logs = fopen("data/employee_logs.txt","aw+");
FILE *c_logs = fopen("data/client_logs.txt","aw+");

system("cls");
bannerdesign("Login Menu");
char username[50];
char password[50];
    fflush(stdin);
    getcod(20,5);
    printf("Enter UserName:     ");
    scanf("%s", &username);
    getcod(20,6);
    printf("Enter Password:     ");
    scanf("%s", &password);




// Checking Login
while(fscanf(userdata_file,"%i %s %s %s %s %s\n\n", &ucheck.id, ucheck.username, ucheck.password, ucheck.a, ucheck.b, ucheck.role)!=EOF){
    if(strcmp(username,ucheck.username) == 0){
        if(strcmp(password,ucheck.password) == 0){
            if(strcmp(ucheck.role, "A") == 0){
                    check = 1;
                    fprintf(a_logs, "%s%i\n\n", getlocalctime(), ucheck.id);
                    printf("Login Success \n");
                    printf("Press any key to Go Administrator Menu \n");
                    endline();
                    getch();
                    fclose(userdata_file);
                    fclose(a_logs);
                    Administrator_Menu();
                    break;

            }else if(strcmp(ucheck.role, "E") == 0){
                    check = 1;
                    fprintf(e_logs, "%s%i\n\n", getlocalctime(), ucheck.id);
                    printf("Login Success \n");
                    printf("Press any key to Go Employee Menu \n");
                    endline();
                    getch();
                    fclose(userdata_file);
                    fclose(e_logs);
                    Employee_Menu();
                    break;

            }else if(strcmp(ucheck.role, "C") == 0){
                    check = 1;
                    fprintf(c_logs, "%s%i\n\n", getlocalctime(), ucheck.id);
                    printf("Login Success \n");
                    printf("Press any key to Go Client Menu \n");
                    endline();
                    getch();
                    fclose(userdata_file);
                    fclose(c_logs);
                    Client_Menu();
                    break;

            }
        }
    }
}
if(!check){
    printf("Login Failed \n");
    printf("Press any key to try again \n");
    getch();
    login();
}
fclose(userdata_file);

}
