#include <stdio.h>
void help_employee_menu(){
    printf("Here we can add, edit, delete and view employee information.\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}
void help_facility_menu(){
    printf("Here one can view all kind of facilities that are available for the employee by the employer.\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}

void help_financial_menu(){
    printf("It is a section where all the budgetary and salary concerns of the company is addressed. Here we can also get payment information.\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}

void help_time_menu(){
    printf("In this menu, the user can track the employee�s time spent on the company grounds.\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}

void help_user_menu(){
    printf("Here we can observe the accesses granted to each types of user.");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}

void help_project_menu(){
    printf("Here the client can observe the details of the assignment given by him to the company. There is also another feature that allows the company to see which client gives which project.");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}

void help_reports_menu(){
    printf("Here we can view the annual report of the concerned company.");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}