//���ڸ� �ϳ� �Է� �޾Ƽ� �� ���ڿ� �ش��ϴ� �������� ����ϴ� ���α׷�

#include <iostream>

int main(void) {

	int dan;

	std::cout << "���ڸ� �Է��ϼ���: ";
	std::cin >> dan;
	
	for (int i = 1; i <= 9; i++) {
		std::cout << dan << " x " << i << " = " << dan * i << std::endl;
	}

	return 0;
}