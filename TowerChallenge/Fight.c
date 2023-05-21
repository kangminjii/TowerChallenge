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


// ����â ���
void Information(Monster M[], int stage)
{
	textcolor(White);
	printf("\n--------------------------------------------------------\n");
	printf("l �÷��̾�\thp : %3d / attack : %3d / defend : %3d l\n", minji.health, minji.damage, minji.defense);
	printf("--------------------------------------------------------\n");
	printf("\n--------------------------------------------------------\n");
	printf("l ���� \thp : %3d / attack : %3d / defend : %3d l\n", M[stage].health, M[stage].damage, M[stage].defense);
	printf("--------------------------------------------------------\n\n\n");
}

// 1 ���ΰ��� ���͸� ����
int Character_Attack(int ret, Monster M[], int stage)
{
	srand(time(NULL));
	int random = rand() % 2 + 1; // 1 or 2

	// ���ΰ� ����
	textcolor(Red);
	printf("\n\n'����'�� �����ϼ̽��ϴ�.\n");
	printf("%d��ŭ�� �������� ���Ϳ��� ���������ϴ�.\n", minji.damage);
	
	// ���Ͱ� ��ȣ���� ���� ��
	if (ret == 1)
	{
		if (minji.damage > M[stage].defense)
		{
			printf("������ ��ȣ������ ���� ���� %d��ŭ�� ������ �޽��ϴ�!\n", minji.damage - M[stage].defense);
			M[stage].health -= minji.damage - M[stage].defense;
		}
		else
		{
			textcolor(Blue);
			printf("���ʹ� �÷��̾��� ������ ȸ���մϴ�!\n");
		}
	}
	// ���Ͱ� ��ȣ���� ���� ��
	else
	{
		M[stage].health -= minji.damage;
	}
	
	if (M[stage].health < 0)	 M[stage].health = 0;  // ü�� 0���� ǥ��

	Information(M, stage);
	Sleep(3000);

	if (M[stage].health <= 0)
	{
		stage++;
		system("cls");
		textcolor(Yellow);		printf("\n\n\n\n\n\t�١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١�\n");
		textcolor(Yellow);		printf("\t�١ڡ١�"); 
		textcolor(White);		printf(" �����մϴ�!���Ͱ� �׾����ϴ�!");
		textcolor(Yellow);		printf(" �ڡ١�\n\t�١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١�\n\n\n");
		system("PAUSE");
		return stage;
		// ���� �������� �̵�
	}

	// ���� ����
	textcolor(Purple);
	printf("\n\n������ �����Դϴ�.\n\n");
	if (random == 1)
	{
		textcolor(Red);
		printf("���Ͱ� '����'�� �����߽��ϴ�.\n");
		printf("%d��ŭ�� �������� �÷��̾�� ���������ϴ�.\n", M[stage].damage);
		minji.health -= M[stage].damage;

		if (minji.health < 0)	minji.health = 0;  // ü�� 0���� ǥ��

		Information(M, stage);

		if (minji.health <= 0)
		{
			printf("�ݷ��� �ο� ���� ���Ϳ��� �й��ϰ� ���ҽ��ϴ�..\n\n\n");
			return -1;
			// ���� ���� ����, �����
		}
		textcolor(White);
		system("PAUSE");
		return 0;
	}
	// ���� ��ȣ
	else if (random == 2)
	{
		textcolor(DarkSkyBlue);
		printf("���Ͱ� '��ȣ'�� �����߽��ϴ�.\n");
		printf("���� �Ͽ� �÷��̾��� ������ %d��ŭ ���˴ϴ�.\n\n\n", M[stage].defense);
		textcolor(White);
		system("PAUSE");
		return 1;
	}
}

// 2 ���ΰ��� ��ȣ�� ����

int Character_Defend(Monster M[], int stage)
{
	srand(time(NULL));
	int random = rand() % 2 + 1; // 1 or 2

	// ���ΰ� ��ȣ
	textcolor(DarkSkyBlue);
	printf("\n\n'��ȣ'�� �����ϼ̽��ϴ�.\n");
	printf("���� �Ͽ� ������ ������ %d��ŭ ���˴ϴ�.\n", minji.defense);
	Sleep(3000);

	// ���� ����
	textcolor(Purple);
	printf("\n\n������ �����Դϴ�.\n\n");
	if (random == 1)
	{
		textcolor(Red);
		printf("���Ͱ� '����'�� �����߽��ϴ�.\n");
		printf("%d��ŭ�� �������� �÷��̾�� ���������ϴ�.\n", M[stage].damage);
		
		if (M[stage].damage > minji.defense)
		{
			printf("�÷��̾��� ��ȣ������ ���� ���� %d��ŭ�� ������ �޽��ϴ�!\n", M[stage].damage - minji.defense);
			minji.health -= M[stage].damage - minji.defense;
		}
		else
		{
			textcolor(Blue);
			printf("��ȣ���� ���� 0�� �������� �޾ҽ��ϴ�!\n");
		}

		if (minji.health < 0)	minji.health = 0;  // ü�� 0���� ǥ��

		Information(M, stage);

		if (minji.health <= 0)
		{
			printf("�ݷ��� �ο� ���� ���Ϳ��� �й��ϰ� ���ҽ��ϴ�..\n\n\n");
			return -1;
			// ���� ���� ����, �����
		}
		textcolor(White);
		system("PAUSE");
		return 0;
	}
	// ���� ��ȣ
	else if (random == 2)
	{
		textcolor(DarkSkyBlue);
		printf("���Ͱ� '��ȣ'�� �����߽��ϴ�.\n");
		printf("���� �Ͽ� �÷��̾��� ������ %d��ŭ ���˴ϴ�.\n\n\n", M[stage].defense);
		textcolor(White);
		system("PAUSE");
		return 1;
	}
}