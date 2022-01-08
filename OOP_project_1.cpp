#include<iostream>
#include<cstring>

using namespace std;
const int NAME_LEN=20;



void printMenu();       //메뉴 출력
void makeAccount();     //계좌개설을 위한 함수
void depositMoney();    //입  금
void withdrawMoney();   //출  금
void showAllAccInfo();  //잔액조회

enum {MAKE=1,DEPOSIT, WITHDRAW, INQUIRE, EXIT};

typedef struct
{
    int accId;
    int balance;
    char cusName[NAME_LEN];
}Account;

Account accArr[100];
int accNum =0;

int main()
{
    while(1)
    {
        int n;

        printMenu();
        cin >> n;
        cout<<'\n'<<'\n';
        switch(n)
        {
            case MAKE:
                makeAccount();
                break;
            case DEPOSIT:
                depositMoney();
                break;
            case WITHDRAW:
                withdrawMoney();
                break;
            case INQUIRE:
                showAllAccInfo();
                break;
            case EXIT:
                return 0;
        }

 
    }
    return 0;
}

void makeAccount()
{
    int id;
    int balance;
    char name[NAME_LEN];

    cout<<"[계좌개설]"<<'\n';
    cout<<"계좌ID: ";
    cin >> id;
    cout<<"이름: ";
    cin >> name;
    cout<<"입금액: ";
    cin >> balance;
    cout<<'\n'<<'\n';

    accArr[accNum].accId=id;
    accArr[accNum].balance=balance;
    strcpy(accArr[accNum].cusName, name);
    accNum++;
}
void depositMoney()
{
    int money;
    int id;
    cout<<"[입   금]"<<'\n';
    cout<<"계좌ID: ";
    cin >> id;
    cout<<"입금액: ";
    cin >> money;

    for(int i =0; i<accNum; i++)
    {
        if(accArr[i].accId == id)
        {
            accArr[i].balance+= money;
            cout<<"입금완료\n"<<'\n';
            return;
        }
    }
    cout<<"유효하지 않은 ID입니다.\n";

}
void withdrawMoney()
{
    int money;
    int id;
    cout<<"[출   금]"<<'\n';
    cout<<"계좌ID: ";
    cin >> id;
    cout<<"출금액: ";
    cin >> money;

    for(int i =0; i<accNum; i++)
    {
        if(accArr[i].accId == id)
        {
            if(accArr[i].balance < money)
            {
                cout<<"잔액부족"<<'\n';
                return;
            }
            accArr[i].balance-= money;
            cout<<"출금완료\n"<<'\n';
            return;
        }
    }
    cout<<"유효하지 않은 ID 입니다.\n"<<'\n';
}
void showAllAccInfo()
{
    for(int i =0; i<accNum; i++)
    {
        cout<<"계좌ID: "<<accArr[i].accId<<'\n';
        cout<<"이 름: "<<accArr[i].cusName<<'\n';
        cout<<"잔 액: "<<accArr[i].balance<<'\n'<<'\n'<<'\n';
    }
}

void printMenu()
{
    cout<< "ㅡㅡㅡㅡㅡMenuㅡㅡㅡㅡㅡㅡ"<<'\n';
    cout<< "1. 계좌개설"<<'\n';
    cout<< "2. 입 금"<<'\n';
    cout<< "3. 출 금"<<'\n';
    cout<< "4. 계좌정보 전체 출력"<<'\n';
    cout<< "5. 프로그램 종료"<<'\n';
    cout<< "선택: ";
}