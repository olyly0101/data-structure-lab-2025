#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // �̹��� �ε� (�׷��̽����Ϸ�)
    cv::Mat img = cv::imread("Lenna.png", cv::IMREAD_GRAYSCALE);

    // �ִ� ȭ�Ұ� ã��
    double minVal, maxVal;
    cv::Point minLoc, maxLoc;
    cv::minMaxLoc(img, &minVal, &maxVal, &minLoc, &maxLoc);

    // �ִ� ȭ�Ұ��� ���
    std::cout << "�ִ� ȭ�Ұ�: " << maxVal << std::endl;

    return 0;
}