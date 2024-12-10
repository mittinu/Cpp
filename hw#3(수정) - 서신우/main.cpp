#include <iostream>
using namespace std;

class Dept {
    int size;
    int* scores;
public:
    Dept(int size) {
        this -> size = size;
        scores = new int[size];
    }
    int getSize() {return size;}
    void read();
    bool isOver60(int index);
};

bool Dept::isOver60(int index) {
    if (scores[index] > 60) {
        return true;
    } else {
        return false;
    }
}

void Dept::read() {
    cout << "10개 정수 입력 >> ";

    cin >> scores[0] >> scores[1] >> scores[2] >> scores[3] >> scores[4] >> scores[5] >> scores[6] >> scores[7] >> scores[8] >> scores[9];
}

int countPass(Dept &dept) {
    int count = 0;
    for (int i = 0; i < dept.getSize(); i++) {
        if (dept.isOver60(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    Dept com(10);
    com.read();
    int n = countPass(com);
    cout << "60점 이상은 " << n << "명"; 
}