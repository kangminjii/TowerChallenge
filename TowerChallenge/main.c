#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include "Fight.h"
#include "Stage.h"

void main()
{
	// 콘솔창 디자인
	ConsoleUI();
	Image("tower.txt");
	Sleep(5000);
	
	// 변수 선언
	int state = 1;	// 공격 또는 보호 구분
	int stage = 1;  // 현재 몇층인지
	int ret = 0;	// fight.c 함수의 반환값

	Monster M[11] = { {0,0,0},
	{30, 2, 2}, {50, 4, 4},{70, 8, 8},
	{100, 10, 10}, {120, 15, 15}, {140, 20, 20}, {160, 25, 25},
	{200, 30, 30}, {250, 40, 40}, {300, 50, 50}
	};

	// 전투 시작
	//textcolor(DarkGreen);		stage1();
	while (state > 0)
	{
		system("mode con:cols=58 lines=40");
		system("cls");
		textcolor(Purple);		printf("주인공의 차례입니다.\n\n");
		textcolor(Red);			printf("공격");
		textcolor(White);		printf("을 원하시면 1, ");
		textcolor(DarkSkyBlue);	printf("보호막");
		textcolor(White);		printf("을 원하시면 2를 입력해주세요.\n");

		// 선택지 입력 받기
		// 입력값 1과 2는 아스키 코드상 49와 50
		state = _getch();

		// 선택지 외의 입력을 받을 때
		while (state != 49 && state != 50)
		{
			textcolor(DarkRed);		printf("다른 숫자를 입력하셨습니다. ");
			textcolor(Red);			printf("1(공격)");
			textcolor(White);		printf(" 또는 ");
			textcolor(DarkSkyBlue); printf("2(보호)");
			textcolor(White);		printf(" 를 입력해주세요.\n");
			state = _getch();
		}

		// 공격 또는 보호 선택시 나오는 화면
		switch (state)
		{
		case 49: // 공격
			if (ret >= 2)	stage = ret; // stage 단계 상승
			
			if (ret == 1)	ret = Character_Attack(ret, M, stage);
			else			ret = Character_Attack(ret, M, stage);
			break;

		case 50: // 보호
			if (ret >= 2)	stage = ret; // stage 단계 상승

			ret = Character_Defend(M, stage);
			break;
		}
		
		// 캐릭터 사망
		if (ret == -1)	break; // 주인공 사망

		// 스테이지 이동
		StageClear(ret);
		if (ret == 11)	break; // 모든 층 클리어
	}
}