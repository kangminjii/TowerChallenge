#pragma once
#include <stdio.h>
#include "Stage.h"

enum ColorType {
	Black,  	//0
	DarkBlue,	//1
	DarkGreen,	//2
	DarkSkyBlue,//3
	DarkRed,  	//4
	DarkPurple,	//5
	DarkYellow,	//6
	Gray,		//7
	DarkGray,	//8
	Blue,		//9
	Green,		//10
	SkyBlue,	//11
	Red,		//12
	Purple,		//13
	Yellow,		//14
	White		//15
} COLOR;

void stage1() // 고블린1
{
	system("mode con:cols=60 lines=60");
	system("cls");
	textcolor(White);
	printf("타워의 1층에 들어왔습니다.\n\n");
	printf("무기를 갖고 있지 않은 고블린이 등장했습니다!\n\n");
	textcolor(DarkGreen);
	Image("goblin.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage2() // 고블린2
{
	textcolor(White);
	printf("2층에 들어왔습니다.\n\n");
	printf("1층에서 패배한 고블린이 무기의 중요성을 깨닫고,\n주변을 탐색한 고블린은 무기를 장착했습니다.\n무기를 들고 온 고블린이 당신을 노려봅니다!\n\n");
	textcolor(DarkGreen);
	Image("goblin2.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage3() // 고블린3
{
	textcolor(White);
	printf("3층에 들어왔습니다.\n\n");
	printf("2층에서 패배한 고블린은 복수심에 불타오릅니다.\n분노에 가득 찬 고블린이 이번에는 이길꺼라는 눈빛으로 당신을 쳐다봅니다!\n\n");
	textcolor(DarkGreen);
	Image("goblin3.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage4() // 오크
{
	textcolor(White);
	printf("4층에 들어왔습니다.\n\n");
	printf("고블린의 시체를 뒤로하고 위로 올라왔습니다.\n그곳에는 고블린보다 덩치가 2배가 되는 오크가 서있습니다!\n\n");
	textcolor(Green);
	Image("oak.txt");
	printf("\n\n\n\n");
	system("PAUSE");
}

void stage5() // 미노타우르스
{
	textcolor(White);
	printf("5층에 들어왔습니다.\n\n");
	printf("밥을 못 먹은 미노타우르스가 콧바람을 내며 당신을 쳐다봅니다!\n\n");
	textcolor(DarkBlue);
	Image("mino.txt");
	printf("\n\n\n\n");
	system("PAUSE");
}

void stage6() // 엘프
{
	textcolor(White);
	printf("6층에 들어왔습니다.\n\n");
	printf("식사중인 엘프가 당신을 보고 깜짝 놀랍니다.\n식사를 방해 받은 엘프가 분노하며 당신을 쳐다봅니다!\n\n");
	Image("elf.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage7() // 다크엘프
{
	textcolor(White);
	printf("7층에 들어왔습니다.\n\n");
	printf("6층의 엘프의 언니인 다크엘프를 만났습니다.\n다크엘프는 동생의 죽음의 원인인 당신을 노려봅니다!\n\n");
	textcolor(DarkGray);
	Image("darkelf.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage8() // 늑대인간
{
	textcolor(White);
	printf("8층에 들어왔습니다.\n\n");
	printf("8층에 도착하니 보름달이 뜬 하늘이 보입니다.\n그 아래에 누워 있던 늑대인간이 당신에게 달려옵니다!\n\n");
	textcolor(DarkGray);
	Image("werewolf.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage9() // 뱀파이어
{
	textcolor(White);
	printf("9층에 들어왔습니다.\n\n");
	printf("9층에 들어오니 8층과 비슷하게 주변이 어둡습니다.\n옆에 있는 벽을 더듬어 앞을 가던 중 빨간 눈빛을 발견합니다.\n뱀파이어가 활짝 웃으며 당신에게 달려옵니다!\n\n");
	textcolor(DarkRed);
	Image("vampire.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage10() // 드래곤
{
	printf("10층에 들어왔습니다.\n\n");
	printf("10층의 바닥과 공간이 모두 금화로 뒤덮여있습니다.\n금화 몇개를 챙기려하는 찰나에, 지진과 같이 땅이 흔들립니다.\n금화 안에서 드래곤이 나타났습니다!\n\n");
	textcolor(DarkYellow);
	Image("dragon.txt");
	printf("\n\n");
	system("PAUSE");
}

void stageEnd() // 엔딩
{
	system("mode con:cols=100 lines=30");
	textcolor(Gray);
	printf("\t\t축하드립니다! 타워의 모든 층을 돌파하셨습니다!\n\n\n\n\n");
	Image("ending.txt");
	printf("\n\n\n\n\n\n");
	Sleep(6000);
}

void StageClear(int ret)
{
	system("mode con:cols=60 lines=60");
	system("cls");
	
	// 스테이지 변경
	switch (ret)
	{
	case 2:
		stage2();
		system("cls");
		break;
	case 3:
		stage3();
		system("cls");
		break;
	case 4:
		stage4();
		system("cls");
		break;
	case 5:
		stage5();
		system("cls");
		break;
	case 6:
		stage6();
		system("cls");
		break;
	case 7:
		stage7();
		system("cls");
		break;
	case 8:
		stage8();
		system("cls");
		break;
	case 9:
		stage9();
		system("cls");
		break;
	case 10:
		stage10();
		system("cls");
		break;
	case 11: // 엔딩
		stageEnd();
		system("cls");
	case -1: // 주인공 사망
		break;
	}
}