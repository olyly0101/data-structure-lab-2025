#include <stdio.h>

// 2���� �̹������� �ִ� ȭ�� ��⸦ ���ؼ� ��ȯ�ϴ� �Լ�
int findMaxPixel(int a[][5], int h, int w) {
    // ���̳� �ʺ� 0 ������ ��� ���� ó��
    if (h <= 0 || w <= 0 || w > 5) {
        printf("�̹��� ũ�Ⱑ ��ȿ���� �ʽ��ϴ�.\n");
        return -1; // ���� �� ��ȯ
    }

    // ù ��° �ȼ��� �ִ� ���� �ʱ�ȭ
    int max = a[0][0];

    // ��� �ȼ��� Ȯ���ϸ� �ִ� ��� ����
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
    printf("2���� �̹����� �ִ� ȭ�� ���: %d\n", findMaxPixel(img, height, width));

    return 0;
}