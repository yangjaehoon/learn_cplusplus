#include<iostream>
#include<cstring>

using namespace std;
//���ڿ� ������ ���ο� �����ϴ� Printer��� �̸��� Ŭ������ ����������.
//�� Ŭ������ �� ���� ����� ������ ����. 
// -���ڿ� ����
// -���ڿ� ���

//�Ʒ��� main�Լ��� ������ ���� �����ϴ� Printer Ŭ������ �����ϵ�,
//�̹����� ���� ��������� private����, ����Լ��� public���� ��������. 
class Printer
{
private:
    char arr[50];
public:
    void SetString(const char*);
    void ShowString();
};
int main()
{
    Printer pnt;
    pnt.SetString("Hello world!");
    pnt.ShowString();

    pnt.SetString("I love C++");
    pnt.ShowString();
    return 0;
}

void Printer::SetString(const char *a)
{
    strcpy(arr,a);
}
void Printer::ShowString()
{
    cout<<arr<<"\n";
}