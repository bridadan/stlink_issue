#include "mbed.h"
#include "greentea_serial.h"

int main() {
    greentea_serial->printf("Listening, try entering characters to see them echoed.\r\n");
    while(1) {
        greentea_serial->putc(greentea_serial->getc());
    }
}
