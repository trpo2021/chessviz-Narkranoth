#include <stdlib.h>
#include <in-out.h>

extern Pad[9][9];

int main(){
    uint8_t ret;

    ret = start_position();
    ret = state_out();
    return 0;
}