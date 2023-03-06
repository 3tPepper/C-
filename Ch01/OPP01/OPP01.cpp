#include <iostream>

void CreateAcc();
void PlusBalance();
void MinBalance();
void AllAcc();

const int NAME_LEN = 10;    //상수
int accCount = 0;

typedef struct {            //구조체 정의
    int accID;
    char accName[NAME_LEN];
    int balance;
} ACC;

ACC accList[100];


int main()
{
    while (1) {
        int num = 0;
        std::cout << "-----Menu-----" << std::endl;
        std::cout << "1. 계좌개설" << std::endl;
        std::cout << "2. 입    금" << std::endl;
        std::cout << "3. 출    금" << std::endl;
        std::cout << "4. 계좌정보 전체 출력" << std::endl;
        std::cout << "5. 프로그램 종료" << std::endl;
        std::cout << "선택: ";
        std::cin >> num;
        std::cout << std::endl;
        switch (num) {
        case 1:
            CreateAcc();
            break;
        case 2:
            PlusBalance();
            break;
        case 3:
            MinBalance();
            break;
        case 4:
            AllAcc();
            break;
        case 5:
            std::cout << "프로그램을 종료합니다.";
            return 0;
        default:
            std::cout << "잘못된 입력입니다.";
            break;
        }
        std::cout << std::endl;
    }

    return 0;
}

//계좌 개설 메소드
void CreateAcc() {
    std::cout << "[계좌개설]" << std::endl;
    std::cout << "계좌ID: ";
    std::cin >> accList[accCount].accID;

    std::cout << "이름: ";
    std::cin >> accList[accCount].accName;

    std::cout << "입금액: ";
    std::cin >> accList[accCount].balance;

    std::cout << "계좌개설 완료" << std::endl;

    accCount++;
}

//입금 메소드
void PlusBalance() {
    int myAcc = 0;
    int money = 0;
    std::cout << "[입   금]" << std::endl;
    std::cout << "계좌ID: ";
    std::cin >> myAcc;
    
    std::cout << "입금액: ";
    std::cin >> money;

    for (int i = 0; i < accCount; i++) {
        if (accList[i].accID == myAcc) {
            accList[i].balance += money;
            std::cout << "입금완료";
            return;
        }
    }
    std::cout << "유효하지 않은 ID입니다." << std::endl;
}

//출금 메소드
void MinBalance() {
    int myAcc = 0;
    int money = 0;
    std::cout << "[출   금]" << std::endl;
    std::cout << "계좌ID: ";
    std::cin >> myAcc;

    std::cout << "출금액: ";
    std::cin >> money;

    for (int i = 0; i < accCount; i++) {
        if (accList[i].accID == myAcc) {
            if (accList[i].balance >= money) {
                accList[i].balance -= money;
                std::cout << "출금완료";
                return;
            }
            else {
                std::cout << "잔액부족" << std::endl;
                return;
            }
        }
    }
    std::cout << "유효하지 않은 ID입니다." << std::endl;
}

//전체고객 잔액조회 메소드
void AllAcc() {
    for (int i = 0; i < accCount; i++) {
        std::cout << "계좌ID: " << accList[i].accID << std::endl;
        std::cout << "이  름: " << accList[i].accName << std::endl;
        std::cout << "잔  액: " << accList[i].balance << std::endl;
        std::cout << std::endl;
    }
}

