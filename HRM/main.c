#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

int main()
{
    SMALL_RECT windowSize = {0 , 0 , 30 , 95}; //change the values
    SetConsoleWindowInfo(GetStdHandle(STD_OUTPUT_HANDLE), TRUE, &windowSize);
    //welcome();
    //login();
    admin_project_gen_status();


}
