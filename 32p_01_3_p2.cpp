#include<iostream>

//다음과 같은 형태로의 함수 오버로딩은 문제가 있다. 어떠한 문제가 있는지 설명해보자.

int SimpleFunc(int a= 10)
{
    return a+1;
}
//위의 simplefunc에서 매개변수에 디폴트값을 지정해줬으므로
//simplefunc함수에 매개변수 없이 불러올 때
//위의 함수를 불러올지 아래의 함수를 불러올지 알 수 없다. 
int SimpleFunc(void)
{
    return 10;
}
