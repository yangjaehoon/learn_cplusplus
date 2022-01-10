#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;
//다음 세 함수를 이용해서 0이상 100미만의 난수를
// 총 5개 생성하는 예제를 만들되, c++의 헤더를 선언해서 작성해보자.
//참고로 C언어의 경우 time함수는 <time.h>에 선언되어 있고,
//rand함수와 srand함수는 <stdlib.h>에 선언되어 있다. 
//rand, srand, time

int main()
{
    srand(time(NULL));

    for(int i =0; i<5; i++)
    {
        cout<< rand() %100 << '\n';
    }

    return 0;
}