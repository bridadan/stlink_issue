#include "mbed.h"

RawSerial pc(USBTX, USBRX);

int main() {
    pc.printf("Listening, try entering characters to see them echoed.\r\n");
    while(1) {
        pc.putc(pc.getc());
    }
}
