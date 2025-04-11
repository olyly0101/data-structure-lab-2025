#include <iostream>
#include <vector>

using namespace std;

// �迭���� �ִ��� ã�� �Լ�
int findMax(const vector<int>& arr) {
    // ù ��° ��Ҹ� �ִ����� �ʱ�ȭ
    int maxValue = arr[0];

    // �迭�� ��ȸ�ϸ� �ִ� ����
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    return maxValue;
}

int main() {
    int n;

    // �迭 ũ�� �Է� �ޱ�
    cout << "�迭�� ũ�⸦ �Է��ϼ���: ";
    cin >> n;

    // �迭 ����
    vector<int> arr(n);

    // �迭 ��� �Է� �ޱ�
    cout << "�迭 ��� " << n << "���� �Է��ϼ���: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // �ִ� ã��
    int maxValue = findMax(arr);

    // ��� ���
    cout << "�迭�� �ִ�: " << maxValue << endl;

    return 0;
}