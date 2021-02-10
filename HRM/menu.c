void Administrator_Menu(){
    system("cls");
bannerdesign("Administrator Menu");
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
    printf("8. Help");

    getcod(20,13);
    printf("9. Exit");


    getcod(20,16);
    printf("Select Menu:     ");

    scanf("%i", &select);

        switch(select){
            case 1:
                admin_employee_menu();
                break;
            case 2:
                admin_facility_menu();
                break;
            case 3:
                admin_financial_menu();
                break;
            case 4:
                admin_time_menu();
                break;
            case 5:
                admin_user_menu();
                break;
            case 6:
                admin_project_menu();
                break;
            case 7:
                admin_reports();
                break;
            case 8:
                admin_help();
                break;
            case 9:
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


void Employee_Menu(){
    system("cls");
bannerdesign("Employee Menu");
}
void Client_Menu(){
    system("cls");
bannerdesign("Client Menu");
}
void admin_help(){}
void admin_employee_menu(){
system("cls");
bannerdesign("Employee Menu");
    int select;

    getcod(20,5);
    printf("1. Information Database");

    getcod(20,6);
    printf("2. Hire Employee");

    getcod(20,7);
    printf("4. Bank and Tax");

    getcod(20,8);
    printf("5. Salary administration");

    getcod(20,9);
    printf("6. << Go Back");

    getcod(20,10);
    printf("3. << Go Back");

    getcod(20,11);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_e_information_database();
            break;
        case 2:
            admin_e_hire_employee();
            break;
        case 3:
            Administrator_Menu();
            break;
        default:
            printf("Wrong Input \n");
            printf("Press any key to Try Again \n");
            getch();
            admin_user_menu();
        }

}
void admin_facility_menu(){
    system("cls");
bannerdesign("Facility Menu");
    int select;

    getcod(20,5);
    printf("1. Insurance");

    getcod(20,6);
    printf("2.Over Time");

    getcod(20,7);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_f_insurance();
            break;
        case 2:
            admin_f_over_time();
            break;
        case 3:
            Administrator_Menu();
            break;
        default:
            printf("Wrong Input \n");
            printf("Press any key to Try Again \n");
            getch();
            admin_user_menu();
        }

}
void admin_financial_menu(){
system("cls");
bannerdesign("Financial Menu");
    int select;

    getcod(20,4);
    printf("1. Payroll");

    getcod(20,5);
    printf("2. Bank and Taxes");


    getcod(20,6);
    printf("3. Salary Administration");


    getcod(20,7);
    printf("4. Rewards");


    getcod(20,8);
    printf("5. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_fi_payroll();
            break;
        case 2:
            admin_fi_bank_and_taxes();
            break;
        case 3:
            admin_fi_salary_administration();
            break;
        case 4:
            admin_fi_rewards();
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
void admin_time_menu(){
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

        switch(select){
        case 1:
            admin_t_clock_in_or_out();
            break;
        case 2:
            admin_t_time_tracking();
            break;
        case 3:
            admin_t_attendance_management();
            break;
        case 4:
            Administrator_Menu();
        default:
            printf("Wrong Input \n");
            printf("Press any key to Try Again \n");
            getch();
            admin_user_menu();
        }
}

void admin_user_menu(){
system("cls");
bannerdesign("User Menu");
    int select;

    getcod(20,5);
    printf("1. User Management");

    getcod(20,6);
    printf("2. Role Control Policy");

    getcod(20,7);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_user_management();
            break;
        case 2:
            admin_role_control_policy();
            break;
        case 3:
            Administrator_Menu();
            break;
        default:
            printf("Wrong Input \n");
            printf("Press any key to Try Again \n");
            getch();
            admin_user_menu();
        }

}
void admin_project_menu(){
system("cls");
bannerdesign("Project Menu");
    int select;

    getcod(20,5);
    printf("1. Projects");

    getcod(20,6);
    printf("2. Client Management");

    getcod(20,7);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_p_projects();
            break;
        case 2:
            admin_p_client_management();
            break;
        case 3:
            Administrator_Menu();
            break;
        default:
            printf("Wrong Input \n");
            printf("Press any key to Try Again \n");
            getch();
            admin_user_menu();
        }
}
void admin_reports(){}

void admin_user_management(){
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

            switch(select){
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
                    admin_user_menu();
                    break;
                default:
                    printf("Wrong Input \n");
                    printf("Press any key to Try Again \n");
                    getch();
                    admin_user_management();
            }

}
void admin_role_control_policy(){}
void admin_e_information_database(){}
void admin_e_hire_employee(){}
void admin_f_insurance(){}
void admin_f_over_time(){}
void admin_fi_payroll(){}
void admin_fi_bank_and_taxes(){}
void admin_fi_salary_administration(){}
void admin_fi_rewards(){}
void admin_t_clock_in_or_out(){}
void admin_t_time_tracking(){}
void admin_t_attendance_management(){}
void admin_p_projects(){}
void admin_p_client_management(){}
