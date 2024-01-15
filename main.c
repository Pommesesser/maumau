#include "Card.h"
#include "stdio.h"

void debug_print_card_array(Card **card_array);

int main()
{
    Card **card_array = create_card_array();

    debug_print_card_array(card_array);

    return 0;
}

void debug_print_card_array(Card **card_array)
{
    for (int i = 0; i < CARDS; ++i)
    {
        printf("Card: %d of %d\n", card_array[i]->card_rank, card_array[i]->card_suit);
    }
}