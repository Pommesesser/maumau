#include "card.h"
#include "card_array.h"
#include "debug.h"

int main()
{
    Card **card_array = init_card_array();
    debug_print_card_array(card_array);
    free_card_array(card_array);
}