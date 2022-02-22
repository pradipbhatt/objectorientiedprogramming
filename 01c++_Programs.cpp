#include <iostream>
using namespace std;

class BCTE
{
    int code;
    static int count;

public:
    void setcode()
    {
        count++;
        code = count;
    }
    void showcode()
    {
        cout << "student code:" << code << "/BCTE/2077" << endl;
    }
    static void showcount()
    {
        cout << "Records of " << count << "students found" << endl;
    }
};
int BCTE::count;
int main()
{
    system("cls");
    BCTE c1, c2;
    c1.setcode();
    c1.setcode();
    BCTE::showcount();
    BCTE c3;
    c3.setcode();
    BCTE::showcount();
    c1.showcode();
    c2.showcode();
    c3.showcode();
    return 0;
}
