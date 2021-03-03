#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
struct employee_data
{
    int id;
    char first_name[50];
    char last_name[50];
    char username[50];
    char password[50];
    char father_name[50];
    char mother_name[50];
    char mailing_address[200];
    char permanent_address[200];
    int nid_number;
    char pjob_company_name[50];
    char join_date[50];
    char department[50];
    int salary;
    char dob[50];
    char role[2];
    char life_in[100];
    char reward[100];
} ed, pd;

void admin_add_employee()
{
    char answer[2];
    system("cls");
    bannerdesign("Add Employee");
    char role[2] = "E";
    int vaild = 0, i,callbackid;
    FILE *add_employee_file;
    FILE *add_user_file;
    FILE *read_file;
    add_employee_file = fopen("data/employee.txt", "a");
    add_user_file = fopen("data/users.txt", "a");
    read_file = fopen("data/users.txt", "r");

    while(fscanf(read_file, "%i %s %s %s %s %s\n\n", &ed.id, ed.username, ed.password, ed.first_name, ed.last_name, ed.role)!=EOF)
    {
        callbackid = ed.id;
    }
    callbackid++;
    do
    {
        getcod(10,6);
        printf("Enter First Name:   ");
        fflush(stdin);
        gets(ed.first_name);
        for(i=0; i<strlen(ed.first_name); ++i)
        {
            if(isalpha(ed.first_name[i]))
            {
                vaild = 1;
            }
            else
            {
                vaild = 0;
                break;
            }
        }
        if(!vaild)
        {
            getcod(50,6);
            printf("First Name Can't have Number on it.");
        }
    }
    while(!vaild);
    do
    {
        getcod(10,7);
        printf("Enter Last Name:   ");
        fflush(stdin);
        gets(ed.last_name);
        for(i=0; i<strlen(ed.last_name); ++i)
        {
            if(isalpha(ed.last_name[i]))
            {
                vaild = 1;
            }
            else
            {
                vaild = 0;
                break;
            }
        }
        if(!vaild)
        {
            getcod(50,7);
            printf("Last Name Can't have Number on it.");
        }
    }
    while(!vaild);


    do
    {
        getcod(10,8);
        printf("Enter UserName:   ");
        fflush(stdin);
        gets(ed.username);
        break;
    }
    while(!vaild);

    do
    {
        getcod(10,9);
        printf("Enter Password:   ");
        fflush(stdin);
        gets(ed.password);
        break;
    }
    while(!vaild);

    do
    {
        getcod(10,10);
        printf("Enter Father's Name:   ");
        fflush(stdin);
        gets(ed.father_name);
        for(i=0; i<strlen(ed.father_name); ++i)
        {
            if(isalpha(ed.father_name[i]))
            {
                vaild = 1;
            }
            else
            {
                vaild = 0;
                break;
            }
        }
        if(!vaild)
        {
            getcod(50,10);
            printf("Father's Name Can't have Number on it.");
        }
    }
    while(!vaild);

    do
    {
        getcod(10,11);
        printf("Enter Mother's Name:   ");
        fflush(stdin);
        gets(ed.mother_name);
        for(i=0; i<strlen(ed.mother_name); ++i)
        {
            if(isalpha(ed.mother_name[i]))
            {
                vaild = 1;
            }
            else
            {
                vaild = 0;
                break;
            }
        }
        if(!vaild)
        {
            getcod(50,11);
            printf("Mother's Name Can't have Number on it.");
        }
    }
    while(!vaild);

    do
    {
        getcod(10,12);
        printf("Enter Mailing Address:   ");
        fflush(stdin);
        gets(ed.mailing_address);
    }
    while(!vaild);

    do
    {
        getcod(10,13);
        printf("Enter Permanent Address:   ");
        fflush(stdin);
        gets(ed.permanent_address);
    }
    while(!vaild);

    getcod(10,14);
    printf("Enter NID Number(10-17 Digits Only):   ");
    scanf("%i", &ed.nid_number);


    do
    {
        getcod(10,15);
        printf("Enter Previous Job Company Name:   ");
        fflush(stdin);
        gets(ed.pjob_company_name);
        for(i=0; i<strlen(ed.pjob_company_name); ++i)
        {
            if(isalpha(ed.pjob_company_name[i]))
            {
                vaild = 1;
            }
            else
            {
                vaild = 0;
                break;
            }
        }
        if(!vaild)
        {
            getcod(50,15);
            printf("Previous Job Company Name Can't have Number on it.");
        }
    }
    while(!vaild);

    do
    {
        getcod(10,16);
        printf("Enter Joining Date(01-01-2021):   ");
        fflush(stdin);
        gets(ed.join_date);
        break;
    }
    while(!vaild);

    do
    {
        getcod(10,17);
        printf("Enter Department:   ");
        fflush(stdin);
        gets(ed.department);
        for(i=0; i<strlen(ed.department); ++i)
        {
            if(isalpha(ed.department[i]))
            {
                vaild = 1;
            }
            else
            {
                vaild = 0;
                break;
            }
        }
        if(!vaild)
        {
            getcod(50,17);
            printf("Department Can't have Number on it.");
        }
    }
    while(!vaild);

    getcod(10,18);
    printf("Enter Salary:   ");
    scanf("%i", &ed.salary);

    do
    {
        getcod(10,19);
        printf("Enter Date of Birth(01-01-1999):   ");
        fflush(stdin);
        gets(ed.dob);
        break;
    }
    while(!vaild);

    do{
        getcod(10,20);
        printf("Life Insurance (Yes or No): ");
        fflush(stdin);
        gets(ed.life_in);
        break;
    }
    while(!vaild);

    do{
        getcod(10,21);
        printf("Rewards (Yes or No): ");
        fflush(stdin);
        gets(ed.reward);
        break;
    }
    while(!vaild);


    fprintf(add_employee_file,"%i %s %s %s %s %s %s %s %s %i %s %s %s %i %s %s %s\n\n", callbackid, ed.first_name, ed.last_name, ed.username, ed.password, ed.father_name, ed.mother_name, ed.mailing_address, ed.permanent_address, ed.nid_number, ed.pjob_company_name, ed.join_date, ed.department, ed.salary, ed.dob, ed.life_in, ed.reward);
    fprintf(add_user_file,"%i %s %s %s %s %s\n\n", callbackid, ed.username, ed.password, ed.first_name, ed.last_name, role);
    fclose(add_employee_file);
    fclose(add_user_file);
    fclose(read_file);
    printf("Employee Add Complete\n");
    getch();
    printf("Press any key to go Back \n");
    admin_employee_menu();
}
admin_delete_employee()
{
    system("cls");
    bannerdesign("Delete Employee");
    FILE *mainfile = fopen("data/employee.txt", "rb+");
    FILE *tempfile = fopen("data/e_temp.txt", "wa+");
    FILE *u_mainfile = fopen("data/users.txt", "rb+");
    int id, found, u_found;
    char role[50];

    getcod(5,6);
    printf("Enter Id: ");
    scanf("%i", &id);

    while(fscanf(mainfile, "%i %s %s %s %s %s %s %s %s %i %s %s %s %i %s %s %s\n\n", &ed.id, ed.first_name, ed.last_name, ed.username, ed.password, ed.father_name, ed.mother_name, ed.mailing_address, ed.permanent_address, &ed.nid_number, ed.pjob_company_name, ed.join_date, ed.department, &ed.salary, ed.dob, ed.life_in, ed.reward)!=EOF)
    {
        if(id!=ed.id)
        {
            fprintf(tempfile, "%i %s %s %s %s %s %s %s %s %i %s %s %s %i %s %s %s\n\n", ed.id, ed.first_name, ed.last_name, ed.username, ed.password, ed.father_name, ed.mother_name, ed.mailing_address, ed.permanent_address, ed.nid_number, ed.pjob_company_name, ed.join_date, ed.department, ed.salary, ed.dob, ed.life_in, ed.reward);
        }
        else
        {
            found = 1;
        }
    }


    if(!found)
    {
        printf("Record Not Found \n");
    }
    else
    {
        printf("Record Updated \n");
    }
    fclose(mainfile);
    fclose(tempfile);
    fclose(u_mainfile);
    remove("data//employee.txt");
    rename("data//e_temp.txt", "data//employee.txt");
    printf("Press any key to go Back \n");
    getch();
    admin_employee_menu();
}
admin_view_employee()
{
    system("cls");
    bannerdesign("View Employee");
    FILE *mainfile = fopen("data/employee.txt", "r");
    int i, post = 8;


    getcod(1,6);
    printf("ID");
    getcod(6,6);
    printf("First Name");
    getcod(26,6);
    printf("Last Name");
    getcod(38,6);
    printf("Date of Birth");
    getcod(58,6);
    printf("NID");
    getcod(75,6);
    printf("Salary");
    getcod(0,7);
    for(i=0; i<95; i++)
    {
        printf("-");
    }
    while(fscanf(mainfile, "%i %s %s %s %s %s %s %s %s %i %s %s %s %i %s %s %s\n\n", &ed.id, ed.first_name, ed.last_name, ed.username, ed.password, ed.father_name, ed.mother_name, ed.mailing_address, ed.permanent_address, &ed.nid_number, ed.pjob_company_name, ed.join_date, ed.department, &ed.salary, ed.dob, ed.life_in, ed.reward)!=EOF)
    {
        getcod(1,post);
        printf("%i", ed.id);
        getcod(6,post);
        printf("%s", ed.first_name);
        getcod(26,post);
        printf("%s", ed.last_name);
        getcod(38,post);
        printf("%s", ed.dob);
        getcod(58,post);
        printf("%i", ed.nid_number);
        getcod(75,post);
        printf("%i", ed.salary);
        post++;
    }
    printf("\n");
    for(i=0; i<95; i++)
    {
        printf("-");
    }
    printf("\n");
    fclose(mainfile);
    printf("Press any key to go Back \n");
    getch();
    admin_employee_menu();
}

void admin_edit_employee()
{
    system("cls");
    bannerdesign("Update Employee Details");
    FILE *mainfile = fopen("data/employee.txt", "rb+");
    FILE *tempfile = fopen("data/e_temp.txt", "wa+");
    int found = 0, id, vaild=0,i,mount;
    char update[100];
    getcod(20,6);
    printf("Enter the Employee ID: ");
    scanf("%i", &id);
    while(fscanf(mainfile, "%i %s %s %s %s %s %s %s %s %i %s %s %s %i %s %s %s\n\n", &ed.id, ed.first_name, ed.last_name, ed.username, ed.password, ed.father_name, ed.mother_name, ed.mailing_address, ed.permanent_address, &ed.nid_number, ed.pjob_company_name, ed.join_date, ed.department, &ed.salary, ed.dob, ed.life_in, ed.reward)!=EOF)
    {
        if(id!=ed.id)
        {
            fprintf(tempfile, "%i %s %s %s %s %s %s %s %s %i %s %s %s %i %s %s %s\n\n", ed.id, ed.first_name, ed.last_name, ed.username, ed.password, ed.father_name, ed.mother_name, ed.mailing_address, ed.permanent_address, ed.nid_number, ed.pjob_company_name, ed.join_date, ed.department, ed.salary, ed.dob, ed.life_in, ed.reward);
        }

        if(ed.id==id)
        {
            found=1;
            getcod(20,7);
            printf("Id: %i", ed.id);
            getcod(20,8);
            printf("First Name: %s", ed.first_name);
            getcod(20,9);
            printf("Last Name: %s", ed.last_name);
            getcod(20,10);
            printf("Username: %s", ed.username);
            getcod(20,11);
            printf("Father's Name: %s", ed.father_name);
            getcod(20,12);
            printf("Mother's Name: %s", ed.mother_name);
            getcod(20,13);
            printf("Mailing Address: %s", ed.mailing_address);
            getcod(20,14);
            printf("Permanent Address: %s", ed.permanent_address);
            getcod(20,15);
            printf("NID Number: %i", ed.nid_number);
            getcod(20,16);
            printf("Previous Company Name: %s", ed.pjob_company_name);
            getcod(20,17);
            printf("Join Date: %s", ed.join_date);
            getcod(20,18);
            printf("Department: %s", ed.department);
            getcod(20,19);
            printf("Salary: %i", ed.salary);
            getcod(20,20);
            printf("Date of Birth: %s", ed.dob);
            getcod(20,21);
            printf("Life Insurance: %s", ed.life_in);
            getcod(20,22);
            printf("Rewards: %s", ed.reward);

            getcod(20,23);
            printf("Update Information");
            do
            {
                getcod(20,24);
                printf("Enter First Name:   ");
                fflush(stdin);
                gets(ed.first_name);
                for(i=0; i<strlen(ed.first_name); ++i)
                {
                    if(isalpha(ed.first_name[i]))
                    {
                        vaild = 1;
                    }
                    else
                    {
                        vaild = 0;
                        break;
                    }
                }
                if(!vaild)
                {
                    printf("\n Name Can't have Number on it. \n");
                }
            }
            while(!vaild);

            do
            {
                getcod(20,25);
                printf("Enter Last Name:   ");
                fflush(stdin);
                gets(ed.last_name);
                for(i=0; i<strlen(ed.last_name); ++i)
                {
                    if(isalpha(ed.last_name[i]))
                    {
                        vaild = 1;
                    }
                    else
                    {
                        vaild = 0;
                        break;
                    }
                }
                if(!vaild)
                {
                    printf("\n Name Can't have Number on it. \n");
                }
            }
            while(!vaild);


            do
            {
                getcod(20,26);
                printf("Enter UserName:   ");
                fflush(stdin);
                gets(ed.username);
                for(i=0; i<strlen(ed.username); ++i)
                {
                    if(isalpha(ed.username[i]))
                    {
                        vaild = 1;
                    }
                    else
                    {
                        vaild = 0;
                        break;
                    }
                }
                if(!vaild)
                {
                    printf("\n UserName Can't have Number on it. \n");
                }
            }
            while(!vaild);

            do
            {
                getcod(20,27);
                printf("Enter Password:   ");
                fflush(stdin);
                gets(ed.password);
            }
            while(!vaild);

            do
            {
                getcod(20,28);
                printf("Enter Father's Name:   ");
                fflush(stdin);
                gets(ed.father_name);
                for(i=0; i<strlen(ed.father_name); ++i)
                {
                    if(isalpha(ed.father_name[i]))
                    {
                        vaild = 1;
                    }
                    else
                    {
                        vaild = 0;
                        break;
                    }
                }
                if(!vaild)
                {
                    printf("\n Father's Name Can't have Number on it. \n");
                }
            }
            while(!vaild);

            do
            {
                getcod(20,29);
                printf("Enter Mother's Name:   ");
                fflush(stdin);
                gets(ed.mother_name);
                for(i=0; i<strlen(ed.mother_name); ++i)
                {
                    if(isalpha(ed.mother_name[i]))
                    {
                        vaild = 1;
                    }
                    else
                    {
                        vaild = 0;
                        break;
                    }
                }
                if(!vaild)
                {
                    printf("\n Mother's Name Can't have Number on it. \n");
                }
            }
            while(!vaild);

            do
            {
                getcod(20,30);
                printf("Enter Mailing Address:   ");
                fflush(stdin);
                gets(ed.mailing_address);
            }
            while(!vaild);

            do
            {
                getcod(20,31);
                printf("Enter Permanent Address:   ");
                fflush(stdin);
                gets(ed.permanent_address);
            }
            while(!vaild);

            getcod(20,32);
            printf("Enter NID Number:   ");
            scanf("%i", &ed.nid_number);


            do
            {
                getcod(20,33);
                printf("Enter Previous Job Company Name:   ");
                fflush(stdin);
                gets(ed.pjob_company_name);
                for(i=0; i<strlen(ed.pjob_company_name); ++i)
                {
                    if(isalpha(ed.pjob_company_name[i]))
                    {
                        vaild = 1;
                    }
                    else
                    {
                        vaild = 0;
                        break;
                    }
                }
                if(!vaild)
                {
                    printf("\n Previous Job Company Name Can't have Number on it. \n");
                }
            }
            while(!vaild);

            do
            {
                getcod(20,34);
                printf("Enter Joining Date(01-01-2021):   ");
                fflush(stdin);
                gets(ed.join_date);
            }
            while(!vaild);

            do
            {
                getcod(20,35);
                printf("Enter Department:   ");
                fflush(stdin);
                gets(ed.department);
                for(i=0; i<strlen(ed.department); ++i)
                {
                    if(isalpha(ed.department[i]))
                    {
                        vaild = 1;
                    }
                    else
                    {
                        vaild = 0;
                        break;
                    }
                }
                if(!vaild)
                {
                    printf("\n Department Can't have Number on it. \n");
                }
            }
            while(!vaild);

            getcod(20,36);
            printf("Enter Salary(1000):   ");
            scanf("%i", &ed.salary);

            do
            {
                getcod(20,37);
                printf("Enter Date of Birth(01-01-1999):   ");
                fflush(stdin);
                gets(ed.dob);
            }
            while(!vaild);

            do{
                getcod(20,38);
                printf("Life Insurance (Yes or No): ");
                fflush(stdin);
                gets(ed.life_in);
            }
            while(!vaild);

            do{
                getcod(20,39);
                printf("Rewards (Yes or No): ");
                fflush(stdin);
                gets(ed.reward);
            }
            while(!vaild);

            printf("\nPress 'U' to update and other key to cancel....! \n");
            char answer;
            answer = getche();
            if(answer=='U' || answer=='u')
            {
                fprintf(tempfile,"%i %s %s %s %s %s %s %s %s %i %s %s %s %i %s %s %s\n\n", ed.id, ed.first_name, ed.last_name, ed.username, ed.password, ed.father_name, ed.mother_name, ed.mailing_address, ed.permanent_address, ed.nid_number, ed.pjob_company_name, ed.join_date, ed.department, ed.salary, ed.dob, ed.life_in, ed.reward);
                fclose(tempfile);
                fclose(mainfile);
                printf("\n Employee Updated");
            }
            else
            {
                fprintf(tempfile,"%i %s %s %s %s %s %s %s %s %i %s %s %s %i %s %s %s\n\n", ed.id, ed.first_name, ed.last_name, ed.username, ed.password, ed.father_name, ed.mother_name, ed.mailing_address, ed.permanent_address, ed.nid_number, ed.pjob_company_name, ed.join_date, ed.department, ed.salary, ed.dob, ed.life_in, ed.reward);
                fclose(tempfile);
                fclose(mainfile);
                printf("Employee Update Failed\n");
            }

        }
    }
    if(!found)
        printf("\n\tNo record found!");
    remove("data//employee.txt");
    rename("data//e_temp.txt", "data//employee.txt");
    printf("Press any key to go Back \n");
    getch();
    admin_employee_menu();
}
