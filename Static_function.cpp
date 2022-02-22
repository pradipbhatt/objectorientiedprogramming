#include <iostream>
#include <stdlib.h>
using namespace std;

class BCTE // BCTE named class is created
{
    int code;
    static int count; // Count is static type data of integer form

public:
    void setcode() // setcode function is defined
    {
        count++;
        code = count;
    }

    void showcode() // showcode function is defined
    {
        cout << "Student code" << code << "/BCTE/077." << endl;
    }

    static void showcount()
    {
        cout << "Records of " << count << "Student fund." << endl;
    }
};
int BCTE::count;


int main()
{
    BCTE c1, c2;
    system("cls");
    c1.setcode();
    c2.setcode();

    BCTE::showcount();

    BCTE c3;
    c3.setcode();

    BCTE::showcount();

    c1.showcode();
    c2.showcode();
    c3.showcode();
}
