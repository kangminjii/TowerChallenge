#pragma once
#include "Character.h"
#include "Monster.h"

Character minji = { 300, 10, 5 };
Monster M[11] = { {0,0,0},
	{30, 2, 2}, {50, 4, 4},{70, 8, 8},
	{100, 10, 10}, {120, 15, 15}, {140, 20, 20},
	{150, 30, 30}, {200, 40, 40}, {300, 50, 50}
};

extern int state = 1;
extern int stage = 1;
char input[1] = { 0 };

void Information(Monster M[], int stage);				// ���� â ���
int Character_Attack(int ret, Monster M[], int stage);	// 1 ���ΰ��� ���͸� ����
int Character_Defend(Monster M[], int stage);	// 2 ���ΰ��� ��ȣ�� ����
