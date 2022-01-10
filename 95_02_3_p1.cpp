#include<iostream>

using namespace std;

typedef struct __Point
{
    int xpos;
    int ypos;
}Point;
//2차원 평명상에서의 좌표를 표현할 수 있는 구조체를 다음과 같이 정의하였다. 
//위의 구조체를 기반으로 두 점의 합을 계산하는 함수를 다음의 형태로 정의하고
//(덧셈결과는 함수의 반환을 통해서 얻게 한다.)
//Point& PntAdder(const Point &p1, const Point &p2);
Point& PntAdder(const Point &p1, const Point &p2)
{
    Point *sum = new Point;
    Point &ref = *sum;
    ref.xpos = p1.xpos + p2.xpos;
    ref.ypos = p1.ypos + p2.ypos;
    return ref;
}
//임의의 두 점을 선언하여, 위 함수를 이용한 덧셈연산을 진행하는 main 함수를 정의해보자. 
// 단, 구조체 Point 관련 변수의 선언은 무조건new연산자를 이용해서 진행해야 하며,
// 할당된 메모리 공간의 소멸도 철저해야 한다. 
//참고로 이 문제의 해결을 위해서는 다음 두 질문에 답을 할 수 있어야 한다. 
// -동적할당 한 변수를 함수의 참조형 매개변수의 인자로 어떻게 전달해야 하는가?
// ㅡㅡㅡ참조변수를 생성해 동적할당 한 변수에 별명을 지어준다. 
// -함수 내에 선언된 변수를 참조형으로 반환하려면 해당 변수는 어떻게 선언해야 하는가?
// ㅡㅡㅡ
int main()
{
    Point * a = new Point;
    Point * b = new Point;
    Point &refa = *a;
    Point &refb = *b;
    refa.xpos = 2;
    refa.ypos = 4;
    refb.xpos = 3;
    refb.ypos = 9;

    Point &sum = PntAdder(refa, refb);
    cout<<sum.xpos << " " << sum.ypos;
    return 0;
}