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

void stage1() // ���1
{
	system("mode con:cols=60 lines=60");
	system("cls");
	textcolor(White);
	printf("Ÿ���� 1���� ���Խ��ϴ�.\n\n");
	printf("���⸦ ���� ���� ���� ����� �����߽��ϴ�!\n\n");
	textcolor(DarkGreen);
	Image("goblin.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage2() // ���2
{
	textcolor(White);
	printf("2���� ���Խ��ϴ�.\n\n");
	printf("1������ �й��� ����� ������ �߿伺�� ���ݰ�,\n�ֺ��� Ž���� ����� ���⸦ �����߽��ϴ�.\n���⸦ ��� �� ����� ����� ������ϴ�!\n\n");
	textcolor(DarkGreen);
	Image("goblin2.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage3() // ���3
{
	textcolor(White);
	printf("3���� ���Խ��ϴ�.\n\n");
	printf("2������ �й��� ����� �����ɿ� ��Ÿ�����ϴ�.\n�г뿡 ���� �� ����� �̹����� �̱沨��� �������� ����� �Ĵٺ��ϴ�!\n\n");
	textcolor(DarkGreen);
	Image("goblin3.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage4() // ��ũ
{
	textcolor(White);
	printf("4���� ���Խ��ϴ�.\n\n");
	printf("����� ��ü�� �ڷ��ϰ� ���� �ö�Խ��ϴ�.\n�װ����� ������� ��ġ�� 2�谡 �Ǵ� ��ũ�� ���ֽ��ϴ�!\n\n");
	textcolor(Green);
	Image("oak.txt");
	printf("\n\n\n\n");
	system("PAUSE");
}

void stage5() // �̳�Ÿ�츣��
{
	textcolor(White);
	printf("5���� ���Խ��ϴ�.\n\n");
	printf("���� �� ���� �̳�Ÿ�츣���� ��ٶ��� ���� ����� �Ĵٺ��ϴ�!\n\n");
	textcolor(DarkBlue);
	Image("mino.txt");
	printf("\n\n\n\n");
	system("PAUSE");
}

void stage6() // ����
{
	textcolor(White);
	printf("6���� ���Խ��ϴ�.\n\n");
	printf("�Ļ����� ������ ����� ���� ��¦ ����ϴ�.\n�Ļ縦 ���� ���� ������ �г��ϸ� ����� �Ĵٺ��ϴ�!\n\n");
	Image("elf.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage7() // ��ũ����
{
	textcolor(White);
	printf("7���� ���Խ��ϴ�.\n\n");
	printf("6���� ������ ����� ��ũ������ �������ϴ�.\n��ũ������ ������ ������ ������ ����� ������ϴ�!\n\n");
	textcolor(DarkGray);
	Image("darkelf.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage8() // �����ΰ�
{
	textcolor(White);
	printf("8���� ���Խ��ϴ�.\n\n");
	printf("8���� �����ϴ� �������� �� �ϴ��� ���Դϴ�.\n�� �Ʒ��� ���� �ִ� �����ΰ��� ��ſ��� �޷��ɴϴ�!\n\n");
	textcolor(DarkGray);
	Image("werewolf.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage9() // �����̾�
{
	textcolor(White);
	printf("9���� ���Խ��ϴ�.\n\n");
	printf("9���� ������ 8���� ����ϰ� �ֺ��� ��ӽ��ϴ�.\n���� �ִ� ���� ����� ���� ���� �� ���� ������ �߰��մϴ�.\n�����̾ Ȱ¦ ������ ��ſ��� �޷��ɴϴ�!\n\n");
	textcolor(DarkRed);
	Image("vampire.txt");
	printf("\n\n");
	system("PAUSE");
}

void stage10() // �巡��
{
	printf("10���� ���Խ��ϴ�.\n\n");
	printf("10���� �ٴڰ� ������ ��� ��ȭ�� �ڵ����ֽ��ϴ�.\n��ȭ ��� ì����ϴ� ������, ������ ���� ���� ��鸳�ϴ�.\n��ȭ �ȿ��� �巡���� ��Ÿ�����ϴ�!\n\n");
	textcolor(DarkYellow);
	Image("dragon.txt");
	printf("\n\n");
	system("PAUSE");
}

void stageEnd() // ����
{
	system("mode con:cols=100 lines=30");
	textcolor(Gray);
	printf("\t\t���ϵ帳�ϴ�! Ÿ���� ��� ���� �����ϼ̽��ϴ�!\n\n\n\n\n");
	Image("ending.txt");
	printf("\n\n\n\n\n\n");
	Sleep(6000);
}

void StageClear(int ret)
{
	system("mode con:cols=60 lines=60");
	system("cls");
	
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
	case 11: // ����
		stageEnd();
		system("cls");
	case -1: // ���ΰ� ���
		break;
	}
}