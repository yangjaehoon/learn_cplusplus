#include "CarInline.h"

int main()
{
    Car run99;
    run99.InitMembers("run99", 100);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();
    run99.Break();
    run99.ShowCarState();
    return 0;
}

//������ �ϴ¹��
//g++ Car.cpp RacingMain.cpp -o �̸�
// ./�̸�
//���ڵ��Ͽ� �ٽ� ����
