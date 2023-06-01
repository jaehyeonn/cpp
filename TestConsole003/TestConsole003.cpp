#include <iostream>


//변형 (num1 - num2) *(num2 +  num3) * (num3 % num1) 의 결과를 출력하는 함수를 추가로 작성
//int kj(int x, int y, int z)
//{
//	int gs = (x - y)* (y + z)* (z % x);
//	return gs;							
//}
//변형(num1 - num2)* (num2 + num3)* (num3% num1) 의 결과를 출력하는 함수를 추가로 작성

/*원의 반지름을 입력 받아서 원의 넓이를 출력하는 프로그램 작성해보기
-함수 사용, 전방선언 할 것
-원의 반지름은 정수*/

//void gA(int r)
//{
//
//	const float PI = 3.141592f;
//	float area = r * r * PI;
//
//	printf("%f", area);
//}
/*원의 반지름을 입력 받아서 원의 넓이를 출력하는 프로그램 작성해보기
-함수 사용, 전방선언 할 것
-원의 반지름은 정수*/

void S(int num)
{
	int num1 = 1, num2 = 1;
	while (num2 <= num)
	{
		while (num >= num1)
		{
			printf("* ");
			num1 += 1;
		}
		num1 = 1;
		printf("\n");
		num2 += 1;
	}
	


}


int main()
{
	int s;
	printf("정사각형 사이즈를 입력해 주세요.");
	scanf_s("%d", &s);
	S(s);



	//char someAlphabet = 'D';
	//bool isBigAlphabet = ('A' <= someAlphabet && someAlphabet <= 'z');
	//bool isSmallAlphabet = ('a' <= someAlphabet && someAlphabet <= 'z');
	//bool isNumber = ('0' <= someAlphabet && someAlphabet <= '9');
	//
	//if (isBigAlphabet)
	//{ 
	//	printf("영문 대문자 입니다. \n");
	//}
	//else if (isSmallAlphabet)
	//{
	//	printf("영문 소문자 입니다. \n");
	//}
	//
	/*원의 반지름을 입력 받아서 원의 넓이를 출력하는 프로그램 작성해보기
-함수 사용, 전방선언 할 것
-원의 반지름은 정수*/
	//int r;
	//printf("반지름 입력 : ");
	//scanf_s("%d", &r);

	//gA(r);
	/*원의 반지름을 입력 받아서 원의 넓이를 출력하는 프로그램 작성해보기
-함수 사용, 전방선언 할 것
-원의 반지름은 정수*/


		//변형 (num1 - num2) *(num2 +  num3) * (num3 % num1) 의 결과를 출력하는 함수를 추가로 작성
	//int x, y, z;
	//
	//printf("숫자 3개를 입력해 주세요");
	//scanf_s("%d, %d, %d", &x, &y, &z);
	//printf("(%d - %d)* (%d + %d)* (%d %% %d) = %d",x, y, y, z, z, x, kj(x,y,z));
	//
	//int num1 = 10;
	//int num2 = 12;
	//int result1, result2, result3;
		//변형 (num1 - num2) *(num2 +  num3) * (num3 % num1) 의 결과를 출력하는 함수를 추가로 작성
		// 
		// 
		// 
	//result1 = (num1 == 10 && num2 == 12);
	//result2 = (num1 < 12 || num2 > 12);
	//result3 = (!num1);

	//printf("result1: % d \n", result1);
	//printf("result2: % d \n", result2);
	//printf("result3: % d \n", result3);
	// {변수 선언수
	/*int result;
	int num1, num2;*/
	// }변수 선언부

	//// { 사용자 입력 받는 로직
	//printf("정수 one : ");
	//scanf_s("%d", &num1);
	//printf("정수 two : ");
	//scanf_s("%d", &num2);
	//// } 사용자 입력 받는 로직

	//printf("정수 2개를 입력해주세요");
	//scanf_s("%d, %d", &num1, &num2);

	//// { 실제 연산하는 로직 / 플러스 연산
	//result = num1 + num2;
	//printf("%d + %d = %d \n", num1, num2, result);
	//// } 실제 연산하는 로직 / 플러스 연산

	//main 함수 여기서 종료

	//int result;
	//int num1, num2, num3;

	//printf("정수 3개를 입력해 주세요");
	//scanf_s("%d+%d*%d", &num1, &num2, &num3);

	//result = num1 + num2 * num3;
	//printf("%d + %d * %d = %d \n", num1, num2, num3, result);

	//int result;
	//int num1, num2, num3;

	//printf("정수 3개를 입력해 주세요");
	//scanf_s("%d,%d,%d", &num1, &num2, &num3);

	//result = (num1 - num2) * (num2 + num3)* (num3 % num1);
	//printf("(%d - %d) * (%d + %d) * (%d %% %d) = %d \n", num1, num2, num2, num3, num3, num1, result);


	//char charvalue = 'A'; // 문자 하나를 저장하기 위한 데이터 타임
	//short shortvalue = 10; // int 보다 작은 수를 저장하기 위한 데이터 타입
	//int intvalue = 100; // 가장 만만한 수를 저장하기 위한 데이터 타임
	//long longvalue = 200; // int가 커져서 이제 잘 안쓰는 데이터 타입
	//	long long longLongvalue = 1000; // int 보다 큰 수를 저장하기 위한 데이터 타임

	//	//실수형 테이더 타입
	//	float floatvalue = 10.1; //가장 만만한 실수를 저장하기 위한 데이터 타입
	//double doublevalue = 100.1; //float보다 큰 실수를 저장하기 위한 데이터 타입
	//long double longDoublevalue = 200.1; // double 보다 큰 실수를 저장하기 위한 데이터 타입

	//	printf("char 의 크기는? %d byte. \n", sichaof(charvalue));
	//	printf("short 의 크기는? %d byte. \n", sichaof(shortvalue));
	//	printf("int 의 크기는? %d byte. \n", sichaof(intvalue));
	//	printf("long 의 크기는? %d byte. \n", sichaof(longvalue));
	//	printf("long long 의 크기는? %d byte. \n", sichaof(longLongvalue));

	//	printf("float %d\n", sichaof(floatvalue));

	//const float PI = 3.141592f;

	//char charValue = 'B';
	//	
	//printf("char 출력할 때는 C로 해보자 > %c \n", 2);






		//main()

}

