//
// Created by David on 15.01.2024.
//

#ifndef MAUMAU2_DEBUG_H
#define MAUMAU2_DEBUG_H

#include "card.h"
#include "stdio.h"

void debug_print_card_array(Card **card_array);
const char* debug_rank_to_string(enum Rank rank);
const char* debug_suit_to_string(enum Suit suit);

#endif //MAUMAU2_DEBUG_H
