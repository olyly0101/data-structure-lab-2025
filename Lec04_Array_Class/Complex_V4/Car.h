#pragma once
#include <cstdio>
#include <cstring>

class Car {
protected:
	int speed; // 속도 (private)
	char name[40]; // 이름 (private)
public:
	int gear; // 기어 (public)
    Car() : speed(0), gear(0) { name[0] = '\0'; } // 기본 생성자
	~Car() { } // 소멸자
	Car(int s, char* n, int g): speed(s), gear(g) {
		strcpy_s(name, sizeof(name), n); // 생성자 함수 몸체 (name 멤버 초기화)
	}
	void changeGear(int g = 4) { // 기어 단수를 변경하는 멤버 함수
		gear = g;
	}
	void speedUp() { // 속도를 5씩 증가 멤버 함수
		speed += 5;
	}
	void display() {		// 자동차의 정보를 화면에 출력함.
		printf("[%s] : 기어=%d단 속도=%dkmph\n", name, gear, speed);
	}
	void whereAmI() { printf("객체 주소 = %p\n", this); }
};