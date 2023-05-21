#pragma once
#include <stdio.h>
#include "Stage.h"
#include "Design.h"

void stage1() // 고블린1
{
	system("mode con:cols=70 lines=40");
	system("cls");
	textcolor(DarkGreen);
	printf("1층에 들어왔습니다.\n\n");
	printf("무기를 갖고 있지 않은 고블린이 등장했습니다.\n\n");
	Sleep(3000);
}

void stage2() // 고블린2
{
	printf("2층에 들어왔습니다.\n\n");
	printf("1층에서 패배한 고블린이 무기의 중요성을 깨닫고,\n주변 나무에서 떨어진 나뭇가지로 무기를 만들었습니다.\n막대기를 만들어온 고블린이 당신을 노려봅니다.\n\n");
	Sleep(3000);
}

void stage3() // 고블린3
{
	printf("3층에 들어왔습니다.\n\n");
	printf("2층에서 패배한 고블린은 복수심에 불타오릅니다.\n뭉툭한 막대기를 날카롭게 갈아 나무 검에 만드는데 성공했습니다.\n나무검을 쥔 고블린이 이번에는 이길꺼라는 눈빛으로 당신을 쳐다봅니다.\n\n");
	Sleep(3000);
}

void stage4() // 오크
{
	printf("4층에 들어왔습니다.\n\n");
	printf("힘겹게 고블린과 사투를 벌인 후 ");
	Sleep(3000);
}

void stage5() // 미노타우르스
{
	printf("\n\n");
	Sleep(3000);
}

void stage6() // 엘프
{
	printf("\n\n");
	Sleep(3000);
}

void stage7() // 다크엘프
{
	printf("\n\n");
	Sleep(3000);
}

void stage8() // 늑대인간
{
	printf("\n\n");
	Sleep(3000);
}

void stage9() // 드래곤
{
	printf("\n\n");
	Sleep(3000);
}

void stage10() // 악마
{
	printf("\n\n");
	Sleep(3000);
}

void StageClear(int ret)
{
	system("mode con:cols=60 lines=30");
	system("cls");
	textcolor(DarkGreen);

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
	case -1: // 주인공 사망
		break;
	}
}