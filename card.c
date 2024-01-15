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

