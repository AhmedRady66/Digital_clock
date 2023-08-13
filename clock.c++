#include <iostream>
#include <windows.h>
using namespace std;

/**
 * Digital clock
 * hours - min - sec : variables.
 * system("cls") : is a way to clear the console screen on a Windows operating system.
 * is a function call that suspends the execution of the current thread for a specified amount of time.
 */
int main()
{
    int hours = 0, min = 0, sec = 0;

    cout << "Hours : ";
    cin >> hours;
    cout << "Minutes : ";
    cin >> min;
    cout << "Secondes : ";
    cin >> sec;

    while (true)
    {
        system("cls");
        if (sec > 59)
        {
            min++;
            sec = 0;
        }
        if (min > 59)
        {
            hours++;
            min = 0;
        }
        if (hours > 23)
        {
            hours = 0;
        }
        cout << hours << " : " << min << " : " << sec;
        sec++;
        Sleep(1000);
    }
    return 0;
}