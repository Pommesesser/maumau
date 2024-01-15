//
// Created by David on 15.01.2024.
//

#include "card.h"

Card *create_card(enum Rank card_rank, enum Suit card_suit)
{
    Card *card = (Card*) malloc(sizeof(Card));

    card->card_rank = card_rank;
    card->card_suit = card_suit;

    return card;
}

Card **create_card_array()
{
    Card **card_array = (Card**) malloc(sizeof(Card) * CARDS);

    int k = 0;
    for (int i = 1; i <= SUITS; i++)
    {
        for (int j = 1; j <= RANKS; j++)
        {
            card_array[k] = create_card(j,i);
            k++;
        }
    }

    return card_array;
}

void free_card(Card *card)
{
    free(card);
}

void free_card_array(Card **card_array)
{
    for (int i = 0; i < CARDS; i++)
    {
        free_card(card_array[i]);
    }
    free(card_array);
}