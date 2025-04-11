#include <stdio.h>
#include <vector>

#define MAX_DEGREE 101               // 다항식의 최대 기억한 최대 차수 + 1

class SparsePoly {
    int numTerms;                    // 다항식 항의 개수
    std::vector<int> exponents;      // 각 항의 차수 저장 벡터
    std::vector<float> coefficients; // 각 항의 계수 저장 벡터

public:
    // 생성자
    SparsePoly() : numTerms(0) {}

    // 다항식 입력 함수
    void read();

    // 다항식 출력 함수
    void display(const char* str);

    // 다항식 덧셈 함수
    void add(SparsePoly a, SparsePoly b);
};