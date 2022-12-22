#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef struct
{
    int cardNumber;
    int cardBoeuf;
} card;

typedef struct
{
    card firstCard;
    card followingCards[104];
    int followingCardsSize;
} cardRow;

int main(int argc, char const *argv[]) 
{
    cardRow cr;
    cr.followingCardsSize = 0;
    cr.firstCard.cardNumber = 2;
    cr.firstCard.cardBoeuf = 1;
    cr.followingCards[0].cardNumber = 5;
    cr.followingCards[0].cardBoeuf = 1;
    cr.followingCardsSize++;
    cr.followingCards[1].cardNumber = 3;
    cr.followingCards[1].cardBoeuf = 3;
    cr.followingCardsSize++;
    cr.followingCards[2].cardNumber = 6;
    cr.followingCards[2].cardBoeuf = 5;
    cr.followingCardsSize++;
    cr.followingCards[3].cardNumber = 2;
    cr.followingCards[3].cardBoeuf = 2;
    cr.followingCardsSize++;
    printf("Row ");
    printf("%d:%d ", cr.firstCard.cardNumber, cr.firstCard.cardBoeuf);
    for (int i = 0; i < cr.followingCardsSize; i++)
    {
        printf("%d:%d ", cr.followingCards[i].cardNumber, cr.followingCards[i].cardBoeuf);
    }
    printf("\n");
}