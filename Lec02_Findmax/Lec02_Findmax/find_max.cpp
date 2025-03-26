#include <cstdio>

int findArrayMax(int score[], int n)  // 자료구조: 배열 array, n은 배열 길이
{
    int tmp = score[0];  // 첫 번째 요소를 최댓값 임시 저장 변수에 할당

    for (int i = 1; i < n; i++) {  // 알고리즘: 배열의 두 번째 요소부터 순차적으로 탐색
        if (score[i] > tmp) {    // 현재 요소가 임시 최댓값보다 크면
            tmp = score[i];      // 해당 요소를 새로운 최댓값으로 업데이트
        }
    }

    return tmp;  // 찾은 최댓값 반환
}

// 주 함수
void main()
{
    int score[5] = { 1, 10, 2, 4, 5 };  // 크기가 5인 정수 배열 초기화
    int out;                            // 결과값을 저장할 변수 선언

    out = findArrayMax(score, 5);       // 배열에서 최댓값 찾기 함수 호출
    printf("result = %d", out);         // 결과 출력: "result = 10"
}