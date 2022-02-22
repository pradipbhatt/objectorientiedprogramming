#include <iostream>
#include <stdlib.h>
using namespace std;
class time
{
    int hour, minutes;

public:
    void get_time(int h, int m) // function declerartion/prototype
    {
        hour = h;
        minutes = m;
    }

    void display()
    {
        cout << hour << "hour and ";
        cout << minutes << "minutes." << endl;
    }
void time sum(time t1, time t2)
{
    minutes = t1.minutes + t2.minutes;
    hours = minutes / 60;
    minutes = hours % 60;
    hours = hours + t1.hours + t2.hours;
}

    
}


int main(int argc, char const *argv[])
{
    time T1, T2, T3;
    system("cls");
    T1.get_time(8, 50);
    T2.get_time(4, 40);
    T3.sum(T1, T2);
    T3.display();
    return 0;
}
