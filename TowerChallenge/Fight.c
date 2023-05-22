#pragma once
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include <time.h>
#include <stdlib.h>
#include "Monster.h"
#include "Character.h"
#include "Fight.h"
#include "Design.h"


// 변수 설정
Character minji = { 100, 20, 20 };
Monster M[11] = { {0,0,0},
	{30, 2, 2}, {50, 4, 4},{70, 8, 8},
	{100, 10, 10}, {120, 15, 15}, {140, 20, 20}, {160, 25, 25},
	{200, 30, 30}, {250, 40, 40}, {300, 50, 50}
};

extern int state = 1;
extern int stage = 1;
char input[1] = { 0 };

// 글자색 변경
void textcolor(int colorNum)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}

// 정보창 출력
void Information(Monster M[], int stage)
{
	textcolor(White);
	printf("\n--------------------------------------------------------\n");
	printf("l 플레이어\thp : %3d / attack : %3d / defend : %3d l\n", minji.health, minji.damage, minji.defense);
	printf("--------------------------------------------------------\n");
	printf("\n--------------------------------------------------------\n");
	printf("l 몬스터 \thp : %3d / attack : %3d / defend : %3d l\n", M[stage].health, M[stage].damage, M[stage].defense);
	printf("--------------------------------------------------------\n\n\n");
}

// 1 주인공이 몬스터를 공격
int Character_Attack(int ret, Monster M[], int stage)
{
	srand(time(NULL));
	int random = rand() % 2 + 1; // 1 or 2

	// 주인공 공격
	textcolor(Red);
	printf("\n\n'공격'을 선택하셨습니다.\n");
	printf("'%d'만큼의 데미지가 몬스터에게 가해졌습니다.\n", minji.damage);
	
	// 몬스터가 보호막이 있을 때
	if (ret == 1)
	{
		if (minji.damage > M[stage].defense)
		{
			printf("몬스터의 보호막으로 인해 실제 '%d'만큼만 공격을 받습니다!\n", minji.damage - M[stage].defense);
			M[stage].health -= minji.damage - M[stage].defense;
		}
		else
		{
			textcolor(Blue);
			printf("몬스터는 플레이어의 공격을 회피합니다!\n");
		}
	}
	// 몬스터가 보호막이 없을 때
	else
	{
		M[stage].health -= minji.damage;
	}
	
	if (M[stage].health < 0)	 M[stage].health = 0;  // 체력 0으로 표시

	Information(M, stage);
	Sleep(3000);

	if (M[stage].health <= 0)
	{
		stage++;
		system("cls");
		textcolor(Yellow);		printf("\n\n\n   ☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★\n");
		textcolor(Yellow);		printf("   ☆★☆★"); 
		textcolor(White);		printf(" 축하합니다!몬스터가 죽었습니다!");
		textcolor(Yellow);		printf(" ★☆★\n   ☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★☆★\n\n\n");
		system("PAUSE");
		return stage;
		// 다음 스테이지 이동
	}

	// 몬스터 공격
	textcolor(Purple);
	printf("\n\n몬스터의 차례입니다.\n\n");
	if (random == 1)
	{
		textcolor(Red);
		printf("몬스터가 '공격'을 선택했습니다.\n");
		printf("'%d'만큼의 데미지가 플레이어에게 가해졌습니다.\n", M[stage].damage);
		minji.health -= M[stage].damage;

		if (minji.health < 0)	minji.health = 0;  // 체력 0으로 표시

		Information(M, stage);

		if (minji.health <= 0)
		{
			Sleep(2000);
			system("cls");
			textcolor(DarkRed);
			printf("격렬한 싸움 끝에 몬스터에게 패배하고 말았습니다..\n\n\n");
			return -1;
			// 턴제 공격 종료, 재시작
		}
		textcolor(White);
		system("PAUSE");
		return 0;
	}
	// 몬스터 보호
	else if (random == 2)
	{
		textcolor(DarkSkyBlue);
		printf("몬스터가 '보호'를 선택했습니다.\n");
		printf("다음 턴에 플레이어의 공격이 '%d'만큼 상쇄됩니다.\n\n\n", M[stage].defense);
		textcolor(White);
		system("PAUSE");
		return 1;
	}
}

// 2 주인공이 보호를 선택
int Character_Defend(Monster M[], int stage)
{
	srand(time(NULL));
	int random = rand() % 2 + 1; // 1 or 2

	// 주인공 보호
	textcolor(DarkSkyBlue);
	printf("\n\n'보호'를 선택하셨습니다.\n");
	printf("다음 턴에 몬스터의 공격이 '%d'만큼 상쇄됩니다.\n", minji.defense);
	Sleep(3000);

	// 몬스터 공격
	textcolor(Purple);
	printf("\n\n몬스터의 차례입니다.\n\n");
	if (random == 1)
	{
		textcolor(Red);
		printf("몬스터가 '공격'을 선택했습니다.\n");
		printf("'%d'만큼의 데미지가 플레이어에게 가해졌습니다.\n", M[stage].damage);
		
		if (M[stage].damage > minji.defense)
		{
			printf("플레이어의 보호막으로 인해 실제 '%d'만큼만 공격을 받습니다!\n", M[stage].damage - minji.defense);
			minji.health -= M[stage].damage - minji.defense;
		}
		else
		{
			textcolor(Blue);
			printf("보호막에 의해 0의 데미지를 받았습니다!\n");
		}

		if (minji.health < 0)	minji.health = 0;  // 체력 0으로 표시

		Information(M, stage);

		if (minji.health <= 0)
		{
			Sleep(2000);
			system("cls");
			textcolor(DarkRed);
			printf("격렬한 싸움 끝에 몬스터에게 패배하고 말았습니다..\n\n\n");
			return -1;
			// 턴제 공격 종료, 재시작
		}
		textcolor(White);
		system("PAUSE");
		return 0;
	}
	// 몬스터 보호
	else if (random == 2)
	{
		textcolor(DarkSkyBlue);
		printf("몬스터가 '보호'를 선택했습니다.\n");
		printf("다음 턴에 플레이어의 공격이 '%d'만큼 상쇄됩니다.\n\n\n", M[stage].defense);
		textcolor(White);
		system("PAUSE");
		return 1;
	}
}