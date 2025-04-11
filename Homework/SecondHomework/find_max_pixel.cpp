#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    // 이미지 로드 (그레이스케일로)
    cv::Mat img = cv::imread("Lenna.png", cv::IMREAD_GRAYSCALE);

    // 최대 화소값 찾기
    double minVal, maxVal;
    cv::Point minLoc, maxLoc;
    cv::minMaxLoc(img, &minVal, &maxVal, &minLoc, &maxLoc);

    // 최대 화소값만 출력
    std::cout << "최대 화소값: " << maxVal << std::endl;

    return 0;
}