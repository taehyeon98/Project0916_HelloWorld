#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

//main = entry point(�ϳ����־����. ��ó�� ����.)
int main()
{
	//�����̸��� ������ �ǹ��ְ�.�� �������.
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


	/*int Knight = 10;
	int ArrowSoldier = 5;
	int KnightDamage = 10;
	int ArrowSoldierDamage = 15;
	int MonsterHP = 300;
	int TotalDamage = (Knight * KnightDamage) + (ArrowSoldier * ArrowSoldierDamage);

	MonsterHP = MonsterHP - TotalDamage;

	cout << MonsterHP;*/

	//������ char
	//A=65,a=97(�ƽ�Ű�ڵ�)-a�� A�� �ܿ�����.
	//char C = 'A';
	//int Gold = 1;
	//C+Gold ??
	// = B
	// 'A'�� 65�� ����->+1�ϸ� 66�� �Ǹ鼭 B.
	////����ȯ
	//C = C + (char)Gold;

	//cout << C;
	//++ 1���ϴ� ������
	//int PlayerX = 0;
	//int PlayerY = 0;
	//char PlayerShape = 'P';
	//

	//bool IsAlive = true;
	//IsAlive = false;

	//bool IsHungry = true;

	//if (IsHungry == true)
	//{
	//	//���������.
	//}
	//else
	//{
	//	//�ܴ�.
	//}

	//while(true)
	//{
	// Input
	// Process
	// Render
	// }

	//ó��
	/*PlayerX++;
	PlayerY++;
	PlayerY--;

	cout << PlayerShape << endl;*/
	//>,<,>=,<=,!=,==
	//bool true = 1,false = 0
	/*bool bResult = (10 != 9);
	cout << bResult << endl;*/

	
	//while(true)=���ѷ���
	//while (bIsRunning)
	//{
	////_getch()=�Էµ� �ƽ�Ű�ڵ� �޾ƿ���.
	//	int KeyCode = _getch();

	//	if (KeyCode == 'w')
	//	{
	//		PlayerY--;
	//	}
	//	else if (KeyCode == 's')
	//	{
	//		PlayerY++;
	//	}
	//	else if (KeyCode == 'a')
	//	{
	//		PlayerX--;
	//	}
	//	else if (KeyCode == 'd')
	//	{
	//		PlayerX++;
	//	}
	//	else if (KeyCode == 'q')
	//	{
	//		bIsRunning = false;
	//	}
	//	system("cls");

	//	COORD Cur;
	//	Cur.X = PlayerX;
	//	Cur.Y = PlayerY;
	//	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Cur);

	//	cout << "P" << endl;
	//int PlayerX = 0;
	//int PlayerY = 0;
	//int Item = 10;
	//bool��->true false����ϴ� �ڷ���.
	//bool bIsRunning = true;
	//
	//int ObjectX[10];
	//
	////��� if,for
	// for -> �迭�� �����ϱ� ���ؼ�.
	//for (int i = 0; i < 10; i++)
	//{
	//	ObjectX[i];
	//}
	////class = Ŀ���� �ڷ��� �����.
	
	//int PlayerInput = 0;
	////1.���� 2.�ָ� 3.���ڱ�
	//cin >> PlayerInput;
	//
	////rand�� ���� ����=seed���� ���Ƽ�.
	////rand�� ���� �����ϰ� ����.->�ð��� �����.
	//srand(time(nullptr));
	////�������� 3���� ���� ������->0,1,2
	////�ʿ��� ���� 1,2,3
	////=>���������� 1�� ������=>rand() %3 +1
	//int EnemyInput = rand() % 3 + 1;
	//
	//if (PlayerInput == EnemyInput)
	//{
	//	cout << "���º�" << endl;
	//}
	//else if(PlayerInput == 1)//����
	//{
	//	if (EnemyInput == 3)
	//	{
	//		cout << "�¸�" << endl;
	//	}
	//	else if (EnemyInput == 2)
	//	{
	//		cout << "�й�" << endl;
	//	}
	//}
	//else if (PlayerInput == 2)//�ָ�
	//{
	//	if (EnemyInput == 1)
	//	{
	//		cout << "�¸�" << endl;
	//	}
	//	else if (EnemyInput == 3)
	//	{
	//		cout << "�й�" << endl;
	//	}
	//}
	//else if (PlayerInput == 3)//���ڱ�
	//{
	//	if (EnemyInput == 2)
	//	{
	//		cout << "�¸�" << endl;
	//	}
	//	else if (EnemyInput == 1)
	//	{
	//		cout << "�й�" << endl;
	//	}
	//}
	
	//�ʱ�ȭ �߿�
	//1���� �迭[]
	//2���� �迭[����(����)][����(��ĭ)]->����
	//3���� �迭=>���ӿ��� ���.
	//1����->��ġ
	//for(int i = 0;i<ũ��; i++)
	//{
	//
	//}
	int PlayerX = 1;
	int PlayerY = 1;
	char PlayerShape = 'P';
	bool bIsAlive = true;
	
	int Map[10][10] = {
		{1,1,1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1,1,1}
	};

	while (bIsAlive)
	{
		int KeyCode = _getch();

		if (KeyCode == 'w')
		{
			PlayerY--;
		}
		else if (KeyCode == 's')
		{
			PlayerY++;
		}
		else if (KeyCode == 'a')
		{
			PlayerX--;
		}
		else if (KeyCode == 'd')
		{
			PlayerX++;
		}
		system("cls");
		//�÷��̾� X,Y��ǥ ����
		for (int Y = 0; Y < 10; Y++)
		{
			//�÷��̾��� y��ǥ�� ���� �����ʵ��� ����.
			if (PlayerY >= 8)
			{
				PlayerY = 8;
			}
			else if (PlayerY <= 1)
			{
				PlayerY = 1;
			}
			for (int X = 0; X < 10; X++)
			{
				//�÷��̾��� x��ǥ�� ���� �����ʵ��� ����.
				if (PlayerX >= 8)
				{
					PlayerX = 8;
				}
				else if(PlayerX <= 1)
				{
					PlayerX = 1;
				}
				//�÷��̾� ��ġ��ǥ�� �÷��̾ ���.
				if (PlayerX == X && PlayerY == Y)
				{
					cout << PlayerShape;
				}
				else if (Map[Y][X] == 0)
				{
					cout << ' ';
				}
				else if (Map[Y][X] == 1)
				{
					cout << '*';
				}
			}
			cout << '\n';
		}
	
	}
	//[�ε���];
	//�ٹٲ� '\n'
	//for(�ʱ�ġ;���ǽ�;������)
	//{
	//	to do;
	//}
	//�ʱ�ġ ���� = �տ� ����������� ����
	//���ǽ���?�ݺ��ϴٰ� �迭�� �Ѿ�� ����.
	//for(;�Һ���(���� �߿�);)=while(true)
	


	return 0;
}