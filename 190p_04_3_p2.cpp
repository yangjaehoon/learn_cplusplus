#include<iostream>
#include<string>

using namespace std;
enum{CLERK, SENIOR, ASSIST, MANAGER};
/*
명함을 의미하는 NameCard 클래스를 정의해보자. 이 클래스에는 다음의 정보가 저자오디어야 한다. 
ㅡ성명
ㅡ회사이름
ㅡ전화번호
ㅡ직급
단, 직급 정보를 제외한 나머지는 문자열의 형태로 저장을 하되, 길이에 딱 맞는 메모리 공간을 할당 받는 형태로 정의하자(동적할당)
직급 정보는 int형 멤버변수를 선언해서 저장을 하되, 아래의 enum 선언을 활용해야 한다. 
    enum{CLERK, SENIOR, ASSIST, MANAGER};
위의 enum 선언에서 정의된 상수는 순서대로 사원, 주임 , 대리 , 과장을 뜻한다. 
그럼 다음 main함수와 실행의 예를 참조하여, 이 문제에서 원하는 형태대로 NameCard 클래스를 완성해보자.
*/
class NameCard
{
private:
    char *name;
    char *company;
    char *phone;
    int *position;
public:
    NameCard()
    {
        name = new char[len(n)];
        company = new char[len(c)];
        phone =  new char[len(p)];
        position = new int;
    }
    ShowNameCardInfo()
    {

    }
};
int main()
{
    NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
    NameCard manSENIOR("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
    NameCard manAssist("Kim", "SoGoodComp", "010-5555-6666", COMP_POS::ASSIST);
    manClerk.ShowNameCardInfo();
    manSENIOR.ShowNameCardInfo();
    manAssist.ShowNameCardInfo();
    return 0;
}