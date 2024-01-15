//
// Created by David on 15.01.2024.
//

#ifndef MAUMAU2_CARD_H
#define MAUMAU2_CARD_H

#include "stdlib.h"

#define RANKS 13
#define SUITS 4
#define CARDS 52

enum Rank { ACE = 1, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING };
enum Suit { HEARTS = 1, DIAMONDS, CLUBS, SPADES };

typedef struct
{
    enum Rank card_rank;
    enum Suit card_suit;
} Card;

Card *create_card(enum Rank card_rank, enum Suit card_suit);
Card **create_card_array();

#endif //MAUMAU2_CARD_H
