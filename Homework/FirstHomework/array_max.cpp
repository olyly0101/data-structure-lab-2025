#include <iostream>
#include <vector>

using namespace std;

// 배열에서 최댓값을 찾는 함수
int findMax(const vector<int>& arr) {
    // 첫 번째 요소를 최댓값으로 초기화
    int maxValue = arr[0];

    // 배열을 순회하며 최댓값 갱신
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
        }
    }

    return maxValue;
}

int main() {
    int n;

    // 배열 크기 입력 받기
    cout << "배열의 크기를 입력하세요: ";
    cin >> n;

    // 배열 생성
    vector<int> arr(n);

    // 배열 요소 입력 받기
    cout << "배열 요소 " << n << "개를 입력하세요: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 최댓값 찾기
    int maxValue = findMax(arr);

    // 결과 출력
    cout << "배열의 최댓값: " << maxValue << endl;

    return 0;
}