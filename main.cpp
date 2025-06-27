#include "Card.h"

int main() {

    Card a; //Standart card
    //VIP card
    Card b("Tetiana Lapshun", "01.99", 5'000);

    a.showInfo();
    b.showInfo();


    return 0;
}
