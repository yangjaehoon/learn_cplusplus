#include<iostream>
//참조자를 이용해서 다음 요구사항에 부합하는 함수를 각각 정의하여라
//인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
//인자로 전달된 int형 변수의 부호를 바꾸는 함수 
using namespace std;

void increase(int &n)
{
    n++;
}

void change(int &n)
{
    n = -n;
}

int main()
{
    int num =-5;
    increase(num);
    cout <<num << '\n';
    change(num);
    cout <<num << '\n';
    return 0;
}