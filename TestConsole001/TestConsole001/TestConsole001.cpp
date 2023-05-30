// TestConsole001.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>
#include <stdio.h> //전처리기 지시문 #include
void MyNewPrint(int number)
{
    printf("입력 값은 %d 입니다. \n", number);
}
int PlusTwoNumbers(int number1,int number2)
{
    printf("입력 값은 %d, %d 입니다." ,number1, number2);
    return number1 + number2;

}
int triple(int number1, int number2, int number3)
{
    printf("입력 값은 %d, %d, %d 입니다", number1, number2, number3);
    return number1 * number2 * number3;
}
int main()

{
    int number = 10;

    std::cout << "Hello World!\n";

    printf("세 수의 곱은 %d 입니다.\n\n\n", triple(123, 456, 789));

    printf("Hello world!\"\n");
    printf("Hello world!\n");
    printf("Hello world!\n");
    printf("Hello world!%d\n", number - 2);

    MyNewPrint(100);

    printf("두 수의 합은 %d 입니다.\n\n", PlusTwoNumbers(5, 7));


    // comment 주석 이 라인은 프로그램에 영향을 주지 않는다.
    /*한줄 주석
    전처리기 지시문 #include
    <> 안에는 메모가 안됨
    #include 안에 <> 안에 적어주는 것이 헤더파일
    멤버 : 속해있는것
    함수 (입력, 출력)
    실제로 함수를 사용하는 줄에서 함수를 부른다. (Call)
    retunr을 만나는 순간 함수는 종료한다 더 아래로 진행 안함
    
    */







    return 0;
}

