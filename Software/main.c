#include "include/io.h"

int main(void) {
    init_io();

    output_t out;
    input_t in;
    out.leds = green | yellow | red;
    
    while(1){
        set_outputs(&out);
        //get_inputs(&in);
    }
    
    return 0;    
};