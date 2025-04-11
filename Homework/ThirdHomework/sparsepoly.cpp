#include "sparsepoly.hpp"

// ���׽� �Է� �Լ� ����
void SparsePoly::read() {
    printf("���� ������ �Է��ϼ���: ");
    scanf_s("%d", &numTerms);

    // ���� �ʱ�ȭ
    exponents.clear();
    coefficients.clear();

    for (int i = 0; i < numTerms; i++) {
        float coef;
        int exp;
        printf("%d��° ���� ����� ������ �Է��ϼ��� (��:��� ����): ", i + 1);
        scanf_s("%f %d", &coef, &exp);

        // ����� 0�� �ƴ� ��츸 ����
        if (coef != 0) {
            coefficients.push_back(coef);
            exponents.push_back(exp);
        }
    }

    // ���� 0�� �ƴ� ���� ������ ����
    numTerms = coefficients.size();
}

// ���׽� ��� �Լ� ����
void SparsePoly::display(const char* str) {
    printf("%s", str);

    if (numTerms == 0) {
        printf("0.0\n");
        return;
    }

    for (int i = 0; i < numTerms; i++) {
        printf("%.1fx^%d", coefficients[i], exponents[i]);

        if (i < numTerms - 1) {
            printf(" + ");
        }
    }
    printf("\n");
}

// ���׽� ���� �Լ� ����
void SparsePoly::add(SparsePoly a, SparsePoly b) {
    // ��� ���׽� �ʱ�ȭ
    numTerms = 0;
    exponents.clear();
    coefficients.clear();

    int i = 0, j = 0;

    // �� ���׽��� ������ ���� ������������ ��ġ�� ����
    while (i < a.numTerms && j < b.numTerms) {
        if (a.exponents[i] > b.exponents[j]) {
            // a�� ������ �� ũ�� a�� �� �߰�
            exponents.push_back(a.exponents[i]);
            coefficients.push_back(a.coefficients[i]);
            i++;
        }
        else if (a.exponents[i] < b.exponents[j]) {
            // b�� ������ �� ũ�� b�� �� �߰�
            exponents.push_back(b.exponents[j]);
            coefficients.push_back(b.coefficients[j]);
            j++;
        }
        else {
            // ������ ������ ����� ����
            float sum = a.coefficients[i] + b.coefficients[j];
            // ����� ���� 0�� �ƴ� ���� �߰�
            if (sum != 0) {
                exponents.push_back(a.exponents[i]);
                coefficients.push_back(sum);
            }
            i++;
            j++;
        }
    }

    // a�� ���� �׵� �߰�
    while (i < a.numTerms) {
        exponents.push_back(a.exponents[i]);
        coefficients.push_back(a.coefficients[i]);
        i++;
    }

    // b�� ���� �׵� �߰�
    while (j < b.numTerms) {
        exponents.push_back(b.exponents[j]);
        coefficients.push_back(b.coefficients[j]);
        j++;
    }

    // ���� ���� ���� ������Ʈ
    numTerms = coefficients.size();
}

int main() {
    // ��� ���׽� A�� B ����
    SparsePoly A;
    SparsePoly B;

    // ���׽� A �Է� �� Ȯ��
    A.read();
    A.display("Poly A: ");

    // ���׽� B �Է� �� Ȯ��
    B.read();
    B.display("Poly B: ");

    // A�� B�� ���� ���� C�� ���� �� Ȯ��
    SparsePoly C;
    C.add(A, B);
    C.display("Poly C: ");

    return 0;
}