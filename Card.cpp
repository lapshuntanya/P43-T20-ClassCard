//
// Created by Lapshun Tetiana on 27.06.2025.
//

#include "Card.h"

Card::Card() {
    number =  rand() + rand()*10000;
    name = new char[10] {"undefined"};
    //strcpy_s(expiredDate, 6, "01.45");  // VS
    strcpy(expiredDate, "01.45"); //Xcode, CLion, Online
    pin = rand()%8999 + 1000;
    cash = 100;
    cout << "Create a standart card! " << number << endl;
}

Card::Card(const char *name, const char *expDate, float cash) {
    number =  rand() + rand()*10000;

    int size_name = strlen(name) + 1; //Порахували розмір
    this->name = new char[size_name]; // Виділили памʼять
    //strcpy_s(this->name, size_name, name); //Скопіювали символи
    strcpy(this->name, name); //Скопіювали символи

   // strcpy_s(expiredDate, 6, expDate);
    strcpy(expiredDate, expDate);

    pin = rand()%8999 + 1000;
    this->cash = cash;
    cout << "Create a VIP card! " << number << endl;
}

Card::~Card() {
    delete[] name;
    cout << "Closed " << number << " card!\n";
}

void Card::showInfo() {
    cout << "====================================\n";
    cout << "Client: " << name << endl;
    cout << "Card: " << number << " Exp date: " << expiredDate << endl;
    cout << "-------------------------------------\n";
    cout << "Cash: " << cash << "UAH";
    cout << "PIN: " << pin << endl;
    cout << "====================================\n\n";
}
