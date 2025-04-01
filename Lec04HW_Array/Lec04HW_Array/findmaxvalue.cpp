#include <stdio.h>

// 1���� �迭���� �ִ��� ���ؼ� ��ȯ�ϴ� �Լ�
int findMaxValue(int a[], int len) {
    // ���̰� 0 ������ ��� ���� ó��
    if (len <= 0) {
        printf("�迭�� ���̰� ��ȿ���� �ʽ��ϴ�.\n");
        return -1; // ���� �� ��ȯ
    }

    // ù ��° ��Ҹ� �ִ����� �ʱ�ȭ
    int max = a[0];

    // �迭�� ��� ��Ҹ� Ȯ���ϸ� �ִ� ����
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
    printf("1���� �迭�� �ִ�: %d\n", findMaxValue(arr, len));

    return 0;
}