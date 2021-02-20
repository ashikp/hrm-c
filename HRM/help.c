#include <stdio.h>
void help_employee_menu(){
    system("cls");
    bannerdesign("Employee Menu");
    getcod(20,6);
    printf("Here we can add, edit, delete and view employee information.\n");
    getcod(20,7);
    printf("1.Add Employee: Here we can add new employee\n");
    getcod(20,8);
    printf("information. Here we add name, father name, mothers \n");
    getcod(20,9);
    printf("name, user id, password, present address , permanent \n");
    getcod(20,10);
    printf("address, Nid number, previous job company name, \n");
    getcod(20,11);
    printf("joining date, date of birth and post.\n");
    getcod(20,12);
    printf("2.Edit employee:Here we can edit the information for the employee.\n");
    getcod(20,13);
    printf("3.Delete employee:Here we can delete the information of the employee.\n");
    getcod(20,14);
    printf("4.View employee:Here we can view all the information of \n");
    getcod(20,15);
    printf("the employees in our system.\n\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}
void help_facility_menu(){
    system("cls");
    bannerdesign("Facility Menu");
    getcod(20,6);
    printf("Here one can view all kind of facilities that are available for the employee by the employer.\n");
    getcod(20,7);
    printf("1.Facility administration: In facility administration we can add , view , assign and \n");
    getcod(20,8);
    printf("know employee with facility.\n");
    getcod(20,9);
    printf("2.Insurance:In insurance, we have health and life insurance. \n");
    getcod(20,10);
    printf("1.Health insurance: Here we can add insurance company. See employee with \n");
    getcod(20,11);
    printf("insurance. We can also view insurance facility which \n");
    getcod(20,12);
    printf("shows the companies that are providing these facilities.\n");
    getcod(20,13);
    printf("2.Life insurance: Here we can add insurance company. We can see \n");
    getcod(20,14);
    printf("employee with insurance. Here there is insurance facility\n");
    getcod(20,15);
    printf("which we can use to see the facility provided by the company\n");
    getcod(20,16);
    printf("3.Overtime: Here there are 3 options employee overtime, overtime \n");
    getcod(20,17);
    printf("facility and overtime extra benefit.\n");
    getcod(20,18);
    printf("1.Employee overtime: In here we can see the overtime done by each individual employee.\n");
    getcod(20,19);
    printf("2.Overtime facility: This feature lets you see which individual employees have the overtime facility.\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}

void help_financial_menu(){
    system("cls");
    bannerdesign("Financial Menu");
    getcod(20,6);
    printf("It is a section where all the budgetary and salary concerns of the company is addressed. Here we can also get payment information.\n");
    getcod(20,7);
    printf("There are 4 options in this section: Payroll , bank and taxes, salary administration and rewards \n");
    getcod(20,8);
    printf("1.Payroll: Here we can add pay order. We can see the release pay order. Here we can also see the expenses.\n");
    getcod(20,9);
    printf("2.Bank and tax details : Here we can add company bank and tax details. Also we can \n");
    getcod(20,10);
    printf("view the company tax details.\n");
    getcod(20,11);
    printf("3.Salary administration: Here we will reward those who earned the most  in company \n");
    getcod(20,12);
    printf("the year ending.\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}

void help_time_menu(){
    system("cls");
    bannerdesign("Time Menu");
    getcod(20,6);
    printf("In this menu, the user can track the employee’s time spent on the company grounds.\n");
    getcod(20,7);
    printf("There are 3 options: Clock in or out , time tracking and attendance management.\n");
    getcod(20,8);
    printf("1.Clock in or out: Here we will observe the time of that the employee comes in the office and goes out of the office.\n");
    getcod(20,9);
    printf("2.Time tracking: Here we will track the time spent by the employee on the company grounds.\n");
    getcod(20,10);
    printf("3.Attendance management: Here we will count the days present in the office by an employee and the days he failed to be in the office.\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}

void help_user_menu(){
    system("cls");
    bannerdesign("User Menu");
    getcod(20,6);
    printf("Here we can observe the accesses granted to each types of user.\n");
    getcod(20,7);
    printf("There are 2 options in the menu: User management and role control policy.\n");
    getcod(20,8);
    printf("1.User management: Here there are 4 options which let us add , view , update and delete user.\n");
    getcod(20,9);
    printf("2. Role control policy: Here are 3 options administrative feature, employee feature and client feature.\n");
    getcod(20,10);
    printf("1. Administrative feature: Here we specify the features that are accessible by the administrator.\n");
    getcod(20,11);
    printf("2. Employee feature: Here we specify the features that are accessible by the employee.\n");
    getcod(20,12);
    printf("3. Client feature: Here we specify the feature that is accessible by the client.\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}

void help_project_menu(){
    system("cls");
    bannerdesign("Project Menu");
    getcod(20,6);
    printf("Here the client can observe the details of the assignment given by him to the company. There is also another feature that allows the company to see which client gives which project.\n");
    getcod(20,7);
    printf("Here there are  2 options: Projects and client management.\n");
    getcod(20,8);
    printf("1.Projects: Here we can add project ,   see project status, delete project and view project.\n");
    getcod(20,9);
    printf("2.Client management: Here we have add client , delete client , view client and assing project.\n");
    getcod(20,10);
    printf("1.Add client:Here we can add new client .\n");
    getcod(20,11);
    printf("2.Delete Client: Here we can delete clients whose projects are no longer in work.\n");
    getcod(20,12);
    printf("3.View Client: Here we can view information related to the client.\n");
    getcod(20,13);
    printf("4.Assign project: Here we can assign project to the employees\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}

void help_reports_menu(){
    system("cls");
    bannerdesign("Reports Menu");
    getcod(20,6);
    printf("Here we can view the annual report of the concerned company.\n");
    getcod(20,7);
    printf("There are  4 options Add report View Report Update report Delete report:\n");
    getcod(20,8);
    printf("1.Add report : Here we will add new report.\n");
    getcod(20,9);
    printf("2.View report: We can see all the reports available to us.\n");
    getcod(20,10);
    printf("3.Update report: Here we can update any mistakes made in the report.\n");
    getcod(20,11);
    printf("4.Delete report:We will delete the old reports or reports that are not necessary.\n");
    printf("Press Any Key for Go Back");
    getch();
    admin_help();
}
