#include "Fight.h"
#define _CRT_SECURE_NO_WARNINGS
//#define StageNumber = 10

Character minji = { 100 , 10, 4 };
extern int state = 1;
char input[1] = { 0 };

// ���� �� ����
void textcolor(int colorNum)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}

// ����â ���
void Information()
{
	textcolor(White);
	printf("\n--------------------------------------------------------\n");
	printf("l �÷��̾�\thp : %3d / attack : %3d / defend : %3d l\n", minji.health, minji.damage, minji.defense);
	printf("--------------------------------------------------------\n");
	printf("\n--------------------------------------------------------\n");
	printf("l ���� \thp : %3d / attack : %3d / defend : %3d l\n", M1.mon.health, M1.mon.damage, M1.mon.defense);
	printf("--------------------------------------------------------\n\n\n");
}

// 1 ���ΰ��� ���͸� ����
int Character_Attack(int ret)
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
		if (minji.damage > M1.mon.defense)
		{
			printf("������ ��ȣ������ ���� ���� %d��ŭ�� ������ �޽��ϴ�!\n", minji.damage - M1.mon.defense);
			M1.mon.health -= minji.damage - M1.mon.defense;
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
		M1.mon.health -= minji.damage;
	}
	
	if (M1.mon.health < 0)	 M1.mon.health = 0;  // ü�� 0���� ǥ��

	Information();

	if (M1.mon.health <= 0)
	{
		textcolor(Yellow);		printf("�١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١�\n�١ڡ١� ");
		textcolor(White);		printf("�����մϴ�! ���Ͱ� �׾����ϴ�!");
		textcolor(Yellow);		printf("�١ڡ١�\n�١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١ڡ١�\n\n");
		return -1;
		// ���� �������� �̵�
	}
	Sleep(3000);

	// ���� ����
	printf("\n\n������ �����Դϴ�.\n");
	if (random == 1)
	{
		textcolor(Red);
		printf("���Ͱ� '����'�� �����߽��ϴ�.\n");
		printf("%d��ŭ�� �������� �÷��̾�� ���������ϴ�.\n", M1.mon.damage);
		minji.health -= M1.mon.damage;

		if (minji.health < 0)	minji.health = 0;  // ü�� 0���� ǥ��

		Information();

		if (minji.health <= 0)
		{
			printf("�ݷ��� �ο� ���� ���Ϳ��� �й��ϰ� ���ҽ��ϴ�..\n\n");
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
		printf("���� �Ͽ� �÷��̾��� ������ %d��ŭ ���˴ϴ�.\n", M1.mon.defense);
		textcolor(White);
		system("PAUSE");
		return 1;
	}
}

// 2 ���ΰ��� ��ȣ�� ����
int Character_Defend()
{
	srand(time(NULL));
	int random = rand() % 2 + 1; // 1 or 2

	// ���ΰ� ��ȣ
	textcolor(DarkSkyBlue);
	printf("\n\n'��ȣ'�� �����ϼ̽��ϴ�.\n");
	printf("���� �Ͽ� ������ ������ %d��ŭ ���˴ϴ�.\n", minji.defense);
	Sleep(3000);

	// ���� ����
	printf("\n\n������ �����Դϴ�.\n");
	if (random == 1)
	{
		textcolor(Red);
		printf("���Ͱ� '����'�� �����߽��ϴ�.\n");
		printf("%d��ŭ�� �������� �÷��̾�� ���������ϴ�.\n", M1.mon.damage);
		
		if (M1.mon.damage > minji.defense)
		{
			printf("�÷��̾��� ��ȣ������ ���� ���� %d��ŭ�� ������ �޽��ϴ�!\n", M1.mon.damage - minji.defense);
			minji.health -= M1.mon.damage - minji.defense;
		}
		else
		{
			textcolor(Blue);
			printf("��ȣ���� ���� 0�� �������� �޾ҽ��ϴ�!\n");
		}

		if (minji.health < 0)	minji.health = 0;  // ü�� 0���� ǥ��

		Information();

		if (minji.health <= 0)
		{
			printf("�ݷ��� �ο� ���� ���Ϳ��� �й��ϰ� ���ҽ��ϴ�..\n\n");
			state = -1;
			// ���� ���� ����, �����

			textcolor(White);
			system("PAUSE");
			return 0;
		}
	}
	// ���� ��ȣ
	else if (random == 2)
	{
		textcolor(DarkSkyBlue);
		printf("���Ͱ� '��ȣ'�� �����߽��ϴ�.\n");
		printf("���� �Ͽ� �÷��̾��� ������ %d��ŭ ���˴ϴ�.\n", M1.mon.defense);
		textcolor(White);
		system("PAUSE");
		return 1;
	}
}