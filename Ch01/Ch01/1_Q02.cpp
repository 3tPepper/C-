//���α׷� ����ڷκ��� �̸��� ��ȭ��ȣ�� ���ڿ��� ���·� �Է� �޾Ƽ�,
//�Է� ���� �����͸� �״�� ����ϴ� ���α׷�

#include <iostream>

int main(void) {
	char name[10];
	char phone[20];

	std::cout << "�̸��� �Է��ϼ���: ";
	std::cin >> name;
	std::cout << "��ȭ��ȣ�� �Է��ϼ���: ";
	std::cin >> phone;

	std::cout << "�̸�: " << name << ", ��ȭ��ȣ: " << phone;

	return 0;
}