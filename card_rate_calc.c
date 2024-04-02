#include <stdio.h>
#include <stdlib.h>

float chipper (float naira, float chipper_rate) {

    float chipper_USD = naira / chipper_rate;

    return chipper_USD;

}

float grey (float naira, float grey_rate) {

    float grey_USD = naira / grey_rate;

    return grey_USD;

}

float risevest (float naira, float risevest_rate) {

    float risevest_USD = (naira / risevest_rate) - 1;

    return risevest_USD;

}

void eq (float grey_rate, float risevest_rate) {

    for (float i = 5000; i <= 500000; i+=0.01) {

        if (grey(i, grey_rate) == risevest(i, risevest_rate)) {

            printf("The convergence point is at %.2f naira\n", i);

            break;
            
        }

    }

}

int main () {

    float naira, chipper_rate, grey_rate, risevest_rate;

    printf("\nHow much naira do you want to convert?: \n");
    scanf("%f", &naira);

    printf("What's the Chipper rate?");
    scanf("%f", &chipper_rate);

    printf("What's the Grey rate?");
    scanf("%f", &grey_rate);

    printf("What's the Risevest rate?");
    scanf("%f", &risevest_rate);

    float chipper_USD = chipper (naira, chipper_rate);
    float grey_USD = grey (naira, grey_rate);
    float risevest_USD = risevest (naira, risevest_rate);

    printf("Chipper gives you $%.2f\nGrey gives you $%.2f\nRisevest gives you $%.2f\n", chipper_USD, grey_USD, risevest_USD);

    eq(grey_rate, risevest_rate);

    system("pause");

    return 0;

}