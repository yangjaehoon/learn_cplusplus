#include<iostream>
using namespace std;
//계산기 기능의 calculator 클래스를 정의해보자.
//기본적으로 지니는 기능은 덧셈, 뺄셈, 곱셈 , 나눗셈
//연산을 할 때마다 어떠한 연산을 몇 번 수행했는지 기록되어야 한다. 
//아래의 main 함수와 실행의 예에 부합하는 Calculator 클래스를 정의하면 된다. 
//단, 멤버변수는private로, 멤버함수는 public으로 선언하자. 
class Calculator
{//클래스는 접근제어 지시자를 선언 안하면 private
private:
    int add;
    int div;
    int min;
    int mul;
public:
    void Init();
    double Add(double, double);
    double Div(double, double);
    double Min(double, double);
    double Mul(double, double);
    void ShowOPCount();
};

int main()
{
    Calculator cal;
    cal.Init();
    cout<<"3.2 +2.4 = "<<cal.Add(3.2, 2.4)<<endl;
    cout<<"3.5 /1.7 = "<<cal.Div(3.5, 1.7)<<endl;
    cout<<"2.2 -1.5 = "<<cal.Min(2.2, 1.5)<<endl;
    cout<<"4.9 /1.2 = "<<cal.Div(4.9, 1.2)<<endl;
    cal.ShowOPCount();
    return 0;
}

void Calculator:: Init()
{
    add =0;
    div =0;
    min =0;
    mul =0;
}
double Calculator:: Add(double a, double b)
{
    add++;
    return a+b;
}
double Calculator:: Div(double a, double b)
{
    div++;
    return a/b;
}
double Calculator:: Min(double a, double b)
{
    min++;
    return a-b;
}
double Calculator:: Mul(double a, double b)
{
    mul++;
    return a*b;
}
void Calculator:: ShowOPCount()
{
    cout<< "덧셈: "<<add << " 뺄셈: "<<min<<" 곱셈: "<<mul<<" 나눗셈: "<<div;
}