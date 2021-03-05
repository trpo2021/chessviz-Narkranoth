#include <stdio.h>

uint8_t state_out() {
    uint8_t i, j;
    for(i = 0; i < 9; i++)
	for(j = 0; j < 9; j++0
	    printf("%u", Pad[i][j]);
	printf("/n");
    return 1;
}

uint8_t default_position() {
    uint8_t i, j;
    for(i = 1; i < 9; i++)
	Pad[i][0] = i + '0';
    for(j = 1; j < 9; j++)
        Pad[0][j] = 'a' + j - 1;
    
    return 1;
}

uint8_t get_position() {

}

uint8_t start_position() {

}
