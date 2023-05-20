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


// 새로운 몬스터 만드는 기준
// 1. 전 몬스터 +@
// 2. M1값을 기준으로 +@ > 단계가 올라갈수록 추가되는 값이 커지게끔
// 3. 직접 지정

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