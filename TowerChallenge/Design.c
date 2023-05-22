#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include "Design.h"

void Image(char text[])
{
	// �ƽ�Ű �ڵ�� �̹��� ��ȯ�� �ؽ�Ʈ ���� ���
	FILE* fp;
	int ch;
	fp = fopen(text, "r");
	if (fp == NULL)
	{
		printf("���� ���� ����\n");
		exit(1);
	}
	while (1)
	{
		ch = fgetc(fp);
		if (ch == EOF)	break;
		putchar(ch);
	}
	fclose(fp);
}

void ConsoleUI()
{
	// Ŀ�� ������ ����ȭ
	static HANDLE hOut;
	CONSOLE_CURSOR_INFO cInfo;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	cInfo.dwSize = 1;
	cInfo.bVisible = FALSE;
	SetConsoleCursorInfo(hOut, &cInfo);

	// �ܼ�â ���� & ũ��
	SetConsoleTitle(TEXT("Tower Challenge"));
	system("mode con:cols=50 lines=60");
}