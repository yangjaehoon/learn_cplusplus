#include<iostream>
//다음 main 함수에서 필요로 하는 swap 함수를 오버로딩 해서 구현해보자.
using namespace std;


void swap(int* a,int* b)
{
    int n;
    n =*a;
    *a = *b;
    *b = n;
}
void swap(char* a,char* b)
{
    char n;
    n =*a;
    *a = *b;
    *b = n;
}

void swap(double* a,double* b)
{
    double n;
    n =*a;
    *a = *b;
    *b = n;
}

int main()
{
    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    cout <<num1<<' '<<num2<<'\n';

    char ch1 = 'A', ch2='z';
    swap(&ch1, &ch2);
    cout<<ch1<<' '<<ch2<<'\n';

    double dbl1 = 1.111, dbl2=5.555;
    swap(&dbl1, &dbl2);
    cout << dbl1 <<' '<<dbl2<<'\n';

    return 0;
}