// 다음 표준함수를 호출하는 예제를 만들되, C++의 헤더를 선언해서 만들어보자. 
//그리고 예제의 내용은 상관이 없지만, 아래의 함수들을 최소 1회이상 호출해야 한다. 
//참고로 다음 함수들은 c언어의 경우 <string.h>에 선언되어 있다.
//strlen, strcat, strcpy, strcmp
#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    char a[10] = "hello ";
    char b[10] = "world!";

    cout<< strlen(a) << '\n';
    cout<< strcat(a,b) << '\n';
    cout<< strcpy(a,b) << '\n';
    cout<< strcmp(a,b) << '\n';

    return 0;
}
