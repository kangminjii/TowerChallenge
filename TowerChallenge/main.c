#define _CRT_SECURE_NO_WARNINGS
#include "Fight.h"
#include "TitleImage.h"

void main()
{
	// UI 꾸미기
	SetConsoleTitle(TEXT("Tower Challenge"));
	system("mode con:cols=80 lines=40");
	
	// 서사부분(스토리, 진행방식 등등)
	//TitleImage();
	//Sleep(5000);
	
	int state = 1;
	int ret = 0;

	while (state > 0)
	{
		system("mode con:cols=70 lines=40");
		system("cls");   
		textcolor(Purple);		printf("주인공의 차례입니다.\n\n"); 
		textcolor(Red);			printf("공격");
		textcolor(White);		printf("을 원하시면 1, ");
		textcolor(DarkSkyBlue);	printf("보호막");
		textcolor(White);		printf("을 원하시면 2를 입력해주세요.\n");
		
		// 선택지 입력 받기
		scanf("%d", &state);
		getchar();

		// 선택지 외의 입력을 받을 때
		while (state != 1 && state != 2)
		{
			textcolor(DarkRed);		printf("다른 숫자를 입력하셨습니다. "); 
			textcolor(Red);			printf("1(공격)");
			textcolor(White);		printf(" 또는 ");
			textcolor(DarkSkyBlue); printf("2(보호)");
			textcolor(White);		printf(" 를 입력해주세요.\n");
			scanf("%d", &state);
		}

		switch (state)
		{
			case 1: // 공격
				if(ret == 1)	ret = Character_Attack(ret);
				else			ret = Character_Attack(ret);
				break;

			case 2: // 보호
				ret = Character_Defend();
				break;
		}

		if (ret == -1)	break; // 주인공 사망 또는 스테이지 클리어
	}
}