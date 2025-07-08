#include<iostream>
#include<cmath>

int main() {
    int flavorType = 0;
    int croissantAmount = 0;
    float price = 0;
    std::cin >> flavorType; // Input n
    bool getPromo = false;

    for (int i=0; i < flavorType; i++) {
        int amount, unitPrice;
        std::cin >> amount >> unitPrice; // Input m and price for each flavor
        price += (amount * unitPrice);
        croissantAmount += amount;
    }

    // Discount System
    // Condition 1 - Buy croissant at least double of flavorType (2n)
    if (croissantAmount >= flavorType * 2) {
        price *= 0.97;
        // If satisfied with amount more than 14 and has a price more than 25 after discounted.
        if (croissantAmount > 14 && price > 25) {
            price -= 10;
        }
        getPromo = true;
    } else if (croissantAmount <= 20 && price < 500) {
        // Condition 2 Buy croissant at most 20 and has a price less than 500
        price += 600;
        getPromo = true;
    }

    // Condition 3 Satisfied after don't get any promotion
    if (!getPromo) {
        price -= (flavorType * 0.35);
    }

    std::cout << floor(price);
    
    return 0;
}