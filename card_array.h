//
// Created by David on 15.01.2024.
//

#ifndef MAUMAU2_CARD_ARRAY_H
#define MAUMAU2_CARD_ARRAY_H

#include "card.h"
#include "stdlib.h"

Card **create_card_array();
Card **init_card_array();
void free_card(Card *card);
void free_card_array(Card **card_array);

#endif //MAUMAU2_CARD_ARRAY_H
