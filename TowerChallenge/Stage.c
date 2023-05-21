#pragma once
#include <stdio.h>
#include "Stage.h"
#include "Design.h"

void stage1() // ���1
{
	system("mode con:cols=70 lines=40");
	system("cls");
	textcolor(DarkGreen);
	printf("1���� ���Խ��ϴ�.\n\n");
	printf("���⸦ ���� ���� ���� ����� �����߽��ϴ�.\n\n");
	Sleep(3000);
}

void stage2() // ���2
{
	printf("2���� ���Խ��ϴ�.\n\n");
	printf("1������ �й��� ����� ������ �߿伺�� ���ݰ�,\n�ֺ� �������� ������ ���������� ���⸦ ��������ϴ�.\n����⸦ ������ ����� ����� ������ϴ�.\n\n");
	Sleep(3000);
}

void stage3() // ���3
{
	printf("3���� ���Խ��ϴ�.\n\n");
	printf("2������ �й��� ����� �����ɿ� ��Ÿ�����ϴ�.\n������ ����⸦ ��ī�Ӱ� ���� ���� �˿� ����µ� �����߽��ϴ�.\n�������� �� ����� �̹����� �̱沨��� �������� ����� �Ĵٺ��ϴ�.\n\n");
	Sleep(3000);
}

void stage4() // ��ũ
{
	printf("4���� ���Խ��ϴ�.\n\n");
	printf("����� ����� ������ ���� �� ");
	Sleep(3000);
}

void stage5() // �̳�Ÿ�츣��
{
	printf("\n\n");
	Sleep(3000);
}

void stage6() // ����
{
	printf("\n\n");
	Sleep(3000);
}

void stage7() // ��ũ����
{
	printf("\n\n");
	Sleep(3000);
}

void stage8() // �����ΰ�
{
	printf("\n\n");
	Sleep(3000);
}

void stage9() // �巡��
{
	printf("\n\n");
	Sleep(3000);
}

void stage10() // �Ǹ�
{
	printf("\n\n");
	Sleep(3000);
}

void StageClear(int ret)
{
	system("mode con:cols=60 lines=30");
	system("cls");
	textcolor(DarkGreen);

	// �������� ����
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
	case -1: // ���ΰ� ���
		break;
	}
}