#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

//main = entry point(하나만있어야함. 맨처음 실행.)
int main()
{
	//변수이름은 무조건 의미있게.길어도 상관없음.
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


	/*int Knight = 10;
	int ArrowSoldier = 5;
	int KnightDamage = 10;
	int ArrowSoldierDamage = 15;
	int MonsterHP = 300;
	int TotalDamage = (Knight * KnightDamage) + (ArrowSoldier * ArrowSoldierDamage);

	MonsterHP = MonsterHP - TotalDamage;

	cout << MonsterHP;*/

	//문자형 char
	//A=65,a=97(아스키코드)-a랑 A는 외워두자.
	//char C = 'A';
	//int Gold = 1;
	//C+Gold ??
	// = B
	// 'A'가 65로 저장->+1하면 66이 되면서 B.
	////형변환
	//C = C + (char)Gold;

	//cout << C;
	//++ 1더하는 연산자
	//int PlayerX = 0;
	//int PlayerY = 0;
	//char PlayerShape = 'P';
	//

	//bool IsAlive = true;
	//IsAlive = false;

	//bool IsHungry = true;

	//if (IsHungry == true)
	//{
	//	//밥먹으러감.
	//}
	//else
	//{
	//	//잔다.
	//}

	//while(true)
	//{
	// Input
	// Process
	// Render
	// }

	//처리
	/*PlayerX++;
	PlayerY++;
	PlayerY--;

	cout << PlayerShape << endl;*/
	//>,<,>=,<=,!=,==
	//bool true = 1,false = 0
	/*bool bResult = (10 != 9);
	cout << bResult << endl;*/

	
	//while(true)=무한루프
	//while (bIsRunning)
	//{
	////_getch()=입력된 아스키코드 받아오기.
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
	//bool형->true false사용하는 자료형.
	//bool bIsRunning = true;
	//
	//int ObjectX[10];
	//
	////제어문 if,for
	// for -> 배열에 접근하기 위해서.
	//for (int i = 0; i < 10; i++)
	//{
	//	ObjectX[i];
	//}
	////class = 커스텀 자료형 만들기.
	
	//int PlayerInput = 0;
	////1.가위 2.주먹 3.보자기
	//cin >> PlayerInput;
	//
	////rand값 동일 이유=seed값이 같아서.
	////rand는 값이 동일하게 나옴.->시간을 사용함.
	//srand(time(nullptr));
	////랜덤값을 3으로 나눈 나머지->0,1,2
	////필요한 값은 1,2,3
	////=>나머지값에 1을 더해줌=>rand() %3 +1
	//int EnemyInput = rand() % 3 + 1;
	//
	//if (PlayerInput == EnemyInput)
	//{
	//	cout << "무승부" << endl;
	//}
	//else if(PlayerInput == 1)//가위
	//{
	//	if (EnemyInput == 3)
	//	{
	//		cout << "승리" << endl;
	//	}
	//	else if (EnemyInput == 2)
	//	{
	//		cout << "패배" << endl;
	//	}
	//}
	//else if (PlayerInput == 2)//주먹
	//{
	//	if (EnemyInput == 1)
	//	{
	//		cout << "승리" << endl;
	//	}
	//	else if (EnemyInput == 3)
	//	{
	//		cout << "패배" << endl;
	//	}
	//}
	//else if (PlayerInput == 3)//보자기
	//{
	//	if (EnemyInput == 2)
	//	{
	//		cout << "승리" << endl;
	//	}
	//	else if (EnemyInput == 1)
	//	{
	//		cout << "패배" << endl;
	//	}
	//}
	
	//초기화 중요
	//1차원 배열[]
	//2차원 배열[가로(몇줄)][세로(몇칸)]->맵핑
	//3차원 배열=>게임에서 사용.
	//1차원->수치
	//for(int i = 0;i<크기; i++)
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
		//플레이어 X,Y좌표 받음
		for (int Y = 0; Y < 10; Y++)
		{
			//플레이어의 y좌표가 벽을 넘지않도록 설정.
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
				//플레이어의 x좌표가 벽을 넘지않도록 설정.
				if (PlayerX >= 8)
				{
					PlayerX = 8;
				}
				else if(PlayerX <= 1)
				{
					PlayerX = 1;
				}
				//플레이어 위치좌표에 플레이어를 출력.
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
	//[인덱스];
	//줄바꿈 '\n'
	//for(초기치;조건식;증감식)
	//{
	//	to do;
	//}
	//초기치 없다 = 앞에 선언되있으면 가능
	//조건식은?반복하다가 배열을 넘어가면 뻗음.
	//for(;불변식(제일 중요);)=while(true)
	


	return 0;
}