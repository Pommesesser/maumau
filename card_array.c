//
// Created by David on 15.01.2024.
//

#include "card_array.h"

Card **create_card_array()
{

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

Card **init_card_array()
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