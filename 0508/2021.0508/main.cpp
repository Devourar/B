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
    //cout << "�[�k���G:" <<int_a<< endl;

    /*int_a-=int_b;
    cout << "��k���G:" <<int_a<< endl;

    int_a*=int_b;
    cout << "���k���G:" <<int_a<< endl;

    int_a/=int_b;
    cout << "���k���G:" <<int_a<< endl;

    int_a%=int_b;
    cout << "�l�Ƶ��G:" <<int_a<< endl;
    */


    //int_count=(float)int_a/(float)int_b;


    /*cout << "�[�k���G:" <<(int_a+int_b)<< endl;
    cout << "��k���G:" <<(int_a-int_b)<< endl;
    cout << "���k���G:" <<(int_a*int_b)<< endl;
    cout << "���k���G:" <<(int_count)<< endl;
    cout << "�l�Ƶ��G:" <<(int_a%int_b)<< endl;*/

    return 0;
}
