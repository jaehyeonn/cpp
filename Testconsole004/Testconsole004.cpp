#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>
//char userinput = '0';



//int ED()
//{
//	int FD, SD;
//	srand(time(NULL));
//
//	FD = rand() % 6 + 1;
//	SD = rand() % 6 + 1;
//
//	printf("1번 주사위: %d\n", FD);
//	printf("2번 주사위: %d\n", SD);
//	printf("%d ", FD + SD);
//	if ((FD + SD) % 2)
//	{
//		printf("홀수\n");
//	}
//	else
//		printf("짝수\n");
//	return 0;
//}




void cri();



int main()
{
	

//ED();

	//srand(time(NULL)); //이것이 rand() 함수의 키 값을 바꿔주는 함수

	//int ran1, ran2, ran3= 0;
	//ran1 = rand();	//rand() 함수를 사용해서 랜덤값을 받는다.
	//ran2 = rand();
	//ran3 = rand();

	//printf("rann?? %d\n", ran1);
	//printf("rann?? %d\n", ran2);
	//printf("rann?? %d\n", ran3);

	//}
//int ze(void)
//{

//	char userinput = '0';
//	printf("user input : ");
//	userinput = _getch();
//
//	printf("\n\n");
//
//	switch (userinput)
//	{
//	case 'a':
//		printf("이것은 1\n");
//		break;
//	case 'b':
//		printf("이것은 2\n");
//		break;
//	case 'c':
//		printf("이것은 3\n");
//		break;
//	default:
//		printf("처리되지 않은 예외 입력입니다.\n");
//		break;
//	}
//	return 0;
//}
//	printf("press any key...\n");
//	_getch();

	//int User = 1;
	//while (1)
	//{
	//	printf("숫자를 입력 하시오. ");
	//	scanf_s("%d", &User);

	//	if (User == 0)
	//	{
	//		printf("\n종료되었습니다.\n");
	//		break;
	//	}
	//	if (User %2)
	//	{
	//		printf("		 %d 홀수\n\n",User);
	//	}
	//	else
	//	{
	//		printf("		 %d 짝수\n\n",User);
	//	}
	//}

	//char user = '0';
	//int loopcount = 1;
	//while (3)
	//{
	//if(loopcount==1)
	//{
	//	printf("튜토리얼 만약 게임을 만들려고 한다면 \n");
	//}

	//	printf("system 당신은 플레이어 입니다. \n", loopcount);
	//	printf("수행할 액션 선택 ");
	//	scanf_s("%c", & user);

	//	if (user == 'q' || user == 'Q')
	//	{
	//		printf("프로그램을 종료합니다.\n");
	//		break;
	//	}

	//	loopcount += 1;
}

//void cri()
//{
//	float dam = -1;
//	srand(time(NULL));
//	while (1)
//	{
//		printf("1부터 10까지 숫자중 5이상 10 이하일 경우");
//		printf("숫자 입력");
//		scanf_s("%f", &dam);
//		float crit = dam * 1.5;
//
//		int crip = (rand() % 10 + 1);
//
//		if (dam > 0)
//		{
//			if (crip > 4)
//			{
//				printf("\n 랜덤 수는%d\n\n", crip);
//				printf("크리%.2f!\n\n", crit);
//				continue;
//			}
//			printf("랜덤수%d", crip);
//			printf("기본 데미지%.2f\n\n", dam);
//			continue;
//		}
//		printf("프로그램 종료\n\n");
//		break;
//	}
//}
