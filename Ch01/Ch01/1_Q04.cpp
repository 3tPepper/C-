//����4. �Ǹſ����� �޿� ��� ���α׷�
//��� �Ǹſ����� �Ŵ� 50������ �⺻ �޿��� ��ǰ �Ǹ� ������ 12%�� �ش��ϴ� ���� ����.

#include <iostream>

int main(void) {
	int basic = 50;
	int sell;
	double result;
	while (1) {
		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> sell;
		if (sell == -1) {
			std::cout << "���α׷��� �����մϴ�.";
			break;
		}
		else {
			result = basic + (sell * 0.12);
			std::cout << "�̹� �� �޿�: " << result << "����" << std::endl;
		}
	}

	return 0;
}