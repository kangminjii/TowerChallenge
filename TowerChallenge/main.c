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
		printf("���ΰ��� ���� �����Դϴ�.\n");
		printf("������ ���Ͻø� 1, ��ȣ���� ���Ͻø� 5�� �Է����ּ���.\n");
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