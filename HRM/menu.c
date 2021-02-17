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
    printf("3. Bank and Tax");

    getcod(20,8);
    printf("4. Salary administration");

    getcod(20,10);
    printf("5. << Go Back");

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
    printf("1. Facility Administration");

    getcod(20,6);
    printf("2.Insurance");

    getcod(20,7);
    printf("3. Over Time");

    getcod(20,8);
    printf("4. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_f_facility_administration();
            break;
        case 2:
            admin_f_insurance();
            break;
        case 3:
            admin_f_over_time();
            break;
        case 4:
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
void admin_administrative_feature(){}
void admin_employee_feature(){}
void admin_client_feature(){}
void admin_role_control_policy(){
system("cls");
bannerdesign("Role Control Policy");
    int select;

    getcod(20,5);
    printf("1. Administrative Feature");

    getcod(20,6);
    printf("2. Employee Feature");

    getcod(20,7);
    printf("3. Client Feature");

    getcod(20,8);
    printf("4. << Go Back ");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_administrative_feature();
            break;
        case 2:
            admin_employee_feature();
            break;
        case 3:
            admin_client_feature();
            break;
        case 4:
            Administrator_Menu();
            break;
        default:
            printf("Wrong Input \n");
            printf("Press any key to Try Again \n");
            getch();
            admin_user_menu();
        }

}
void admin_e_information_database(){
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
    printf("4. Job History Overview");

    getcod(20,9);
    printf("5. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
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
            admin_job_history_overview();
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
void admin_e_hire_employee(){}
void admin_f_facility_administration(){
system("cls");
bannerdesign("Information Database");
    int select;

    getcod(20,5);
    printf("1. Add Facility");

    getcod(20,6);
    printf("2. View Facility");

    getcod(20,7);
    printf("3. Assign Facility");

    getcod(20,8);
    printf("4. Employee With Facility");

    getcod(20,9);
    printf("5. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_add_facility();
            break;
        case 2:
            admin_view_facility();
            break;
        case 3:
            admin_assign_facility();
            break;
        case 4:
            admin_employee_with_facility();
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
void admin_f_insurance(){
system("cls");
bannerdesign("Information Database");
    int select;

    getcod(20,5);
    printf("1. Health Insurance");

    getcod(20,6);
    printf("2. Life Insurance");

    getcod(20,7);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_health_insurance();
            break;
        case 2:
            admin_life_insurance();
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
void admin_f_over_time(){
system("cls");
bannerdesign("Over Time");
    int select;

    getcod(20,5);
    printf("1. Employee Overtime");

    getcod(20,6);
    printf("2. Overtime Facility");

    getcod(20,7);
    printf("3. Overtime Extra Benefit");

    getcod(20,8);
    printf("4. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_employee_overtime();
            break;
        case 2:
            admin_overtime_facility();
            break;
        case 3:
            admin_overtime_extra_benefit();
            break;
        case 4:
            admin_employee_with_facility();
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
void admin_fi_payroll(){
system("cls");
bannerdesign("Payroll");
    int select;

    getcod(20,5);
    printf("1. Add Pay Order");

    getcod(20,6);
    printf("2. Release Pay Order");

    getcod(20,7);
    printf("3. Expense");

    getcod(20,8);
    printf("4. Provident  Fund");

    getcod(20,9);
    printf("5. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_add_pay_order();
            break;
        case 2:
            admin_release_pay_order();
            break;
        case 3:
            admin_expense();
            break;
        case 4:
            admin_provident_fund();
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
void admin_add_employee_bank_and_tax_details(){}
void admin_yearly_tax_issues(){}
void admin_fi_bank_and_taxes(){
system("cls");
bannerdesign("Information Database");
    int select;

    getcod(20,5);
    printf("1. Add Employee Bank And Tax Details");

    getcod(20,6);
    printf("2. Yearly Tax Issues");

    getcod(20,7);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_add_employee_bank_and_tax_details();
            break;
        case 2:
            admin_yearly_tax_issues();
            break;
        case 3:
            admin_assign_facility();
            break;
        default:
            printf("Wrong Input \n");
            printf("Press any key to Try Again \n");
            getch();
            admin_user_menu();
        }

}
void admin_fi_salary_administration(){}
void admin_add_rewards(){}
void admin_assign_rewards(){}
void admin_fi_rewards(){
system("cls");
bannerdesign("Rewards");
    int select;

    getcod(20,5);
    printf("1. Add Rewards");

    getcod(20,6);
    printf("2. Assign Rewards");

    getcod(20,7);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_add_rewards();
            break;
        case 2:
            admin_assign_rewards();
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
void admin_in(){}
void admin_out(){}
void admin_t_clock_in_or_out(){
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

        switch(select){
        case 1:
            admin_in();
            break;
        case 2:
            admin_out();
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
void admin_employee_total_time_daily(){}
void admin_t_time_tracking(){
system("cls");
bannerdesign("Time Tracking");
    int select;

    getcod(20,5);
    printf("1. Employee Total Time Daily");

    getcod(20,6);
    printf("2. Employee Overtime");

    getcod(20,7);
    printf("3. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_employee_total_time_daily();
            break;
        case 2:
            admin_employee_overtime();
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
void admin_view_all_employee_attendance(){}
void admin_view_single_employee_attendance(){}
void admin_t_attendance_management(){
system("cls");
bannerdesign("Attendance Management");
    int select;

    getcod(20,5);
    printf("1. View All Employee Attendance");

    getcod(20,6);
    printf("2. View Single Employee Attendance");

    getcod(20,7);
    printf("3. << Go Back ");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_view_all_employee_attendance();
            break;
        case 2:
            admin_view_single_employee_attendance();
            break;
        case 3:
            admin_assign_facility();
            break;
        case 4:
            admin_employee_with_facility();
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
void admin_add_project(){}
void admin_project_status(){}
void admin_project_resource(){}
void admin_delete_project(){}
void admin_view_project(){}
void admin_p_projects(){
    system("cls");
bannerdesign("Projects");
    int select;

    getcod(20,4);
    printf("1. Add Project");

    getcod(20,5);
    printf("2. Project Status");

    getcod(20,6);
    printf("3. Project Resource");

    getcod(20,7);
    printf("4. Delete Project");

    getcod(20,8);
    printf("5. View Project");

    getcod(20,9);
    printf("6. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_add_project();
            break;
        case 2:
            admin_project_status();
            break;
        case 3:
            admin_project_resource();
            break;
        case 4:
            admin_delete_project();
            break;
        case 5:
            admin_view_project();
            break;
        case 6:
            Administrator_Menu();
            break;
        default:
            printf("Wrong Input \n");
            printf("Press any key to Try Again \n");
            getch();
            admin_user_menu();
        }
}
void admin_add_client(){}
void admin_delete_client(){}
void admin_view_client(){}
void admin_assign_project(){}
void admin_p_client_management(){
system("cls");
bannerdesign("Client Management");
    int select;

    getcod(20,5);
    printf("1. Add Client");

    getcod(20,6);
    printf("2. Delete Client");

    getcod(20,7);
    printf("3. View Client");

    getcod(20,8);
    printf("4. Assign poject");

    getcod(20,9);
    printf("5. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_add_client();
            break;
        case 2:
            admin_delete_client();
            break;
        case 3:
            admin_view_client();
            break;
        case 4:
            admin_assign_project();
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
void admin_add_employee(){}
void admin_edit_employee(){}
void admin_delete_employee(){}
void admin_job_history_overview(){}
void admin_add_facility(){}
void admin_view_facility(){}
void admin_assign_facility(){}
void admin_employee_with_facility(){}
void admin_employee_overtime(){}
void admin_overtime_facility(){}
void admin_overtime_extra_benefit(){}
void admin_add_pay_order(){}
void admin_release_pay_order(){}
void admin_expense(){}
void admin_provident_fund(){}
void admin_health_insurance(){
system("cls");
bannerdesign("Health Insurance");
    int select;

    getcod(20,5);
    printf("1. Add Insurance Company");

    getcod(20,6);
    printf("2. Employee With Insurance");

    getcod(20,7);
    printf("3. Insurance Facility");

    getcod(20,8);
    printf("4. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_add_insurance_company();
            break;
        case 2:
            admin_employee_with_insurance();
            break;
        case 3:
            admin_insurance_facility();
            break;
        case 4:
            Administrator_Menu();
            break;
        default:
            printf("Wrong Input \n");
            printf("Press any key to Try Again \n");
            getch();
            admin_user_menu();
        }

}
void admin_add_insurance_company(){}
void admin_employee_with_insurance(){}
void admin_insurance_facility(){}
void admin_life_insurance(){
system("cls");
bannerdesign("Life Insurance");
    int select;

    getcod(20,5);
    printf("1. Add Insurance Company");

    getcod(20,6);
    printf("2. Employee With Insurance");

    getcod(20,7);
    printf("3. Insurance Facility");

    getcod(20,8);
    printf("4. << Go Back");

    getcod(20,10);
    printf("Select Menu:     ");
    scanf("%i", &select);

        switch(select){
        case 1:
            admin_add_insurance_company();
            break;
        case 2:
            admin_employee_with_insurance();
            break;
        case 3:
            admin_insurance_facility();
            break;
        case 4:
            Administrator_Menu();
            break;
        default:
            printf("Wrong Input \n");
            printf("Press any key to Try Again \n");
            getch();
            admin_user_menu();
        }

}
