#include<iostream>
//앞서 소개한 예제 RefSwap.cpp의 SwapByRef2 함수를 다음의 형태로 호출하면 컴파일 에러가 발생한다. 
//SwqpByRef2(23,45);
//컴파일 에러가 발생하는 이유가 무엇인지 설명해보자
using namespace std;

void SwapByRef2(int &ref1, int &ref2)//참조자는 선언과 동시에 상수가 아닌 변수가 할당되야 하는데 SwqpByRef2(23,45)
{                                    //SwqpByRef2(23,45)이 함수의 인자는 상수이기 때문에 정상작동하지 않는다. 
    int temp=ref1;
    ref1=ref2;
    ref2=temp;
}

int main()
{
    int val1=10;
    int val2=20;

    SwapByRef2(val1, val2);
    cout<<"val1: "<<val1<<endl;
    cout<<"val2: "<<val2<<endl;
    return 0;
}
