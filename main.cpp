#include <iostream>

using namespace std;

int main()
{
	//int Temp = 0;
	////������ �켱����->��ȣ�� ��� ����ǥ�����ֱ�()
	////������� ������
	//Temp = (10 + 10);
	//Temp = Temp - (10 * 10) / 10 % 10;
	//int,���������.
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