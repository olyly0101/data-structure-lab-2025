#include <stdio.h>

// 1차원 배열에서 최댓값을 구해서 반환하는 함수
int findMaxValue(int a[], int len) {
    // 길이가 0 이하인 경우 예외 처리
    if (len <= 0) {
        printf("배열의 길이가 유효하지 않습니다.\n");
        return -1; // 오류 값 반환
    }

    // 첫 번째 요소를 최댓값으로 초기화
    int max = a[0];

    // 배열의 모든 요소를 확인하며 최댓값 갱신
    for (int i = 1; i < len; i++) {
        if (a[i] > max) {
            max = a[i];
        }
    }

    return max;
}

int main() {
    int arr[] = { 3, 8, 2, 10, 4, 7 };
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("1차원 배열의 최댓값: %d\n", findMaxValue(arr, len));

    return 0;
}