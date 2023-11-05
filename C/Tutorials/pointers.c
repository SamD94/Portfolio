#include <stdio.h>
typedef struct {
    int squareFeet;
    int numBedrooms;
    int numBath;
} House;
/*
int getHousePrice(House pHouse) {
    return pHouse.squareFeet * 1000 + pHouse.numBedrooms * 10000 + pHouse.numBath * 5000;
}
*/
int getHousePrice(House* pHouse) {
    return pHouse->squareFeet * 1000 + pHouse->numBedrooms * 1000 + pHouse->numBath * 5000;
}

int main(int argc, char* argv[]) {
    House myHouse = {960, 2, 1};
    printf("Square feet: %d\n", myHouse.squareFeet);
    printf("Bedrooms: %d\n", myHouse.numBedrooms);
    printf("Bathrooms: %d\n", myHouse.numBath);
    House* pHouse = &myHouse;
    printf("Square feet: %d\n", pHouse->squareFeet);
    printf("Bedrooms: %d\n", pHouse->numBedrooms);
    printf("Bathrooms: %d\n", pHouse->numBath);
    return 0;
}