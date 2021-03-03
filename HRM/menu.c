#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>

/** Administrator Menu **/
void Administrator_Menu()
{
    system("cls");
    bannerdesign("Administrator Menu");
    int select;

    getcod(20,5);
    printf("1. Employee Menu"); // employee_management.c

    getcod(20,6);
    printf("2. Financial Menu"); // financial_management.c

    getcod(20,7);
    printf("3. Time Menu"); // time_management.c

    getcod(20,8);
    printf("4. User Menu"); //user_management.c

    getcod(20,9);
    printf("5. Project Menu"); //project_management.c

    getcod(20,10);
    printf("6. Reports");

    getcod(20,11);
    printf("7. Software Manual"); // help.c

    getcod(20,12);
    printf("8. Exit");



    getcod(20,16);
    printf("Select Menu:     ");

    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_employee_menu();
        break;
    case 2:
        admin_financial_menu();
        break;
    case 3:
        admin_time_menu();
        break;
    case 4:
        admin_user_menu();
        break;
    case 5:
        admin_project_menu();
        break;
    case 6:
        admin_reports();
        break;
    case 7:
        admin_help();
        break;
    case 8:
        printf("Logging Out");
        exit(0);
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        Administrator_Menu();
    }
}
/** Administrator Menu **/

/** Employee Menu **/
void Employee_Menu()
{
    system("cls");
    bannerdesign("Employee Menu");
    int select;
    getcod(20,5);
    printf("1. Time Menu \n");
    getcod(20,6);
    printf("2. Project Management \n");
    getcod(20,7);
    printf("3. Exit");
    getcod(20, 11);
    printf("Select Option: ")
    scanf("%i", &select);


    switch(select)
    {
    case 1:
        employee_time_menu();
        break;
    case 2:
        employee_project_menu();
        break;
    case 3:
        printf("Logging Out");
        exit(0);
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        Employee_Menu();
    }

}
/** Employee Menu **/

/** Client Menu **/
void Client_Menu()
{
    int select;
    system("cls");
    bannerdesign("Client Menu");

    getcod(20,5);
    printf("1. Project Status");
    getcod(20,6);
    printf("2. Exit");
    scanf("%i", &select);

    switch(select){
    case 1:
        client_view_project_status();
        break;
    case 2:
        printf("Logging Out");
        exit(0);
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        Client_Menu();
    }
}
/** Client Menu **/

/**8. Help**/
void admin_help()
{
    system("cls");
    bannerdesign("Help");

    int select;
    getcod(20,5);
    printf("1. Employee Menu \n");

    getcod(20,6);
    printf("2. Facility Menu \n");

    getcod(20,7);
    printf("3. Financial Menu \n");

    getcod(20,8);
    printf("4. Time Menu");

    getcod(20,9);
    printf("5. User Menu");

    getcod(20,10);
    printf("6. Project Menu");

    getcod(20,11);
    printf("7. Reports");

    getcod(20,12);
    printf("8. Exit");

    getcod(20,16);
    printf("Select Menu:     ");

    scanf("%i", &select);

    switch(select)
    {
    case 1:
        help_employee_menu();
        break;
    case 2:
        help_facility_menu();
        break;
    case 3:
        help_financial_menu();
        break;
    case 4:
        help_time_menu();
        break;
    case 5:
        help_user_menu();
        break;
    case 6:
        help_project_menu();
        break;
    case 7:
        help_reports_menu();
        break;
    case 8:
        Administrator_Menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_help();

    }
}

/**8. Help**/



/** 1. Employee Administrator **/

void admin_employee_menu()
{
    system("cls");
    bannerdesign("Information Database");
    int select;

    getcod(20,5);
    printf("1. Add Employee");

    getcod(20,6);
    printf("2. Edit Employee");

    getcod(20,7);
    printf("3. Delete Employee");

    getcod(20,8);
    printf("4. View Employee");

    getcod(20,9);
    printf("5. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_add_employee();
        break;
    case 2:
        admin_edit_employee();
        break;
    case 3:
        admin_delete_employee();
        break;
    case 4:
        admin_view_employee();
        break;
    case 5:
        Administrator_Menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_employee_menu();
    }
}
/** Employee Administrator **/



/** 5. User Management **/
void admin_user_menu()
{
    system("cls");
    bannerdesign("User Management");

    int select;

    getcod(20,5);
    printf("1. Add User");

    getcod(20,6);
    printf("2. View Users");

    getcod(20,7);
    printf("3. Update User");

    getcod(20,8);
    printf("4. Delete User");

    getcod(20,9);
    printf("5. << Go Back");


    getcod(20,11);
    printf("Select Option:    ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        add_user();
        break;
    case 2:
        view_user();
        break;
    case 3:
        update_user();
        break;
    case 4:
        delete_user();
        break;
    case 5:
        Administrator_Menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_user_menu();
    }

}
/** User Management **/

/** Financial Menu**/
void admin_financial_menu()
{
    system("cls");
    bannerdesign("Financial Menu");
    int select;

    getcod(20,4);
    printf("1. Payroll");


    getcod(20,6);
    printf("2. Salary Administration");


    getcod(20,8);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_fi_payroll();
        break;
    case 2:
        admin_fi_salary_administration();
        break;
    case 3:
        Administrator_Menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_financial_menu();
    }

}

void admin_fi_payroll()
{
    system("cls");
    bannerdesign("Payroll");
    int select;

    getcod(20,5);
    printf("1. Add Pay Order");

    getcod(20,6);
    printf("2. View Pay Order");

    getcod(20,7);
    printf("3. Delete Pay Order");

    getcod(20,8);
    printf("4. Release Pay Order");

    getcod(20,11);
    printf("5. << Go Back");

    getcod(20,12);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_add_pay_order();
        break;
    case 2:
        admin_view_pay_order();
        break;
    case 3:
        admin_delete_pay_order();
        break;
    case 4:
        admin_release_pay_order();
        break;
    case 5:
        Administrator_Menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_fi_payroll();
    }

}

void admin_fi_salary_administration()
{
    system("cls");
    bannerdesign("Salary Administrator");
    int select;

    getcod(20,5);
    printf("1. Generate Salary Sheet");

    getcod(20,6);
    printf("2. View Salary Sheet");

    getcod(20,7);
    printf("3. Salary by individual");
    getcod(20,8);
    printf("4. Salary by Month");

    getcod(20,7);
    printf("5. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_fi_gen_salary_sheet();
        break;
    case 2:
        admin_fi_view_salary();
        break;
    case 3:
        admin_release_salary_single();
        break;
    case 4:
        admin_release_salary_month();
        break;
    case 5:
        admin_financial_menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_fi_salary_administration();
    }


}
void admin_fi_view_salary()
{
    system("cls");
    bannerdesign("View Salary");
    int select;
    getcod(20,5);
    printf("1. Watch By Month");

    getcod(20,6);
    printf("2. Watch By ID");

    getcod(20,7);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_fi_vs_month();
        break;
    case 2:
        admin_fi_vs_single();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_fi_salary_administration();
    }
}


/**Financial Menu**/


/** Time Menu **/
void admin_time_menu()
{
    system("cls");
    bannerdesign("Time Menu");
    int select;

    getcod(20,5);
    printf("1. Clock In or Out");

    getcod(20,6);
    printf("2. Time Tracking");

    getcod(20,7);
    printf("3. Attendance Management");

    getcod(20,8);
    printf("4. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_t_clock_in_or_out();
        break;
    case 2:
        admin_employee_time_track();
        break;
    case 3:
        admin_t_attendance_management();
        break;
    case 4:
        Administrator_Menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_time_menu();
    }
}

void employee_time_menu()
{
    system("cls");
    bannerdesign("Time Menu");
    int select;

    getcod(20,5);
    printf("1. Clock In or Out");

    getcod(20,6);
    printf("2. Time Tracking");

    getcod(20,8);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        employee_t_clock_in_or_out();
        break;
    case 2:
        employee_time_track();
        break;
    case 3:
        Employee_Menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        employee_time_menu();
    }
}

void admin_t_clock_in_or_out()
{
    system("cls");
    bannerdesign("Clock In Or Out");
    int select;

    getcod(20,5);
    printf("1. In");

    getcod(20,6);
    printf("2. Out");

    getcod(20,7);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_in();
        break;
    case 2:
        admin_out();
        break;
    case 3:
        admin_time_menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_t_clock_in_or_out();
    }

}

void employee_t_clock_in_or_out()
{
    system("cls");
    bannerdesign("Clock In Or Out");
    int select;

    getcod(20,5);
    printf("1. In");

    getcod(20,6);
    printf("2. Out");

    getcod(20,7);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_in();
        break;
    case 2:
        admin_out();
        break;
    case 3:
        employee_time_menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        employee_t_clock_in_or_out();
    }

}

void admin_view_all_employee_attendance() {}
void admin_t_attendance_management()
{
    system("cls");
    bannerdesign("Attendance Management");
    int select;

    getcod(20,6);
    printf("1. View Single Employee Attendance");

    getcod(20,7);
    printf("2. << Go Back ");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_view_single_employee_attendance();
        break;
    case 2:
        admin_time_menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_t_attendance_management();
    }


}

/** Time Menu **/


/** Project Menu **/

void admin_project_menu()
{
    system("cls");
    bannerdesign("Projects");
    int select;

    getcod(20,4);
    printf("1. Add Project");

    getcod(20,5);
    printf("2. Project Status");


    getcod(20,6);
    printf("3. Delete Project");

    getcod(20,7);
    printf("4. View Project");

    getcod(20,8);
    printf("5. << Go Back");

    getcod(20,9);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_add_project();
        break;
    case 2:
        admin_project_status();
        break;
    case 3:
        admin_delete_project();
        break;
    case 4:
        admin_view_project();
        break;
    case 5:
        Administrator_Menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_project_menu();
    }
}

void employee_project_menu()
{
  system("cls");
    bannerdesign("Projects");
    int select;

    getcod(20,4);
    printf("1. Generate Project Status");

    getcod(20,5);
    printf("2. Update Project Status");

    getcod(20,6);
    printf("3. View Project Status");

    getcod(20,7);
    printf("4. View All Projects");

    getcod(20,7);
    printf("5. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        employee_project_gen_status();
        break;
    case 2:
        employee_project_update_status();
        break;
    case 3:
        employee_view_project_status();
        break;
    case 4:
        employee_view_projects();
        break;
    case 5:
        Employee_Menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        employee_project_menu();
    }
}



void admin_project_status()
{
    system("cls");
    bannerdesign("Projects");
    int select;

    getcod(20,4);
    printf("1. Generate Project Status");

    getcod(20,5);
    printf("2. Update Project Status");

    getcod(20,6);
    printf("3. View Project Status");

    getcod(20,7);
    printf("4. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

    switch(select)
    {
    case 1:
        admin_project_gen_status();
        break;
    case 2:
        admin_project_update_status();
        break;
    case 3:
        admin_view_project_status();
        break;
    case 4:
        admin_project_menu();
        break;
    default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_project_status();
    }

}



/** Project Menu **/
/** Report **/
void admin_reports(){
    system("cls");
    bannerdesign("Reports");
    int select;

    getcod(20,4);
    printf("1. By Month");
    getcod(20,5);
    printf("2. By Year");
    getcod(20,6);
    printf("3. << Go Back");

    switch(select){
case 1:
    admin_reports_month();
    break;
case 2:
    admin_reports_year();
    break;
case 3:
    Administrator_Menu();
    break;
default:
        printf("Wrong Input \n");
        printf("Press any key to Try Again \n");
        getch();
        admin_reports();
    }
}

/** Report **/

