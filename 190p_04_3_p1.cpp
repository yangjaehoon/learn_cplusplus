#include<iostream>
//다음의 Point 클래스를 기반으로 하여 원을 의미하는 Circle 클래스를 정의하자.
using namespace std;

class Point 
{
private:
    int xpos, ypos;
public:
    Point(int x, int y)
        :xpos(x), ypos(y)
    {
    }
    void ShowPointInfo() const
    {
        cout<<"[" <<xpos<<", "<<ypos<<"]"<<endl;
    }
};
//Circle 객체에는 좌표상의 위치 정보(원의 중심좌표)와 반지름의 길이 정보를 저장 및 출력 할 수 있어야 한다.
//그리고 여러분이 정의한 Circle 클래스를 기반으로 Ring 클래스도 정의하자.

class Circle
{
private:
    int radius;
    Point center;
public:
    Circle(int x, int y,int r)
    :center(x,y), radius(r)
    {
    }
    void ShowCircleInfo() const
    {
        cout<<"radius: " <<radius<<endl;
        center.ShowPointInfo();
    }
};
//링은 두개의 원으로 표현 가능하므로 (바깥쪽 원과 안쪽 원), 두 개의 Circle 객체를 기반으로 정의가 가능하다.
//참고로 안쪽 원과 바깥쪽 원의 중심좌표가 동일하다면 두께가 일정한 링을 표현하는 셈이 되며,
//중심좌표가 동일하지 않다면 두께가 일정하지 않은 링을 표현하는 셈이 된다.
//이렇게 해서 클래스의 정의가 완료되었다면, 다음  main함수를 기반으로 실행을 시키자.
class Ring
{
private:
    Circle inner;
    Circle outter;
public:
    Ring(int x, int y, int r, int a, int b, int c)
        :inner(x, y, r), outter(a, b, c)
    {
    }
    void ShowRingInfo()
    {
        cout<<"Inner Circle Info..."<<endl;
        inner.ShowCircleInfo();
        cout<<"Outter Circle Info..."<<endl;
        outter.ShowCircleInfo();
    }
};
int main()
{
    Ring ring(1,1,4,2,2,9);
    ring.ShowRingInfo();
    return 0;
}