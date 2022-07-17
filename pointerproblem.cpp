#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 2, c = 3, t;
    int *p;
    p = &a;
    *p=a;
    t=*p;
    a=b;
    b=c;
    c= t;
    cout << a << " " << b << " " << c << endl;
    return 0;
}