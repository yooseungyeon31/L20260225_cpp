
//정수2개 입력받고 5개의 산술연산자 활용하여 작성하기

#include <iostream>
#include <conio.h>

using namespace std;

//int main()
//{
//
	//int Number1= 0; // OS님께 정수형 저장공간 위치값 주세요. 
	//int Number2 = 0;

	//cout << "숫자 2개 입력: " << endl;
	//cin >> Number1;
	//cin >> Number2;

	//cout <<"Number1 + Number2 =" << Number1 + Number2 << endl;
	//cout << "Number1 * Number2 =" << Number1 * Number2 << endl;
	//cout << "Number1 / Number2 =" << Number1 / Number2 << endl;
	//cout << "Number1 % Number2 =" << Number1 % Number2 << endl;
	//cout << "Number1 - Number2 =" << Number1 - Number2 << endl;

	////\n \t \b \\   
	////줄바꿈, 탭만큼 뛰기, 뒤로가서 입력, 그냥 \ 사용
//
//
//	//return 0;
//
//	
//}


//Array
//[][][][][][][][]
//Array[0] -> 000011q3bfca + 0

//2D->3D
//Array[4][4] -> 000011q3bfca + 0
//[0][][][3]
//[0][][][3]
//[0][][][3]
//[0][][][3]

//[0][][][3][0][][][3][0][][][3][0][][][3]


//int main()
//{
//	
//	//int 정수, 2^32
//	// bool: true, false, 1바이트
//	//bool End = false;
//	//bool condition[20]이렇게 배열 선언 후 if 옆에 if(condition[0]),[1]로 하자
//	
//	//if , else if 구조 기억! 
//
//
//	
//	//if (false)
//	//{
//	//	cout < "A" << endl;
//	//}
//	//else
//	//{
//	//	cout << "B" << endl;
//	//}
//	
//	// 
//	//for (;;) //이렇게만 해도 실행 
//	//{
//
//	//}
//	//for (int i = 0; false;)//false 기 때문에 바로 끝남. true면 계속 반복
//	//{
//	//	cout << "for" << endl;
//	//}
//
//
//	//> < >- <= != =
//	//-------------------------
//	//int Array[10];
//
//
//	//for (int i = 0; i < 10;i++) //i = i+1
//	//{
//	//	Array[i] = i + 1;
//	//	//cout << i << endl;
//
//	//}
//	//for (int i = 0; i < 10; i++)
//	//{
//	//	cout << Array[i] << ", ";
//	//}
//	//---------------------------
//
//	//반복문 1부터 100까지의 합 구하기
//	//int sum = 0;
//	//for (int i = 0; i <= 100; i++)
//	//{
//	//	sum += i;
//	//}
//	//for (int i = 1; i <= 100; i=i+2)//짝수만 더하기
//	//{
//	//	sum += i;
//	//}
//	//cout << sum << endl;
//
//
//	//A->65, Mapping, Item -> 1매핑
//	int Inventory[100];
//	int ToTalPrice = 0;
//	int ProductPrice[100] = { 0. };
//	int MyCartCount = 0;
//
//	ProductPrice[MyCartCount] = 10000;
//	MyCartCount++;
//	ProductPrice[MyCartCount] = 10000;
//	MyCartCount++;
//
//	
//
//	return 0;
//}


	//이차원 배열
	/*for (int X = 0; X < 10; ++X)
	{
		cout << Map[0][X];
	}
	cout << endl;

	for (int X = 0; X < 10; ++X)
	{
		cout << Map[1][X];
	}
	cout << endl;
	for (int X = 0; X < 10; ++X)
	{
		cout << Map[2][X];
	}
	cout << endl;*/

//------------------
//int main()
//{
//	int Map[10][10] = {
//		{1,1,1,1,1,1,1,1,1,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,0,0,0,0,0,0,0,0,1},
//		{1,1,1,1,1,1,1,1,1,1}
//
//	};
//
//	int PlayerX = 1;
//	int PlayerY = 1;
//
//	//GameLoop
//	//Frame
//	for (;;)
//	{
//
//		//Input
//		int Input;
//		Input = _getch(); //'w','a','s','d'
//
//		//Process
//		if (Input == 'w')
//		{
//			PlayerY--;
//		}
//		if (Input == 'a')
//		{
//			PlayerX--;
//		}
//		if (Input == 's')
//		{
//			PlayerY++;
//		}
//		if (Input == 'd')
//		{
//			PlayerX++;
//		}
//
//
//		system("cls");
//
//		//Render
//		for (int Y = 0; Y < 10; ++Y)
//		{
//			for (int X = 0; X < 10; ++X)
//			{
//				if (PlayerX == X && PlayerY == Y)
//				{
//					cout << "%";
//				}
//				else if (Map[Y][X] == 1)
//				{
//					cout << "#";
//				}
//				else if (Map[Y][X] == 0)
//				{
//					cout << " ";
//				}
//			}
//			cout << endl;
//		}
//
//	
//		
//	
//		//input->Process->Render 순으로 한다( 1/60 안에
//	
//
//	}
//
//
//	return 0;
//}

int main() {

	bool Result1 = true;
	bool Result2 = false;
	bool Result3 = false;

	if (Result1 && Result2) //or 두조건 중 하나만 참이면
	{
		cout << "안녕1" << endl;
	}

	if (Result1 || Result2) //or 두 조건 중 하나만 참이면
	{
		cout << "안녕2" << endl;
	}

	if (!Result2) //or 두 조건 중 하나만 참이면
	{
		cout << "안녕3" << endl;
	}

	//연산자 우선 순위
	//() 이게 젤 먼저다  
	

	cout << (Result1 && Result2) << endl;  //둘중 하나라도 거짓이므로 0
	cout << (Result1|| Result2) << endl; //Result1이 참이므로 성립
	cout << (Result1 || (Result2 && Result3)) << endl;


	return 0;
}