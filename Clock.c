#include <stdio.h>
#include <time.h>
#include <windows.h>

int main()
{
    HANDLE hConsole;
    hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hConsole, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("\t\t\t\t---------------------DIGITAL CLOCK---------------------\n\n\n\n");
    printf("\t\t\t\t\t    Gaya, Bihar, India IST UTC+5:30");
    printf("\n\n");
    while (1)
    {
        time_t now = time(NULL);
        struct tm *t = localtime(&now);
        printf("\r\t\t\t\t\t\t\t%02d:%02d:%02d", t->tm_hour, t->tm_min, t->tm_sec);
        fflush(stdout);
        Sleep(1000);
    }
    printf("\n\n");
    return 0;
}