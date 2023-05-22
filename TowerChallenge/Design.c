#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>
#include "Design.h"

void Image(char text[])
{
	// 아스키 코드로 이미지 변환한 텍스트 파일 출력
	FILE* fp;
	int ch;
	fp = fopen(text, "r");
	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
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
	// 커서 깜빡임 투명화
	static HANDLE hOut;
	CONSOLE_CURSOR_INFO cInfo;
	hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	cInfo.dwSize = 1;
	cInfo.bVisible = FALSE;
	SetConsoleCursorInfo(hOut, &cInfo);

	// 콘솔창 제목 & 크기
	SetConsoleTitle(TEXT("Tower Challenge"));
	system("mode con:cols=50 lines=60");
}