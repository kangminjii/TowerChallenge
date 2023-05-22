#pragma once
#include <stdio.h>
#include <string.h>
#include <Windows.h>
#include "Monster.h"

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

void textcolor(int);							// ���ڻ� ����
void Information(Monster M[], int);				// ���� â ���
int Character_Attack(int, Monster M[], int);	// 1 ���ΰ��� ���͸� ����
int Character_Defend(Monster M[], int);			// 2 ���ΰ��� ��ȣ�� ����