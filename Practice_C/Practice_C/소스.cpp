﻿#include <stdio.h> // C 표준 입출력 헤더파일
#include <stdlib.h> // C 표준 유틸리티 함수들을 모아놓은 헤더파일

int main(void) // main 함수가 종료될 때 정수형 값을 리턴하겠다는 뜻
{
	// 3.14e-5를 소수점 형태로 소수점 이하 7자리까지 출력
	printf("%.7lf\n", 3.14e-5); // 지수 표기법으로 표기된 값의 실제 값
	// 0.0000314를 지수 형태로 출력
	printf("%le\n", 0.0000314); // 지수 표기법으로 표기된 값
	// 0.0000314를 지수 형태로 소수점 이하 둘째 자리까지 출력
	printf("%.2le\n", 0.0000314); // 지수 표기법으로 표기된 값

	return 0; // 해당 함수를 정상적으로 끝내고서 운영체제에게 기술한 값을 반환하고 현재 실행 중인 함수를 끝낸다는 뜻
}