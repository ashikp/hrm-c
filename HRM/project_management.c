#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>


struct project{
int main_id;
int project_id;
char projectname[1000];
char firstname_customer[1000];
char lastname_customer[1000];
char c_username[1000];
char c_password[1000];
int customer_id;
char project_start[1000];
char project_end[1000];
int employee_assign_id;
char project_manager[1000];
int status;
}p, cp;

struct user_entry{
    int id;
    char username[50];
    char password[50];
    char first_name[50];
    char last_name[50];
    char role[5];
}aue;


void admin_add_project(){
system("cls");
bannerdesign("Add Project");
FILE * project = fopen("data/project/project.txt", "aw+");
FILE * userchecking = fopen("data/users.txt", "rb+");
FILE * useradd = fopen("data/users.txt", "aw+");
char role[2] = "C";
int vaild = 0, id=100, pid=1010,i;


while(fscanf(userchecking, "%i %s %s %s %s %s", &aue.id, aue.username, aue.password, aue.first_name, aue.last_name, aue.role)!=EOF){
    p.customer_id = aue.id;
}

while(fscanf(project, "%i %i \"%s\" %s %s %i %s %s %i %s\n\n", &cp.main_id, &cp.project_id, cp.projectname, cp.firstname_customer, cp.lastname_customer, &cp.customer_id, cp.project_start, cp.project_end, &cp.employee_assign_id, cp.project_manager)!=EOF){
    if(cp.main_id==""){
        id=100;
    }else{
        id=cp.main_id;
    }
    if(cp.project_id==""){
        pid=100;
    }else{
        pid = cp.project_id;
    }
}
id++;
pid++;



    getcod(5,6);
    printf("Enter Project Name: ");
    fflush(stdin);
    gets(p.projectname);

    do{
        getcod(5,7);
        printf("Enter Customer First Name: ");
        fflush(stdin);
        gets(p.firstname_customer);
        for(i=0; i<strlen(p.firstname_customer); ++i){
                if(isalpha(p.firstname_customer[i])){
                    vaild = 1;
                }else{
                    vaild = 0;
                    break;
                }
                }
                if(!vaild){
                getcod(50,7);
                printf("Customer First Name Can't have Number on it.");
                }
    }
    while(!vaild);

    do{
        getcod(5,8);
        printf("Enter Customer Last Name: ");
        fflush(stdin);
        gets(p.firstname_customer);
        for(i=0; i<strlen(p.lastname_customer); ++i){
                if(isalpha(p.lastname_customer[i])){
                    vaild = 1;
                }else{
                    vaild = 0;
                    break;
                }
                }
                if(!vaild){
                getcod(50,8);
                printf("Customer Last Name Can't have Number on it.");
                }
    }
    while(!vaild);


        getcod(5,9);
        printf("Enter Client Username: ");
        fflush(stdin);
        gets(p.c_username);

        getcod(5,10);
        printf("Enter the Client Password: ");
        fflush(stdin);
        gets(p.c_password);

        getcod(5,11);
        printf("Enter Project Start Date(01-Feb-2021): ");
        fflush(stdin);
        gets(p.project_start);

        getcod(5,12);
        printf("Enter Project Start End(01-Feb-2021): ");
        fflush(stdin);
        gets(p.project_end);

        do{
            getcod(5,13);
            printf("Enter Project Manager Name: ");
            fflush(stdin);
            gets(p.project_manager);
            for(i=0; i<strlen(p.project_manager); ++i){
                if(isalpha(p.project_manager[i])){
                    vaild = 1;
                }else{
                    vaild = 0;
                    break;
                }
                }
                if(!vaild){
                getcod(50,13);
                printf("Project Manager Name Can't have Number on it.");
                }

        }
        while(!vaild);

        getcod(5,14);
        printf("Enter Employee Id: ");
        scanf("%i", &p.employee_assign_id);

        fprintf(project, "%i %i (%s) %s %s %i %s %s %i %s\n\n", id, pid, p.projectname, p.firstname_customer, p.lastname_customer, p.customer_id, p.project_start, p.project_end, p.employee_assign_id, p.project_manager);
        fprintf(useradd, "%i %s %s %s %s %s\n\n", p.customer_id, p.c_username, p.c_password, p.firstname_customer, p.lastname_customer, role);
        fclose(project);
        fclose(userchecking);
        fclose(useradd);

        getcod(5,16);
        printf("Project Add Complete\n");
        printf("Press any key to go Back \n");
        getch();
        admin_project_menu();
}
void admin_project_gen_status(){
    system("cls");
    bannerdesign("View Projects");

    FILE * project = fopen("data/project/project.txt", "rb");
    FILE * status_project = fopen("data/project/status.txt", "aw+");
    int status = 0, done = 0, pid;


    getcod(5,6);
    printf("Enter Project Id: ");
    scanf("%i", &pid);


    while(fscanf(project, "%i %i %s %s %s %i %s %s %i %s\n\n", &p.main_id, &p.project_id, p.projectname, p.firstname_customer, p.lastname_customer, &p.customer_id, p.project_start, p.project_end, &p.employee_assign_id, p.project_manager)!=EOF){
        if(pid==p.project_id){
            fprintf(status_project, "%i %i %s %i %s %s %i %s %i\n\n", p.main_id, p.project_id, p.projectname, p.customer_id, p.project_start, p.project_end, p.employee_assign_id, p.project_manager, status);
            done = 1;
             }
}
if(!done){
    printf("Failed to Generate Status \n");
}else{
    printf("Project Status Generate Done \n");
}
fclose(status_project);
fclose(project);

        printf("Press any key to go Back \n");
        getch();
        admin_project_status();

}
void admin_delete_project(){
system("cls");
bannerdesign("Delete Projects");

FILE *project = fopen("data/project/project.txt","rb");
FILE *p_temp = fopen("data/project/t_project.txt", "aw+");
int pid, update=0;

getcod(5,6);
printf("Enter Project Id: ");
scanf("%i", &pid);

    while(fscanf(project, "%i %i %s %s %s %i %s %s %i %s\n\n", &p.main_id, &p.project_id, p.projectname, p.firstname_customer, p.lastname_customer, &p.customer_id, p.project_start, p.project_end, &p.employee_assign_id, p.project_manager)!=EOF){
        if(pid!=p.project_id){
                    fprintf(p_temp, "%i %i %s %s %s %i %s %s %i %s\n\n", p.main_id, p.project_id, p.projectname, p.firstname_customer, p.lastname_customer, p.customer_id, p.project_start, p.project_end, p.employee_assign_id, p.project_manager);

        }else{
        update=1;
        }
}
    if(!update){
        printf("Record Not Found \n");
    }else{
        printf("Record Updated \n");
    }
    fclose(project);
    fclose(p_temp);

    remove("data//project//project.txt");
    rename("data//project//t_project.txt", "data//project//project.txt");
    printf("Press any key to go Back \n");
    getch();
    admin_project_menu();


}


void admin_view_project(){
system("cls");
bannerdesign("View Projects");

FILE *status_check = fopen("data/project/status.txt","rb");
int i, post=8;

    getcod(5,6);
    printf("ID");
    getcod(9,6);
    printf("P ID");
    getcod(16,6);
    printf("Project Name");
    getcod(30,6);
    printf("C ID");
    getcod(40,6);
    printf("E ID");
    getcod(46,6);
    printf("Project End");
    getcod(65,6);
    printf("Status");

    getcod(0,7);
    for(i=0; i<96; i++){
        printf("-");
    }



while(fscanf(status_check,"%i %i %s %i %s %s %i %s %i\n\n", &p.main_id, &p.project_id, p.projectname, &p.customer_id, p.project_start, p.project_end, &p.employee_assign_id, p.project_manager, &p.status)!=EOF){
    getcod(5,post);
    printf("%i", p.main_id);
    getcod(9,post);
    printf("%i", p.project_id);
    getcod(16,post);
    printf("%s", p.projectname);
    getcod(30,post);
    printf("%i", p.customer_id);
    getcod(40,post);
    printf("%i", p.employee_assign_id);
    getcod(46,post);
    printf("%s", p.project_end);
    getcod(65,post);
    if(p.status==100){
        printf("Complete");
    }else if(p.status < 100 && p.status > 1){
        printf("In Process");
    }else{
        printf("Pending to Start");
    }
    post++;
}
printf("\n");
    for(i=0; i<96; i++){
        printf("-");
    }
fclose(status_check);
printf("Press any key to go Back \n");
getch();
admin_project_menu();
}

void admin_project_update_status(){
system("cls");
bannerdesign("Edit Project");

int pid, found=0, d_status, update = 0;

getcod(5,6);
printf("Enter the Project Id: ");
scanf("%i", &pid);

FILE * status = fopen("data/project/status.txt", "rb+");
FILE * t_status = fopen("data/project/t_status.txt", "aw+");

while(fscanf(status, "%i %i %s %i %s %s %i %s %i\n\n", &p.main_id, &p.project_id, p.projectname, &p.customer_id, p.project_start, p.project_end, &p.employee_assign_id, p.project_manager, &p.status)!=EOF){
    if(pid!=p.project_id){
        fprintf(t_status, "%i %i %s %i %s %s %i %s %i\n\n", p.main_id, p.project_id, p.projectname, p.customer_id, p.project_start, p.project_end, p.employee_assign_id, p.project_manager, p.status);
    }else{
        found =1;
    }
    if(pid==p.project_id){
        getcod(5,8);
        printf("ID: %i", p.main_id);
        getcod(5,9);
        printf("Project ID: %i", p.project_id);
        getcod(5,10);
        printf("Project Name: %s", p.projectname);
        getcod(5,11);
        printf("Project Status: %i %", p.status);

        getcod(5,13);
        printf("Enter the Status Update: 1-100");
        scanf("%i", &d_status);

        fprintf(t_status, "%i %i %s %i %s %s %i %s %i\n\n", p.main_id, p.project_id, p.projectname, p.customer_id, p.project_start, p.project_end, p.employee_assign_id, p.project_manager, d_status);
        update = 1;
    }
}
    if(!update){
        printf("Record Not Found \n");
    }else{
        printf("Record Updated \n");
    }
    fclose(status);
    fclose(t_status);
    printf("Press any key to go Back \n");
    getch();
    admin_project_status();
}
