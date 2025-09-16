#include <iostream>

using namespace std;

int main()
{
	//int Temp = 0;
	////연산자 우선순위->괄호로 묶어서 순서표현해주기()
	////길어지면 나누기
	//Temp = (10 + 10);
	//Temp = Temp - (10 * 10) / 10 % 10;
	//int,산술연산자.
	/*int PlayerHP = 100;
	int MonsterAttack = 10;
	int PlayerDefence = 10;
	
	int Damage = MonsterAttack - PlayerDefence;

	PlayerHP = PlayerHP - Damage;*/
	int Knight = 10;
	int ArrowSoldier = 5;
	int KnightDamage = 10;
	int ArrowSoldierDamage = 15;
	int MonsterHP = 300;

	MonsterHP = (Knight * KnightDamage) + (ArrowSoldier * ArrowSoldierDamage);

	cout << MonsterHP;

	return 0;
}