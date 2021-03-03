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
} ed;

struct view_salary
{
    int id;
    char first_name[50];
    char last_name[50];
    int salary;
    char month[50];
    int year;
    char status[50];

} vs,cs, rs;

struct payorder
{
    int id;
    char date[50];
    char payto[50];
    int employee_id;
    char type[50];
    int amount;
    char status[50];
} po;


void admin_fi_gen_salary_sheet()
{


    system("cls");
    bannerdesign("Generate Salary Sheet");

    char status[50] = "Unpaid";
    FILE *efile = fopen("data/employee.txt", "rb+");
    char getfile[50];
    sprintf(getfile, "data/salary/salary_%s_%i.txt", toupper(getlocalmonth()),getlocalyear());
    FILE *sfile = fopen(getfile, "wb+");
    int found, year;
    getcod(20,6);
    printf("Generating Salary Sheet of %s Year: %i", getlocalmonth(), getlocalyear());

    while(fscanf(efile, "%i %s %s %s %s %s %s %s %s %i %s %s %s %i %s\n\n", &ed.id, ed.first_name, ed.last_name, ed.username, ed.password, ed.father_name, ed.mother_name, ed.mailing_address, ed.permanent_address, &ed.nid_number, ed.pjob_company_name, ed.join_date, ed.department, &ed.salary, ed.dob)!=EOF)
    {
        fprintf(sfile, "%i %s %s %i %s %i %s\n\n", ed.id, ed.first_name, ed.last_name, ed.salary, getlocalmonth(),getlocalyear(), status);
        found = 1;
    }
    fclose(efile);
    fclose(sfile);
    if(!found)
    {
        getcod(20,8);
        printf("Salary Can't Sheet Generated.\n\n");
    }
    else
    {
        getcod(20,8);
        printf("Salary Sheet Generated.\n\n");
    }
    getch();
    printf("Press any key to go Back \n");
    admin_fi_salary_administration();

}

void admin_fi_vs_month()
{

    system("cls");
    bannerdesign("Watch By Month");

    char month[50];
    int year, post = 11,i;

    getcod(20,6);
    printf("Enter Year: ");
    scanf("%i", &year);

    getcod(20,7);
    printf("Enter Month(Jan): ");
    scanf("%s", &month);
    if(tolower(month))
    {
        toupper(month);
    }

    char getfile[50];
    sprintf(getfile, "data/salary/salary_%s_%i.txt", month, year);

    FILE *sfile = fopen(getfile,"rb+");
    getcod(0,8);
    for(i=0; i<95; i++)
    {
        printf("-");
    }
    getcod(5,9);
    printf("ID");

    getcod(12,9);
    printf("First Name");

    getcod(25,9);
    printf("Last Name");

    getcod(35,9);
    printf("Salary");

    getcod(45,9);
    printf("Month");

    getcod(55,9);
    printf("Year");

    getcod(65,9);
    printf("Status");

    getcod(0,10);
    for(i=0; i<95; i++)
    {
        printf("-");
    }

    while(fscanf(sfile, "%i %s %s %i %s %i %s\n\n", &vs.id, vs.first_name, vs.last_name, &vs.salary, vs.month, &vs.year, vs.status)!=EOF)
    {
        getcod(5,post);
        printf("%i", vs.id);

        getcod(12,post);
        printf("%s", vs.first_name);

        getcod(25,post);
        printf("%s", vs.last_name);

        getcod(35,post);
        printf("%i", vs.salary);

        getcod(45,post);
        printf("%s", vs.month);

        getcod(55,post);
        printf("%i", vs.year);

        getcod(65,post);
        printf("%s", vs.status);
        post++;
    }

    printf("\n");
    for(i=0; i<95; i++)
    {
        printf("-");
    }
    printf("\n");
    fclose(sfile);
    printf("Press any key to go Back \n");
    getch();
    admin_fi_salary_administration();
}

void admin_fi_vs_single()
{
    system("cls");
    bannerdesign("Watch by ID");

    int id, year,i, post=12;
    char month[50];

    getcod(20,6);
    printf("Enter ID: ");
    scanf("%i", &id);

    getcod(20,7);
    printf("Enter Year: ");
    scanf("%i", &year);

    getcod(20,8);
    printf("Enter Month(Jan): ");
    scanf("%s", &month);
    if(tolower(month))
    {
        toupper(month);
    }

    char getfile[50];
    sprintf(getfile, "data/salary/salary_%s_%i.txt", month, year);

    FILE *sfile = fopen(getfile,"rb+");

    getcod(0,9);
    for(i=0; i<95; i++)
    {
        printf("-");
    }
    getcod(5,10);
    printf("ID");

    getcod(12,10);
    printf("First Name");

    getcod(25,10);
    printf("Last Name");

    getcod(35,10);
    printf("Salary");

    getcod(45,10);
    printf("Month");

    getcod(55,10);
    printf("Year");

    getcod(65,10);
    printf("Status");

    getcod(0,11);
    for(i=0; i<95; i++)
    {
        printf("-");
    }
    while(fscanf(sfile, "%i %s %s %i %s %i %s\n\n", &vs.id, vs.first_name, vs.last_name, &vs.salary, vs.month, &vs.year, vs.status)!=EOF)
    {
        if(vs.id==id)
        {
            getcod(5,post);
            printf("%i", vs.id);

            getcod(12,post);
            printf("%s", vs.first_name);

            getcod(25,post);
            printf("%s", vs.last_name);

            getcod(35,post);
            printf("%i", vs.salary);

            getcod(45,post);
            printf("%s", vs.month);

            getcod(55,post);
            printf("%i", vs.year);

            getcod(65,post);
            printf("%s", vs.status);
        }
    }
    printf("\n");
    for(i=0; i<95; i++)
    {
        printf("-");
    }
    printf("\n");
    fclose(sfile);
    printf("Press any key to go Back \n");
    getch();
    admin_fi_salary_administration();

}


void admin_add_pay_order()
{
    system("cls");
    bannerdesign("Add Pay Order");
    int vaild,callbackid=0,i;
    char status[50] = "Pending";

    FILE *pfile = fopen("data/payorder.txt", "a+");
    FILE *rfile = fopen("data/payorder.txt", "rb+");

    while(fscanf(rfile,"%i %s %s %i %s %i %s\n\n",&po.id, po.date, po.payto, &po.amount, po.type, &po.employee_id, po.status)!=EOF)
    {
        if(po.id=="")
        {
            callbackid = 0;
        }
        else
        {
            callbackid = po.id;
        }
    }
    callbackid++;

    do
    {
        getcod(20,8);
        printf("Date(01-01-2021):   ");
        fflush(stdin);
        gets(po.date);
        break;
    }
    while(!vaild);

    do
    {
        getcod(20,9);
        printf("Pay To: ");
        fflush(stdin);
        gets(po.payto);
        for(i=0; i<strlen(po.payto); ++i)
        {
            if(isalpha(po.payto[i]))
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
            printf("\n Pay To Can't have Number on it. \n");
        }
    }
    while(!vaild);

    getcod(20,10);
    printf("Amount: ");
    scanf("%i", &po.amount);

    do
    {
        getcod(20,11);
        printf("Type(Employee/Company/Salary/Other):");
        fflush(stdin);
        gets(po.type);
        for(i=0; i<strlen(po.type); ++i)
        {
            if(isalpha(po.type[i]))
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
            printf("\n Type Can't have Number on it. \n");
        }
    }
    while(!vaild);

    if(strcmp(po.type,"employee")==0 || strcmp(po.type,"salary")==0)
    {
        getcod(20,12);
        printf("Employee Id: ");
        scanf("%i", &po.employee_id);
    }
    else
    {
        po.employee_id = 0;
    }

    fprintf(pfile,"%i %s %s %i %s %i %s\n\n",callbackid, po.date, po.payto, po.amount, po.type, po.employee_id, status);

    getcod(20,15);
    printf("Pay Order Add Complete\n");
    fclose(pfile);
    fclose(rfile);
    printf("Press any key to go Back \n");
    getch();
    admin_fi_payroll();

}

void admin_view_pay_order()
{
    system("cls");
    bannerdesign("View Pay Orders");

    FILE *pfile = fopen("data/payorder.txt", "r");
    int i, post = 8;


    getcod(5,6);
    printf("ID");
    getcod(12,6);
    printf("Date");
    getcod(22,6);
    printf("Pay To");
    getcod(32,6);
    printf("Amount");
    getcod(42,6);
    printf("Type");
    getcod(52,6);
    printf("Employee Id");
    getcod(65,6);
    printf("Status");


    getcod(0,7);
    for(i=0; i<95; i++)
    {
        printf("-");
    }
    while(fscanf(pfile, "%i %s %s %i %s %i %s\n\n", &po.id, po.date, po.payto, &po.amount, po.type, &po.employee_id, po.status)!=EOF)
    {
        getcod(5,post);
        printf("%i", po.id);
        getcod(12,post);
        printf("%s", po.date);
        getcod(22,post);
        printf("%s", po.payto);
        getcod(32,post);
        printf("%i", po.amount);
        getcod(42,post);
        printf("%s", po.type);
        getcod(52,post);
        printf("%i", po.employee_id);
        getcod(65,post);
        printf("%s", po.status);
        post++;
    }
    printf("\n");
    for(i=0; i<95; i++)
    {
        printf("-");
    }
    printf("\n");
    fclose(pfile);
    printf("Press any key to go Back \n");
    getch();
    admin_fi_payroll();
}


void admin_delete_pay_order()
{
    system("cls");
    bannerdesign("Delete Pay Order");
    FILE *mainfile = fopen("data/payorder.txt", "rb+");
    FILE *tempfile = fopen("data/po_temp.txt", "aw+");
    int id, found;

    getcod(5,6);
    printf("Enter Id: ");
    scanf("%i", &id);

    while(fscanf(mainfile, "%i %s %s %i %s %i %s\n\n", &po.id, po.date, po.payto, &po.amount, po.type, &po.employee_id, po.status)!=EOF)
    {
        if(id!=po.id)
        {
            fprintf(tempfile, "%i %s %s %i %s %i %s\n\n", po.id, po.date, po.payto, po.amount, po.type, po.employee_id, po.status);
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
    remove("data//payorder.txt");
    rename("data//po_temp.txt", "data//payorder.txt");
    printf("Press any key to go Back \n");
    getch();
    admin_fi_payroll();

}
void admin_release_salary_single()
{
    system("cls");
    bannerdesign("Release Salary");
    char month[100];
    char getfile[100];
    char t_getfile[100];
    int year, eid, found=0, answer;

    getcod(5,6);
    printf("Enter Year: ");
    scanf("%i", &year);

    getcod(5,7);
    printf("Enter Month: ");
    scanf("%s", &month);

    getcod(5,8);
    printf("Enter Employee Id: ");
    scanf("%i", &eid);

    sprintf(getfile, "data/salary/salary_%s_%i.txt", month, year);
    sprintf(t_getfile, "data/salary/t_salary_%s_%i.txt", month, year);

    FILE * salary_file = fopen(getfile, "rb");
    FILE * t_salary_file = fopen(t_getfile, "aw+");

    while(fscanf(salary_file, "%i %s %s %i %s %i %s\n\n", &rs.id, rs.first_name, rs.last_name, &rs.salary, rs.month, &rs.year, rs.status)!=EOF)
    {
        if(eid!=rs.id)
        {
            fprintf(t_salary_file, "%i %s %s %i %s %i %s\n\n", rs.id, rs.first_name, rs.last_name, rs.salary, rs.month, rs.year, rs.status);
        }
        else
        {
            found = 1;
        }
        if(eid==rs.id)
        {
            getcod(5, 12);
            printf("ID: %i", rs.id);
            getcod(5,13);
            printf("First Name: %s", rs.first_name);
            getcod(5,14);
            printf("Salary: %i", rs.salary);
            getcod(5,15);
            printf("Status: %s", rs.status);
            getcod(5,17);
            printf("1. Paid \n");
            getcod(5,18);
            printf("2. Unpaid \n");
            scanf("%i", &answer);

            if(answer==1)
            {
                char new_status[50] = "Paid";
                fprintf(t_salary_file, "%i %s %s %i %s %i %s\n\n", rs.id, rs.first_name, rs.last_name, rs.salary, rs.month, rs.year, new_status);
            }
            else
            {
                char new_status[50] = "Unpaid";
                fprintf(t_salary_file, "%i %s %s %i %s %i %s\n\n", rs.id, rs.first_name, rs.last_name, rs.salary, rs.month, rs.year, new_status);
            }

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
    fclose(salary_file);
    fclose(t_salary_file);
    remove(getfile);
    rename(t_getfile, getfile);
    printf("Press any key to go Back \n");
    getch();
    admin_fi_payroll();

}

void admin_release_salary_month()
{
    system("cls");
    bannerdesign("Release Salary Month");
    char month[100], getfile[100], t_getfile[100], paid[100] = "Paid";
    int year;

    getcod(5,6);
    printf("Enter Year: ");
    scanf("%i", &year);

    getcod(5,7);
    printf("Enter Month: ");
    scanf("%s", &month);

    sprintf(getfile, "data/salary/salary_%s_%i.txt", month, year);
    sprintf(t_getfile, "data/salary/t_salary_%s_%i.txt", month, year);


    FILE * salary = fopen(getfile, "rb");
    FILE * t_salary = fopen(t_getfile, "aw+");

    while(fscanf(salary, "%i %s %s %i %s %i %s\n\n", &rs.id, rs.first_name, rs.last_name, &rs.salary, rs.month, &rs.year, rs.status)!=EOF)
    {
        fprintf(t_salary,"%i %s %s %i %s %i %s\n\n", rs.id, rs.first_name, rs.last_name, rs.salary, rs.month, rs.year, paid);
    }
    fclose(salary);
    fclose(t_salary);
    remove(getfile);
    rename(t_getfile, getfile);
    printf("Press any key to go Back \n");
    getch();
    admin_fi_payroll();

}

void admin_release_pay_order()
{
    system("cls");
    bannerdesign("Release Pay Order");
    FILE *mainfile = fopen("data/payorder.txt", "rb+");
    FILE *tempfile = fopen("data/po_temp.txt", "aw+");
    char getfile[100], getfile_t[100];
    sprintf(getfile, "data/salary/salary_%s_%i.txt", getlocalmonth(), getlocalyear());
    sprintf(getfile_t, "data/salary/t_salary_%s_%i.txt", getlocalmonth(), getlocalyear());
    FILE *salary = fopen(getfile,"rb");
    FILE *t_salary = fopen(getfile,"aw+");
    int id, found, answer;


    getcod(5,6);
    printf("Enter Pay Order Id: ");
    scanf("%i", &id);

    while(fscanf(mainfile, "%i %s %s %i %s %i %s\n\n", &po.id, po.date, po.payto, &po.amount, po.type, &po.employee_id, po.status)!=EOF)
    {
        if(id!=po.id)
        {
            fprintf(tempfile, "%i %s %s %i %s %i %s\n\n", po.id, po.date, po.payto, po.amount, po.type, po.employee_id, po.status);
        }
        else
        {
            found = 1;
        }
        if(id==po.id)
        {
            getcod(5,7);
            printf("Id: %i", po.id);
            getcod(5,8);
            printf("Date: %s", po.date);
            getcod(5,9);
            printf("Pay To: %s", po.payto);
            getcod(5,10);
            printf("Amount: %i", po.amount);
            getcod(5,11);
            printf("Type: %s", po.type);
            getcod(5,12);
            printf("Employee Id: %i", po.employee_id);
            getcod(5,13);
            printf("Status: %s", po.status);
            getcod(5,15);
            printf("1. Approve\n");
            getcod(5,16);
            printf("2. Reject\n");
            scanf("%i", &answer);

            if(answer==1)
            {
                char new_status[50] = "Approved";
                fprintf(tempfile, "%i %s %s %i %s %i %s\n\n", po.id, po.date, po.payto, po.amount, po.type, po.employee_id, new_status);
            }
            else
            {
                char new_status[50] = "Rejected";
                fprintf(tempfile, "%i %s %s %i %s %i %s\n\n", po.id, po.date, po.payto, po.amount, po.type, po.employee_id, new_status);
            }
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
    remove("data//payorder.txt");
    rename("data//po_temp.txt", "data//payorder.txt");
    printf("Press any key to go Back \n");
    getch();
    admin_fi_payroll();
}
