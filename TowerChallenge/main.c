#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <conio.h>
#include "Fight.h"
#include "Stage.h"
#include "Design.h"
#include "Monster.h"

void main()
{
	// �ܼ�â ������
	ConsoleUI();
	TitleImage();
	Sleep(5000);
	
	// ���� ����
	int state = 1;
	int stage = 1;
	int ret = 0;

	Monster M[11] = { {0,0,0},
	{30, 2, 2}, {50, 4, 4},{70, 8, 8},
	{100, 10, 10}, {120, 15, 15}, {140, 20, 20}, {160, 25, 25},
	{200, 30, 30}, {250, 40, 40}, {300, 50, 50}
	};

	
	stage1();
	// ���� ����
	while (state > 0)
	{
		system("mode con:cols=70 lines=40");
		system("cls");
		textcolor(Purple);		printf("���ΰ��� �����Դϴ�.\n\n");
		textcolor(Red);			printf("����");
		textcolor(White);		printf("�� ���Ͻø� 1, ");
		textcolor(DarkSkyBlue);	printf("��ȣ��");
		textcolor(White);		printf("�� ���Ͻø� 2�� �Է����ּ���.\n");

		// ������ �Է� �ޱ�
		// �Է°� 1�� 2�� �ƽ�Ű �ڵ�� 49�� 50
		state = _getch();

		// ������ ���� �Է��� ���� ��
		while (state != 49 && state != 50)
		{
			textcolor(DarkRed);		printf("�ٸ� ���ڸ� �Է��ϼ̽��ϴ�. ");
			textcolor(Red);			printf("1(����)");
			textcolor(White);		printf(" �Ǵ� ");
			textcolor(DarkSkyBlue); printf("2(��ȣ)");
			textcolor(White);		printf(" �� �Է����ּ���.\n");
			state = _getch();
		}

		// ���� �Ǵ� ��ȣ ���ý� ������ ȭ��
		switch (state)
		{
		case 49: // ����
			if (ret >= 2)	stage = ret; // stage �ܰ� ���
			
			if (ret == 1)	ret = Character_Attack(ret, M, stage);
			else			ret = Character_Attack(ret, M, stage);
			break;

		case 50: // ��ȣ
			if (ret >= 2)	stage = ret; // stage �ܰ� ���

			ret = Character_Defend(M, stage);
			break;
		}

		// �������� �̵�
		StageClear(ret);
	}
}