#include <stdio.h>
#include <vector>

#define MAX_DEGREE 101               // ���׽��� �ִ� ����� �ִ� ���� + 1

class SparsePoly {
    int numTerms;                    // ���׽� ���� ����
    std::vector<int> exponents;      // �� ���� ���� ���� ����
    std::vector<float> coefficients; // �� ���� ��� ���� ����

public:
    // ������
    SparsePoly() : numTerms(0) {}

    // ���׽� �Է� �Լ�
    void read();

    // ���׽� ��� �Լ�
    void display(const char* str);

    // ���׽� ���� �Լ�
    void add(SparsePoly a, SparsePoly b);
};