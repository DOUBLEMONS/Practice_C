#include <stdio.h> // C 표준 입출력 헤더파일
#include <stdlib.h> // C 표준 유틸리티 함수들을 모아놓은 헤더파일

int main(void) // main 함수가 종료될 때 정수형 값을 리턴하겠다는 뜻
{
	char fruit[6] = "apple"; // [문자열길이 + 1] = 6
	printf("%s", fruit); // 문자열 출력

	return 0; // 해당 함수를 정상적으로 끝내고서 운영체제에게 기술한 값을 반환하고 현재 실행 중인 함수를 끝낸다는 뜻
}