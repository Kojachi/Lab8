#include "header.h"
using namespace std;

int main() {
    int menu;
    int i = 1;
    K* begin1; //указатель на первый элемент 1 списка
    K* begin2; //указатель на первый элемент 2 списка
    begin1 = funct(i); //виклик функції
    begin2 = funct(i);
    while (true) {
        cout << "Menu: " << endl;
        cout << "-1 Show your Lists" << endl;
        cout << "-2 Compare your Lists" << endl;
        cout << "-3 Involvings" << endl;
        cout << "-4 Similar elements in your Lists" << endl;
        cout << "-5 Replace first element" << endl;
        cout << "-6 Write your Lists to file" << endl;
        cout << "-0 Exit" << endl;
        cin >> menu;
        switch (menu) {
            case 1:
                cout << "Lists:" << endl;
                show(begin1, begin2);
                break;
            case 2:
                cout << "Comparison: " << endl;
                comparison(begin1, begin2);
                break;
            case 3:
                cout << "Involvs: " << endl;
                involvings(begin1, begin2);
                break;
            case 4:
                cout << "Similarity: " << endl;
                similar(begin1, begin2);
                break;
            case 5:
                cout << "Replacement: " << endl;
                replace(begin1, begin2);
                break;
            case 6:
                cout << "Make file" << endl;
                write(begin1, begin2);
                break;
            case 0:
                return 0;
                break;
            default:
                break;
        }
    }
    system("pause");
}