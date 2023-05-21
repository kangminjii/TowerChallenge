#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <Windows.h>
#include <stdio.h>

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


// 글자 색 변경
void textcolor(int colorNum)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), colorNum);
}

void TitleImage()
{
	// 게임 첫화면
	FILE* fp;
	int ch;
	fopen_s(&fp, "tower.txt", "r");
	//fp = fopen("tower.txt", "r");
	if (fp == NULL)
	{
		printf("파일 열기 실패\n");
		exit(1);
	}
	while (1)
	{
		textcolor(Gray);
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