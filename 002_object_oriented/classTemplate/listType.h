//
// Created by Massimo Biancalani on 2019-04-21.
//
#include <iostream>
#ifndef DATA_STRUCTURE_USING_C_PLUS_PLUS_LISTTYPE_H
#define DATA_STRUCTURE_USING_C_PLUS_PLUS_LISTTYPE_H
using namespace std;

template <class elemType>
class listType {
public:
    bool isEmpty();
    bool isFull();
    void search(const elemType& searchItem, bool& found);
    void insert(const elemType& newElement);
    void remove(const elemType& removeElement);
    void destroyList();
    void printList();
    listType(): length(0) {

    }

private:
    elemType list[100]; //array to hold the list elements
    int length; //variable to store the number
                //of elements in the list
};


template<class elemType>
bool listType<elemType>::isEmpty() {
    return length == 0;
}

template<class elemType>
bool listType<elemType>::isFull() {
    return length == 100;
}

template<class elemType>
void listType<elemType>::search(const elemType &searchItem, bool &found) {
    for (int i = 0; i < length; i++) {
        if (list[i] == searchItem) {
            found = true;
            return;
        }
    }
    found = false;
}

template<class elemType>
void listType<elemType>::insert(const elemType &newElement) {
    list[length++] = newElement;
}

template<class elemType>
void listType<elemType>::remove(const elemType &removeElement) {
    int i = 0;
    for (i = 0; i < length; i++) {
        if(list[i == removeElement]) {
            break;
        }
    }
    for (int j = i; j < length - 1; j++) {
        list[j] = list[j-1];
    }
}

template<class elemType>
void listType<elemType>::destroyList() {
    length = 0;
}

template<class elemType>
void listType<elemType>::printList() {
    for (int i = 0; i < length; ++i) {
        cout << list[i] << " ";
    }
    cout << endl;
}

#endif //DATA_STRUCTURE_USING_C_PLUS_PLUS_LISTTYPE_H
