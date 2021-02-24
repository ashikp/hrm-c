#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
struct getdata{
char week[50];
char month[50];
int date;
int hour;
int mint;
int sec;
int year;
int uid;
} gd;

struct timein{
    char c_in_week[50];
    char c_in_month[50];
    int c_in_date;
    int c_in_hour;
    int c_in_mint;
    int c_in_sec;
    int c_in_year;
    int c_in_uid;
}ti;
struct timeout{;
    char c_out_week[50];
    char c_out_month[50];
    int c_out_date;
    int c_out_hour;
    int c_out_mint;
    int c_out_sec;
    int c_out_year;
    int c_out_uid;
}to;

struct report{
    int date;
    char month[50];
    int year;
    int uid;
    int in_h;
    int in_m;
    int in_s;
    int out_h;
    int out_m;
    int out_s;
    int w_h;
    int w_m;
    int w_s;
}r;

struct time{
  int seconds;
  int minutes;
  int hours;
} st, sp, diff;

struct att{
    int date;
    char month[100];
    int year;
    int uid;
    int a_d;
}ad;


void admin_in(){
        system("cls");
        bannerdesign("Employee Clock IN");

        FILE * c_l_e = fopen("data/logs/employee_logs.txt", "rb");
        int uid;

        while(fscanf(c_l_e,"%s %s %i %i:%i:%i %i\n%i\n\n", gd.week, gd.month, &gd.date, &gd.hour, &gd.mint, &gd.sec, &gd.year, &gd.uid)!=EOF){
            uid = gd.uid;
        }
        fclose(c_l_e);

        char e_c_in[100];

        sprintf(e_c_in, "data/time/clock_in_out/clock_in_%i.txt", uid);
        FILE * mainfile = fopen(e_c_in, "aw+");

        fprintf(mainfile,"%s%i\n\n", getlocalctime(), uid);
        getcod(5,6);
        printf("User Id: %i", uid);
        getcod(5,7);
        printf("Your Clock In Time: %s", getlocalctime());
        fclose(mainfile);
        getcod(5,9);
        printf("Press Any Key to Go back");
        getch();
        admin_time_menu();
}

void admin_out(){
        system("cls");
        bannerdesign("Employee Clock IN");

        FILE * c_l_e = fopen("data/logs/employee_logs.txt", "rb");
        int uid;

        while(fscanf(c_l_e,"%s %s %i %i:%i:%i %i\n%i\n\n", gd.week, gd.month, &gd.date, &gd.hour, &gd.mint, &gd.sec, &gd.year, &gd.uid)!=EOF){
        uid = gd.uid;
        }
        fclose(c_l_e);

        char e_c_out[100];

        sprintf(e_c_out, "data/time/clock_in_out/clock_out_%i.txt", uid);
        FILE * mainfile = fopen(e_c_out, "aw+");

        fprintf(mainfile,"%s%i\n\n", getlocalctime(), uid);
        getcod(5,6);
        printf("User Id: %i", uid);
        getcod(5,7);
        printf("Your Clock Out Time: %s", getlocalctime());
        fclose(mainfile);
        getcod(5,9);
        printf("Press Any Key to Go back");
        getch();
        admin_time_menu();
}



void e_report_m(){

        FILE * c_l_e = fopen("data/logs/employee_logs.txt", "rb");
        int uid;

        while(fscanf(c_l_e,"%s %s %i %i:%i:%i %i\n%i\n\n", gd.week, gd.month, &gd.date, &gd.hour, &gd.mint, &gd.sec, &gd.year, &gd.uid)!=EOF){
            uid = gd.uid;
        }
        fclose(c_l_e);

        char e_c_in[100], e_c_out[100], e_c_report[100], e_attendance[100];
        char month[100];
        int a_d =1;
        sprintf(month, "%s", getlocalmonth());
        sprintf(e_c_in, "data/time/clock_in_out/clock_in_%i.txt", uid);
        sprintf(e_c_out, "data/time/clock_in_out/clock_out_%i.txt", uid);
        sprintf(e_c_report, "data/time/report/e_report_%i_%s_%i.txt", uid, getlocalmonth(), getlocalyear());
        sprintf(e_attendance, "data/time/attendance/e_attendance_%i_%s_%i.txt", uid, getlocalmonth(), getlocalyear());
        FILE *c_in = fopen(e_c_in, "rb");
        FILE *c_out = fopen(e_c_out, "rb");
        FILE *attendance = fopen(e_attendance, "wb+");
        // Generating Report
        FILE *gen_report = fopen(e_c_report, "wb+");

        while(fscanf(c_in, "%s %s %i %02d:%02d:%02d %i\n%i\n\n", ti.c_in_week, ti.c_in_month, &ti.c_in_date, &ti.c_in_hour, &ti.c_in_mint, &ti.c_in_sec, &ti.c_in_year, &ti.c_in_uid)!=EOF && fscanf(c_out, "%s %s %i %02d:%02d:%02d %i\n%i\n\n", to.c_out_week, to.c_out_month, &to.c_out_date, &to.c_out_hour, &to.c_out_mint, &to.c_out_sec, &to.c_out_year, &to.c_out_uid)!=EOF){
                if(strcmp(month,ti.c_in_month)==0){
                    st.hours = ti.c_in_hour;
                    st.minutes = ti.c_in_mint;
                    st.seconds = ti.c_in_sec;

                    sp.hours = to.c_out_hour;
                    sp.minutes = to.c_out_mint;
                    sp.seconds = to.c_out_sec;

                    timecount(st,sp,&diff);
                    fprintf(attendance,"%i %s %i %i %i\n\n", ti.c_in_date, ti.c_in_month, ti.c_in_year, uid, a_d);
                    fprintf(gen_report, "%i %s %i %d %02d:%02d:%02d %02d:%02d:%02d %02d:%02d:%02d\n\n", ti.c_in_date, ti.c_in_month, ti.c_in_year, uid, ti.c_in_hour, ti.c_in_mint, ti.c_in_sec, to.c_out_hour, to.c_out_mint, to.c_out_sec, abs(diff.hours), abs(diff.minutes), abs(diff.seconds));
                    }

        }
        fclose(c_in);
        fclose(c_out);
        fclose(attendance);
        fclose(gen_report);

}

void admin_employee_time_track(){
        system("cls");
        bannerdesign("Employee Time Track");
        e_report_m();

        FILE * c_l_e = fopen("data/logs/employee_logs.txt", "rb");
        int uid,i,post=12,size;

        while(fscanf(c_l_e,"%s %s %i %i:%i:%i %i\n%i\n\n", gd.week, gd.month, &gd.date, &gd.hour, &gd.mint, &gd.sec, &gd.year, &gd.uid)!=EOF){
            uid = gd.uid;
        }
        fclose(c_l_e);

        char getfile[100];
        sprintf(getfile, "data/time/report/e_report_%i_%s_%i.txt", uid, getlocalmonth(), getlocalyear());
        FILE *report_file = fopen(getfile, "rb");

        getcod(5,6);
        printf("Your Id: %i", uid);

        getcod(0,9);
        for(i=0; i<95; i++){
            printf("-");
        }
        getcod(5,10);
        printf("E-ID");

        getcod(10,10);
        printf("Date");

        getcod(25,10);
        printf("Clock In");

        getcod(40, 10);
        printf("Clock Out");

        getcod(50,10);
        printf("Total Time");

        getcod(65,10);
        printf("Over Time");

        getcod(0,11);
        for(i=0; i<95; i++){
            printf("-");
        }
        while(fscanf(report_file, "%i %s %i %d %02d:%02d:%02d %02d:%02d:%02d %02d:%02d:%02d\n\n", &r.date, r.month, &r.year, &r.uid, &r.in_h, &r.in_m, &r.in_s, &r.out_h, &r.out_m, &r.out_s, &r.w_h, &r.w_m, &r.w_s)!=EOF){
                getcod(5,post);
                printf("%i", r.uid);

                getcod(10,post);
                printf("%i-%s-%i", r.date,r.month,r.year);

                getcod(25,post);
                printf("%02d:%02d:%02d", r.in_h, r.in_m, r.in_s);

                getcod(40, post);
                printf("%02d:%02d:%02d",r.out_h, r.out_m, r.out_s);

                getcod(50,post);
                printf("%02d:%02d:%02d", r.w_h, r.w_m, r.w_s);

                getcod(65,post);
                if(r.w_h > 8){
                    printf("Yes");
                }else{
                    printf("No");
                }
                post++;
        }
        fclose(report_file);
        printf("\n\n");
        printf("Press any key to go Back \n");
        getch();
        admin_time_menu();

}

void admin_view_single_employee_attendance(){

system("cls");
bannerdesign("Single Employee Attendance");

char getfile[100];
int uid,count=0;
getcod(5,6);
printf("Enter Employee Id: ");
scanf("%i", &uid);

sprintf(getfile, "data/time/attendance/e_attendance_%i_%s_%i.txt", uid, getlocalmonth(), getlocalyear());

FILE *getatt = fopen(getfile, "rb+");

while(fscanf(getatt,"%i %s %i %i %i",&ad.date, ad.month, &ad.year, &ad.uid, &ad.a_d )!=EOF){
        count+=ad.a_d;

}
fclose(getatt);
getcod(5,8);
printf("Employee Id: %i | Month: %s | Present for %i", uid, getlocalmonth(), count);

getcod(5,10);
printf("Press any key to Go Back");
getch();
admin_t_attendance_management();
}

