#include <stdio.h>

// 2차원 이미지에서 최대 화소 밝기를 구해서 반환하는 함수
int findMaxPixel(int a[][5], int h, int w) {
    // 높이나 너비가 0 이하인 경우 예외 처리
    if (h <= 0 || w <= 0 || w > 5) {
        printf("이미지 크기가 유효하지 않습니다.\n");
        return -1; // 오류 값 반환
    }

    // 첫 번째 픽셀을 최대 밝기로 초기화
    int max = a[0][0];

    // 모든 픽셀을 확인하며 최대 밝기 갱신
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (a[i][j] > max) {
                max = a[i][j];
            }
        }
    }

    return max;
}

int main() {
    int img[3][5] = {
        {10, 20, 30, 40, 50},
        {60, 70, 80, 90, 100},
        {55, 65, 75, 85, 95}
    };
    int height = 3;
    int width = 5;
    printf("2차원 이미지의 최대 화소 밝기: %d\n", findMaxPixel(img, height, width));

    return 0;
}