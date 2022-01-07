#include<iostream>
//사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해 보자. 
using namespace std;

int main()
{
    char name[10];
    char number[12];
    cout << "이름과 전화번호를 입력하시오: ";
    cin >> name >> number;
    cout << name << ' '<<number;

    return 0;
}