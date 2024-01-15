#include "card.h"
#include "debug.h"

int main()
{
    Card **card_array = create_card_array();
    debug_print_card_array(card_array);
    free_card_array(card_array);
}