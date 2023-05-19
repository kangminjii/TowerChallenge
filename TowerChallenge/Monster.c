#include "Monster.h"

//Monster M1 = { 50, 2, 2 };
//Monster M2, M3; // M4, M5, M6, M7, M8, M9, M10;

int Random_Increase_Health()
{
	srand(time(NULL));
	int random = rand() % 20 + 1;
	return random;
}

int Random_Increase_dam_def()
{
	srand(time(NULL));
	int random = rand() % 4 + 1;
	return random;
}

//void Monster_Second()
//{
//	M2.health += M1.health + Random_Increase_Health();
//	M2.damage += M1.damage + Random_Increase_dam_def();
//	M2.defense += M1.defense + Random_Increase_dam_def();
//}
//
//void Monster_Third()
//{
//	M3.health += M2.health + Random_Increase_Health();
//	M3.damage += M2.damage + Random_Increase_dam_def();
//	M3.defense += M2.defense + Random_Increase_dam_def();
//}

