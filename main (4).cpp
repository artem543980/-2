#include<iostream>
using namespace std;
int main() {
    int Q, W;
    setlocale(LC_ALL, "Russian");
    srand(time(NULL));
    Q = 1 + rand() % 6;
    W = 1 + rand() % 6;
    cout �"1 ��������� �����=" � Q � endl;
    cout �"2 ��������� �����=" � W � endl;
    return 0;
}