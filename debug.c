//
// Created by David on 15.01.2024.
//

#include "debug.h"

void debug_print_card_array(Card **card_array)
{
    for (int i = 0; i < CARDS; ++i)
    {
        printf("Card: %d of %d\n", card_array[i]->card_rank, card_array[i]->card_suit);
    }
}

const char* rank_to_string(enum Rank rank)
{
    switch (rank)
    {
        case ACE: return "ACE";
        case TWO: return "TWO";
        case THREE: return "THREE";
        case FOUR: return "FOUR";
        case FIVE: return "FIVE";
        case SIX: return "SIX";
        case SEVEN: return "SEVEN";
        case EIGHT: return "EIGHT";
        case NINE: return "NINE";
        case TEN: return "TEN";
        case JACK: return "JACK";
        case QUEEN: return "QUEEN";
        case KING: return "KING";
        default: return "INVALID_RANK";
    }
}

const char* suit_to_string(enum Suit suit)
{
    switch (suit)
    {
        case HEARTS: return "HEARTS";
        case DIAMONDS: return "DIAMONDS";
        case CLUBS: return "CLUBS";
        case SPADES: return "SPADES";
        default: return "INVALID_SUIT";
    }
}