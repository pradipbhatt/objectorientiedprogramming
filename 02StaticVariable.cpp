// Static variable callinf function...
#include <iostream>
#include <stdlib.h>
using namespace std;

class item
{
    static int count;
    float price;

public:
    void get_data(float a)
    {
        price = a;
        count++;
    }
    void show_count()
    {
        cout << "Count= \t " << count << endl;
    }
};

int item::count;

int main()
{
    float a;          
    item i1, i2, i3;
    system("cls");
    i1.show_count();
    i2.show_count();
    i3.show_count();

    i1.get_data(a);
    i2.get_data(a);
    i3.get_data(a);

    cout << endl  << "After reading data " << endl;

    i1.show_count();
    i2.show_count();
    i3.show_count();
}
