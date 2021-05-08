#include <iostream>

using namespace std;

int main()
{
    int int_a=1000;
    int int_b=3;
    (++int_a)+=int_a+(int_a++);
    cout<<int_a<<endl;


    float int_count;
    int int_count1;
    //int_a+=int_b;
    //cout << "加法結果:" <<int_a<< endl;

    /*int_a-=int_b;
    cout << "減法結果:" <<int_a<< endl;

    int_a*=int_b;
    cout << "乘法結果:" <<int_a<< endl;

    int_a/=int_b;
    cout << "除法結果:" <<int_a<< endl;

    int_a%=int_b;
    cout << "餘數結果:" <<int_a<< endl;
    */


    //int_count=(float)int_a/(float)int_b;


    /*cout << "加法結果:" <<(int_a+int_b)<< endl;
    cout << "減法結果:" <<(int_a-int_b)<< endl;
    cout << "乘法結果:" <<(int_a*int_b)<< endl;
    cout << "除法結果:" <<(int_count)<< endl;
    cout << "餘數結果:" <<(int_a%int_b)<< endl;*/

    return 0;
}
