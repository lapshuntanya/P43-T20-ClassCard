#include "Card.h"

int main() {

    Card a; //Standart card
    a.setName("AA");
    a.setName("Pipenko Denys");
    a.setPIN(1111, 7890);
    a.setPIN(5387, 7890);

    //VIP card
    Card b("Tetiana Lapshun", "01.99", 5'000);

    a.showInfo();
    b.showInfo();


    return 0;
}
