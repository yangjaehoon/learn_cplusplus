#include<iostream>

using namespace std;
//2차원 평면상에서의 좌표를 표현할 수 있는 구조체를 다음과 같이 정의 하였다.
struct Point
{
    int xpos;
    int ypos;

    void MovePos(int x, int y)
    {
        xpos+=x;
        ypos+=y;
    }
    void AddPoint(const Point &pos)
    {
        xpos+=pos.xpos;
        ypos+=pos.ypos;
    }
    void ShowPosition()
    {
        cout<< "[" << xpos<<" ,"<< ypos <<"]\n";
    }
};
//위의 구조체를 기반으로 다음의 함수를 정의하고자 한다. 
//void MovePos(int x, int y);
//void AddPoint(const Point &pos);
//void ShowPosition();
// 단, 위의 함수들을 구조체 안에 정의를 해서 
//다음의 형태로 main함수를 구성할 수 있어야 한다. 

int main()
{
    Point pos1 = {12,4};
    Point pos2 = {20, 30};

    pos1.MovePos(-7, 10);
    pos1.ShowPosition(); //[5,14] 출력

    pos1.AddPoint(pos2);
    pos1.ShowPosition(); //[25,44] 출력
    return 0;
}