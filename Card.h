//
// Created by Lapshun Tetiana on 27.06.2025.
//

#ifndef P43_T20_CARD_CARD_H
#define P43_T20_CARD_CARD_H
#include <iostream>
#include <cstring>
using namespace std;

class Card {
private:
    unsigned long number;
    char* name;
    char expiredDate[6];
    int pin;
    float cash;

public:
    Card();     //Конструктор за  замовченням
    Card(const char* name, const char* expDate, float cash);
    ~Card(); //Деструктор

    void showInfo();

    void setName(const char* client_name);
    void setPIN(int old_pin, int new_pin);

    unsigned long getNumber();
    const char* getName();
    const char* getExpiredDate();
    int getPIN();
    float getCash();

};


#endif //P43_T20_CARD_CARD_H
