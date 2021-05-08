#include <iostream>

using namespace std;

int main()
{
    int a=8;
    int b=3;
    float c;
    c=(float)a/(float)b;
    float* pp;
    pp=&c;

    cout << c << endl;
     cout << pp << endl;

    return 0;
}
