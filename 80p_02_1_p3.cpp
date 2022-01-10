#include<iostream>

using namespace std;

void SwapPointer(int *(&pref1),int *(&pref2))
{
    //int* &n = ptr1;
    int *n = pref1;
    cout<<pref1 << " " <<*pref1 << " "<< pref2<< " "<< *pref2 << " (swap)"<<'\n';
    pref1 = pref2;
    cout<<pref1 << " " <<*pref1 << " "<< pref2<< " "<< *pref2 << " (swap)"<<'\n';
    pref2 = n;
    cout<<pref1 << " " <<*pref1 << " "<< pref2<< " "<< *pref2 << " (swap)"<<'\n';
}
int main()
{
    int num1 =5;
    int *ptr1 = &num1;
    int num2 = 10;
    int *ptr2 = &num2;

    cout<<ptr1 << " " <<*ptr1 << " "<< ptr2<< " "<< *ptr2 <<'\n';
    SwapPointer(ptr1,ptr2);
    cout<<ptr1 << " " <<*ptr1 << " "<< ptr2<< " "<< *ptr2 <<'\n';
}
//위의 코드를 보면 ptr1과 ptr2가 각각 num1과 num2를 가리키고 있다. 
//이 때 ptr1과 ptr2를 대상으로 다음과 같이 함수를 호출하고 나면,
// SwapPointer(ptr1, ptr2);

//ptr1과 ptr2가 가리키는 대상이 서로 바뀌도록 SwapPointer 함수를 정의해 보자 