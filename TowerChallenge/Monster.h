#pragma once
#include <time.h>
#include <stdlib.h>

typedef struct
{
	int health;
	int damage;
	int defense;

}Status;

typedef struct
{
	Status mon;

}Monster;

Monster M1, M2, M3, M4, M5, M6, M7, M8, M9, M10;


// ���ο� ���� ����� ����
// 1. �� ���� +@
// 2. M1���� �������� +@ > �ܰ谡 �ö󰥼��� �߰��Ǵ� ���� Ŀ���Բ�
// 3. ���� ����

//Monster M1 = { 50, 2, 2 };
//Monster M2, M3; // M4, M5, M6, M7, M8, M9, M10;


int Random_Increase_Health();
int Random_Increase_dam_def();
void Monster_Second();
void Monster_Third();
//void Monster_Fourth();
//void Monster_Fifth();
//void Monster_Sixth();
//void Monster_Seventh();
//void Monster_Eighth();
//void Monster_Ninth();
//void Monster_Tenth();