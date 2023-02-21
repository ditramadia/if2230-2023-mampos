#include "lib-header/portio.h"
#include "lib-header/stdtype.h"
#include "lib-header/stdmem.h"
#include "lib-header/gdt.h"
#include "lib-header/framebuffer.h"
#include "lib-header/kernel_loader.h"

void kernel_setup(void) {
    framebuffer_clear();
    framebuffer_write(2, 3, ' ', 0, 0x4); //row 2
    framebuffer_write(2, 4, ' ', 0, 0x4);
    framebuffer_write(2, 5, ' ', 0, 0x4);
    framebuffer_write(2, 6, ' ', 0, 0x4);
    framebuffer_write(2, 41, ' ', 0, 0x4);
    framebuffer_write(2, 42, ' ', 0, 0x4);
    framebuffer_write(2, 43, ' ', 0, 0x4);
    framebuffer_write(2, 44, ' ', 0, 0x4);

    framebuffer_write(3, 3, ' ', 0, 0x4); //row 3
    framebuffer_write(3, 4, ' ', 0, 0x4);
    framebuffer_write(3, 5, ' ', 0, 0x4);
    framebuffer_write(3, 6, ' ', 0, 0x4);
    framebuffer_write(3, 7, ' ', 0, 0x4);
    framebuffer_write(3, 8, ' ', 0, 0x4);
    framebuffer_write(3, 9, ' ', 0, 0x4);
    framebuffer_write(3, 10, ' ', 0, 0x4);
    framebuffer_write(3, 11, ' ', 0, 0x4);
    framebuffer_write(3, 12, ' ', 0, 0x4);
    framebuffer_write(3, 35, ' ', 0, 0x4);
    framebuffer_write(3, 36, ' ', 0, 0x4);
    framebuffer_write(3, 37, ' ', 0, 0x4);
    framebuffer_write(3, 38, ' ', 0, 0x4);
    framebuffer_write(3, 39, ' ', 0, 0x4);
    framebuffer_write(3, 40, ' ', 0, 0x4);
    framebuffer_write(3, 41, ' ', 0, 0x4);
    framebuffer_write(3, 42, ' ', 0, 0x4);
    framebuffer_write(3, 43, ' ', 0, 0x4);
    framebuffer_write(3, 44, ' ', 0, 0x4);

    framebuffer_write(4, 9, ' ', 0, 0x4); //row 4
    framebuffer_write(4, 10, ' ', 0, 0x4);
    framebuffer_write(4, 11, ' ', 0, 0x4);
    framebuffer_write(4, 12, ' ', 0, 0x4);
    framebuffer_write(4, 13, ' ', 0, 0x4);
    framebuffer_write(4, 14, ' ', 0, 0x4);
    framebuffer_write(4, 33, ' ', 0, 0x4);
    framebuffer_write(4, 34, ' ', 0, 0x4);
    framebuffer_write(4, 35, ' ', 0, 0x4);
    framebuffer_write(4, 36, ' ', 0, 0x4);
    framebuffer_write(4, 37, ' ', 0, 0x4);
    framebuffer_write(4, 38, ' ', 0, 0x4);

    framebuffer_write(5, 13, ' ', 0, 0x4); //row 5
    framebuffer_write(5, 14, ' ', 0, 0x4);
    framebuffer_write(5, 15, ' ', 0, 0x4);
    framebuffer_write(5, 16, ' ', 0, 0x4);
    framebuffer_write(5, 17, ' ', 0, 0x4);
    framebuffer_write(5, 18, ' ', 0, 0x4);
    framebuffer_write(5, 29, ' ', 0, 0x4);
    framebuffer_write(5, 30, ' ', 0, 0x4);
    framebuffer_write(5, 31, ' ', 0, 0x4);  
    framebuffer_write(5, 32, ' ', 0, 0x4);
    framebuffer_write(5, 33, ' ', 0, 0x4);
    framebuffer_write(5, 34, ' ', 0, 0x4);

    framebuffer_write(9, 1, ' ', 0, 0x8); //row 9
    framebuffer_write(9, 2, ' ', 0, 0x8);
    framebuffer_write(9, 3, ' ', 0, 0x8);
    framebuffer_write(9, 4, ' ', 0, 0x8);
    framebuffer_write(9, 43, ' ', 0, 0xF);
    framebuffer_write(9, 44, ' ', 0, 0xF);
    framebuffer_write(9, 45, ' ', 0, 0xF);
    framebuffer_write(9, 46, ' ', 0, 0xF);

    framebuffer_write(10, 3, ' ', 0, 0x8); //row 10
    framebuffer_write(10, 4, ' ', 0, 0x8);
    framebuffer_write(10, 7, ' ', 0, 0x8);
    framebuffer_write(10, 8, ' ', 0, 0x8);
    framebuffer_write(10, 39, ' ', 0, 0xF);
    framebuffer_write(10, 40, ' ', 0, 0xF);
    framebuffer_write(10, 43, ' ', 0, 0xF);
    framebuffer_write(10, 44, ' ', 0, 0xF);

    framebuffer_write(11, 7, ' ', 0, 0x8); //row 11
    framebuffer_write(11, 8, ' ', 0, 0x8);
    framebuffer_write(11, 9, ' ', 0, 0x8);
    framebuffer_write(11, 10, ' ', 0, 0x8);
    framebuffer_write(11, 13, ' ', 0, 0x8);
    framebuffer_write(11, 14, ' ', 0, 0x8);
    framebuffer_write(11, 17, ' ', 0, 0x8);
    framebuffer_write(11, 18, ' ', 0, 0x8);
    framebuffer_write(11, 21, ' ', 0, 0x8);
    framebuffer_write(11, 22, ' ', 0, 0x8);
    framebuffer_write(11, 23, ' ', 0, 0xF);
    framebuffer_write(11, 24, ' ', 0, 0xF);
    framebuffer_write(11, 25, ' ', 0, 0x8);
    framebuffer_write(11, 26, ' ', 0, 0x8);
    framebuffer_write(11, 29, ' ', 0, 0x8);
    framebuffer_write(11, 30, ' ', 0, 0x8);
    framebuffer_write(11, 31, ' ', 0, 0xF);
    framebuffer_write(11, 32, ' ', 0, 0xF);
    framebuffer_write(11, 33, ' ', 0, 0xF);
    framebuffer_write(11, 34, ' ', 0, 0xF);
    framebuffer_write(11, 37, ' ', 0, 0x8);
    framebuffer_write(11, 38, ' ', 0, 0x8);
    framebuffer_write(11, 39, ' ', 0, 0xF);
    framebuffer_write(11, 40, ' ', 0, 0xF);
    framebuffer_write(15,13,' ', 0, 0x8);//row 15
    framebuffer_write(15,14,' ', 0, 0x8);
    framebuffer_write(15,17,' ', 0, 0x8);
    framebuffer_write(15,18,' ', 0, 0x8);
    framebuffer_write(15,19,' ', 0, 0xF);
    framebuffer_write(15,20,' ', 0, 0xF);
    framebuffer_write(15,21,' ', 0, 0x8);
    framebuffer_write(15,22,' ', 0, 0x8);
    framebuffer_write(15,25,' ', 0, 0x8);
    framebuffer_write(15,26,' ', 0, 0x8);
    framebuffer_write(15,27,' ', 0, 0xF);
    framebuffer_write(15,28,' ', 0, 0xF);
    framebuffer_write(15,29,' ', 0, 0xF);
    framebuffer_write(15,30,' ', 0, 0xF);
    framebuffer_write(15,33,' ', 0, 0xF);
    framebuffer_write(15,34,' ', 0, 0xF);

    framebuffer_write(14,11,' ', 0, 0x8);//row 14
    framebuffer_write(14,12,' ', 0, 0x8);
    framebuffer_write(14,13,' ', 0, 0x8);
    framebuffer_write(14,14,' ', 0, 0x8);
    framebuffer_write(14,17,' ', 0, 0x8);
    framebuffer_write(14,18,' ', 0, 0x8);
    framebuffer_write(14,19,' ', 0, 0x8);
    framebuffer_write(14,20,' ', 0, 0x8);
    framebuffer_write(14,21,' ', 0, 0x8);
    framebuffer_write(14,22,' ', 0, 0x8);
    framebuffer_write(14,25,' ', 0, 0x8);
    framebuffer_write(14,26,' ', 0, 0x8);
    framebuffer_write(14,27,' ', 0, 0xF);
    framebuffer_write(14,28,' ', 0, 0xF);
    framebuffer_write(14,29,' ', 0, 0xF);
    framebuffer_write(14,30,' ', 0, 0xF);
    framebuffer_write(14,33,' ', 0, 0x8);
    framebuffer_write(14,34,' ', 0, 0x8);
    framebuffer_write(14,35,' ', 0, 0xF);
    framebuffer_write(14,36,' ', 0, 0xF);
    
    framebuffer_write(13,11,' ', 0, 0x8);//row 13
    framebuffer_write(13,12,' ', 0, 0x8);
    framebuffer_write(13,15,' ', 0, 0x8);
    framebuffer_write(13,16,' ', 0, 0x8);
    framebuffer_write(13,19,' ', 0, 0x8);
    framebuffer_write(13,20,' ', 0, 0x8);
    framebuffer_write(13,23,' ', 0, 0xF);
    framebuffer_write(13,24,' ', 0, 0xF);
    framebuffer_write(13,27,' ', 0, 0x8);
    framebuffer_write(13,28,' ', 0, 0x8);
    framebuffer_write(13,31,' ', 0, 0xF);
    framebuffer_write(13,32,' ', 0, 0xF);
    framebuffer_write(13,35,' ', 0, 0x8);
    framebuffer_write(13,36,' ', 0, 0x8);

    framebuffer_write(12,7,' ', 0, 0xF);//row 12
    framebuffer_write(12,8,' ', 0, 0xF);
    framebuffer_write(12,9,' ', 0, 0x8);
    framebuffer_write(12,10,' ', 0, 0x8);
    framebuffer_write(12,13,' ', 0, 0x8);
    framebuffer_write(12,14,' ', 0, 0x8);
    framebuffer_write(12,15,' ', 0, 0x8);
    framebuffer_write(12,16,' ', 0, 0x8);
    framebuffer_write(12,17,' ', 0, 0x8);
    framebuffer_write(12,18,' ', 0, 0x8);
    framebuffer_write(12,21,' ', 0, 0x8);
    framebuffer_write(12,22,' ', 0, 0x8);
    framebuffer_write(12,23,' ', 0, 0xF);
    framebuffer_write(12,24,' ', 0, 0xF);
    framebuffer_write(12,25,' ', 0, 0x8);
    framebuffer_write(12,26,' ', 0, 0x8);
    framebuffer_write(12,29,' ', 0, 0x8);
    framebuffer_write(12,30,' ', 0, 0x8);
    framebuffer_write(12,31,' ', 0, 0xF);
    framebuffer_write(12,32,' ', 0, 0xF);
    framebuffer_write(12,33,' ', 0, 0xF);
    framebuffer_write(12,34,' ', 0, 0xF);
    framebuffer_write(12,37,' ', 0, 0x8);
    framebuffer_write(12,38,' ', 0, 0x8);
    framebuffer_write(12,39,' ', 0, 0xF);
    framebuffer_write(12,40,' ', 0, 0xF);



    framebuffer_set_cursor(7, 13);

    while (TRUE);
}
