#include "sparsepoly.hpp"

// 다항식 입력 함수 구현
void SparsePoly::read() {
    printf("항의 개수를 입력하세요: ");
    scanf_s("%d", &numTerms);

    // 벡터 초기화
    exponents.clear();
    coefficients.clear();

    for (int i = 0; i < numTerms; i++) {
        float coef;
        int exp;
        printf("%d번째 항의 계수와 차수를 입력하세요 (예:계수 차수): ", i + 1);
        scanf_s("%f %d", &coef, &exp);

        // 계수가 0이 아닌 경우만 저장
        if (coef != 0) {
            coefficients.push_back(coef);
            exponents.push_back(exp);
        }
    }

    // 실제 0이 아닌 항의 개수로 조정
    numTerms = coefficients.size();
}

// 다항식 출력 함수 구현
void SparsePoly::display(const char* str) {
    printf("%s", str);

    if (numTerms == 0) {
        printf("0.0\n");
        return;
    }

    for (int i = 0; i < numTerms; i++) {
        printf("%.1fx^%d", coefficients[i], exponents[i]);

        if (i < numTerms - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}

// 다항식 덧셈 함수 구현
void SparsePoly::add(SparsePoly a, SparsePoly b) {
    // 결과 다항식 초기화
    numTerms = 0;
    exponents.clear();
    coefficients.clear();

    int i = 0, j = 0;

    // 두 다항식을 차수에 따라 내림차순으로 합치는 과정
    while (i < a.numTerms && j < b.numTerms) {
        if (a.exponents[i] > b.exponents[j]) {
            // a의 차수가 더 크면 a의 항 추가
            exponents.push_back(a.exponents[i]);
            coefficients.push_back(a.coefficients[i]);
            i++;
        }
        else if (a.exponents[i] < b.exponents[j]) {
            // b의 차수가 더 크면 b의 항 추가
            exponents.push_back(b.exponents[j]);
            coefficients.push_back(b.coefficients[j]);
            j++;
        }
        else {
            // 차수가 같으면 계수를 더함
            float sum = a.coefficients[i] + b.coefficients[j];
            // 계수의 합이 0이 아닐 때만 추가
            if (sum != 0) {
                exponents.push_back(a.exponents[i]);
                coefficients.push_back(sum);
            }
            i++;
            j++;
        }
    }

    // a의 남은 항들 추가
    while (i < a.numTerms) {
        exponents.push_back(a.exponents[i]);
        coefficients.push_back(a.coefficients[i]);
        i++;
    }

    // b의 남은 항들 추가
    while (j < b.numTerms) {
        exponents.push_back(b.exponents[j]);
        coefficients.push_back(b.coefficients[j]);
        j++;
    }

    // 실제 항의 개수 업데이트
    numTerms = coefficients.size();
}

int main() {
    // 희소 다항식 A와 B 생성
    SparsePoly A;
    SparsePoly B;

    // 다항식 A 입력 후 확인
    A.read();
    A.display("Poly A: ");

    // 다항식 B 입력 후 확인
    B.read();
    B.display("Poly B: ");

    // A와 B를 더한 값을 C에 저장 후 확인
    SparsePoly C;
    C.add(A, B);
    C.display("Poly C: ");

    return 0;
}