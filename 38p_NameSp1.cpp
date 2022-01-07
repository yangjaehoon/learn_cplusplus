#include<iostream>

namespace BestComImpl
{
    void SimpleFunc(void)
    {
        std::cout<<"BestCom이 정의한 함수 "<<std::endl;
    }

}

namespace ProgComImpl
{
    void SimpleFunc(void)
    {
        std::cout<<"ProgCom이 정의한 함수 "<<std::endl;
    }

}

int main(void)
{
    //    :: 범위지정 연산자
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();
    return 0;
}