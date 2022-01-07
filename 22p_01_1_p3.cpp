#include<iostream>
//숫자를 하나 입력 받아서 그 숫자에 해당하는 구구단을 출력하는 프로그램을 작성해 보자. 
using namespace std;

int main()
{
    int n;
    cout << "출력할 구구단 숫자를 입력하시오: ";
    cin >> n;
    for(int i =1; i<10; i++)
    {
        cout << n << " * " << i << " = " << n*i << '\n';
    }

    return 0;
}