#define _CRT_SECURE_NO_WARNINGS
#include "Fight.h"
#include "TitleImage.h"

void main()
{
	// UI �ٹ̱�
	SetConsoleTitle(TEXT("Tower Challenge"));
	system("mode con:cols=80 lines=40");
	
	// ����κ�(���丮, ������ ���)
	//TitleImage();
	//Sleep(5000);
	
	int state = 1;
	int ret = 0;

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
		scanf("%d", &state);
		getchar();

		// ������ ���� �Է��� ���� ��
		while (state != 1 && state != 2)
		{
			textcolor(DarkRed);		printf("�ٸ� ���ڸ� �Է��ϼ̽��ϴ�. "); 
			textcolor(Red);			printf("1(����)");
			textcolor(White);		printf(" �Ǵ� ");
			textcolor(DarkSkyBlue); printf("2(��ȣ)");
			textcolor(White);		printf(" �� �Է����ּ���.\n");
			scanf("%d", &state);
		}

		switch (state)
		{
			case 1: // ����
				if(ret == 1)	ret = Character_Attack(ret);
				else			ret = Character_Attack(ret);
				break;

			case 2: // ��ȣ
				ret = Character_Defend();
				break;
		}

		if (ret == -1)	break; // ���ΰ� ��� �Ǵ� �������� Ŭ����
	}
}