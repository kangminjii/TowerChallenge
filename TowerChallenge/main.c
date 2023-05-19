#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include "Fight.h"




void main()
{
	SetConsoleTitle(TEXT("Tower Challenge"));

	int floor = 1;
	
	//while (1)
	//{
		printf("주인공의 공격 차례입니다.\n");
		printf("공격을 원하시면 1, 보호막을 원하시면 5를 입력해주세요.\n");
		scanf("%d", &state);

		if (state == 1)
		{
			state = Character_Attack_Yes(state);

			scanf("%d", &state);


		}
		else if (state == 5)
		{

		}

















	//}












}