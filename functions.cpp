//
// Created by Никита Тишков on 05.12.2019.
//
#include "header.h"
#include <fstream>
#include <string>
K* funct(int& x) { // х - параметр;
    K* begin = new K; //создаем первый элемент списка
    cout << "Please, fill your " << x << " list: " << endl;
    cin >> begin->a; //заполняем его
    K* end = begin; //указатель на последний элемент; пока ссылается туда же, куда и begin
    while (true) { //цикл на заполнение списка
        string var;
        cout << "Do you want to add some new elements? Please, type ""yes"":" << endl;
        cin >> var;
        if (var == "yes" || var == "Yes") {
            end->next = new K; //создаем следующий элемент списка
            end = end->next; //присваиваем указателю на последний элемент указатель на следующий элемент списка
            cout << "Enter your elements: ";
            cin >> end->a; //заполняем его
        }
        else {
            break;
        }
    }
    end->next = NULL; //следующий элемент списка(который последний) указывает на нулевой указатель
    cout << "End of " << x << " list" << endl;
    cout << endl;
    x++; //увеличиваем счетчик для пробежки по функии для второго списка
    return begin; //возвращаем значение
}

void show(K* x, K* y) {
    K* end1 = x;
    K* end2 = y;
    cout << "Your first list: " << endl;
    while (end1) {
        cout << end1->a << "->";
        end1 = end1->next;
    }
    cout << "NULL" << endl;
    cout << "Your second list: " << endl;
    while (end2) {
        cout << end2->a << "->";
        end2 = end2->next;
    }
    cout << "NULL" << endl;
}

void comparison(K* x, K* y) {
    int length1 = 0, length2 = 0; // длины списков
    for (K* end = x; end != NULL; end = end->next) {
        length1++; // от указателя, что указывает на первый элемент до того как он не будет указывать на нулевой (с шагом указателем на следующий элемент) увеличиваем перемнную на 1
    }
    for (K* end = y; end != NULL; end = end->next) {
        length2++;
    }
    if (length1 > length2) {
        cout << "List1 > List2" << endl;
    }
    else if (length2 > length1) {
        cout << "List1 < List2" << endl;
    }
    else {
        cout << "The lists are equal" << endl;
    }
}

void involvings(K* x, K* y) {
    int length1 = 0, length2 = 0;
    for (K* end = x; end != NULL; end = end->next) {
        length1++;
    }
    for (K* end = y; end != NULL; end = end->next) {
        length2++;
    }
    if (length1 > length2) { // в 1-ом списке больше элементов
        cout << "List1 > List2" << endl;
        int length = length2; // кол-во элементов в меньшем списке
        int inv = 0; // кол-во совпадений
        K* end1 = x;
        K* end2 = y;
        while (end1 != NULL) { // пока указатель 1-ого списка не дойдет до нулевого
            if (end1 == NULL || end2 == NULL) // если указатель 1 списка или 2 списка указывает на нулевой - заканчиваем цикл
                break;
            char* a1 = end1->a;
            char* a2 = end2->a;
            if (*a1 == *a2) { //если первые элементы равны переходим на следующий элемент 1-го списка
                end1 = end1->next;
                if (end2 != NULL) { // и если при этом указатель 2 списка не указывает на нулевой - переходим на следующий элемент 2 списка
                    end2 = end2->next;
                }
                inv++; // увеличиваем кол-во совпадений
            }
            else {
                end1 = end1->next;
            }
        }
        if (inv == length) { // если кол-во совпадений равно длине меньшего списка
            cout << "List 1 consists of list 2" << endl;
            return;
        }
        else {
            cout << "The Lists are different" << endl;
        }
    }
    else if (length2 > length1) { // во 2 списке больше элементов
        cout << "List1 < List2" << endl;
        K* end1 = x;
        K* end2 = y;
        int inv = 0;
        int length = length1;
        while (end2 != NULL) {
            if (end1 == NULL || end2 == NULL)
                break;
            char* a1 = end1->a;
            char* a2 = end2->a;
            if (*a1 == *a2) {
                end2 = end2->next;
                if (end1 != NULL) {
                    end1 = end1->next;
                }
                inv++;
            }
            else {
                end2 = end2->next;
            }
        }
        if (inv == length) {
            cout << "List 2 consists of list 1" << endl;
            return;
        }
        else {
            cout << "The Lists are different" << endl;
        }
    }
    else {
        cout << "The lists are equal" << endl;
        K* end1 = x;
        K* end2 = y;
        int inv = 0;
        int length = length1;

        while (end1 != NULL) {
            if (end1 == NULL || end2 == NULL)
                break;
            char* a1 = end1->a;
            char* a2 = end2->a;
            if (*a1 == *a2) {
                end1 = end1->next;
                if (end2 != NULL) {
                    end2 = end2->next;
                }
                inv++;
            }
            else {
                break;
            }
        }
        if (inv == length) {
            cout << "The elements are equal" << endl;
            return;
        }
        else {
            cout << "The elements are different" << endl;
        }
    }
}

void similar(K* x, K* y) {
    bool right1 = false; //логичная переменная, которой будет переприсваиваться значение true, если элементы будут равны
    K* end1 = x;
    for (K* end1 = x; end1 != NULL; end1 = end1->next) { // от первого элемента до последнего, что указывает на нулевой с шагом в указатель на следующий элемент
        for (K* endA = end1->next; endA != NULL; endA = endA->next) { //от указанного первым элементом элемента до последнего, что указывает на нулевой с шагом в указатель на следующий элемент
            char* a1 = end1->a; // таким способом сравниваются все элементы
            char* a2 = endA->a;
            cout << *a1;
            if (*a1 == *a2) { // и если какие-то элементы равные, то присваиваем логической переменной значение "true"
                right1 = true;
                break;
            }
        }
    }
    if (right1 == true) {
        cout << "List 1 has similar elements" << endl;
    }
    else {
        cout << "List 1 hasn't similar elements" << endl;
    }
    bool right2 = false;
    K* end2 = y;
    for (K* end2 = y; end2 != NULL; end2 = end2->next) {
        for (K* endB = end2->next; endB != NULL; endB = endB->next) {
            char* b1 = end2->a;
            char* b2 = endB->a;
            if (*b1 == *b2) {
                right2 = true;
                break;
            }
        }
    }
    if (right2 == true) {
        cout << "List 2 has similar elements" << endl;
    }
    else {
        cout << "List 2 hasn't similar elements" << endl;
    }
}

void replace(K*& x, K*& y) {
    int var;
    cout << "1 or 2 List?" << endl;
    cin >> var; // переменная выбора списка
    if (var == 1) {
        K* end1 = x;
        K* newBegin = x->next; // создаем указатель на следующий элемент, который потом станет первым
        while (end1->next != NULL) { // пробегаем по списку
            end1 = end1->next;
        }
        x->next = NULL; // первый элемент теперь указыает на нулевой указатель
        end1->next = x; // делаем его последним
        x = newBegin; // теперь первым элементом стал следующий
    }
    else if (var == 2) {
        K* end2 = y;
        K* newBegin = y->next;
        while (end2->next != NULL) {
            end2 = end2->next;
        }
        y->next = NULL;
        end2->next = y;
        y = newBegin;
    }
    cout << "The replacement is done. You can see it in 1)" << endl;
}

void write(K* x, K* y) {
    ofstream fout("Lists.txt"); // создаем текстовый файл
    if (fout) {
        K* end1 = x;
        K* end2 = y;
        fout << "Your first list: " << endl;
        while (end1 != NULL) {
            fout << end1->a << "->"; // выводим в нем наш список
            end1 = end1->next;
        }
        fout << "NULL" << endl;
        fout << "Your second list: " << endl;
        while (end2 != NULL) {
            fout << end2->a << "->";
            end2 = end2->next;
        }
        fout << "NULL" << endl;
        cout << "Check the folder" << endl;
        fout.close();
    }
    else {
        cout << "error" << endl;
    }
}
