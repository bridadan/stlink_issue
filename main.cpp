#include "mbed.h"
#include "test_env.h"

int main() {
    printf("Please type {{__sync;12345}}\r\n");
    GREENTEA_SETUP("default_auto", 120);
    printf("Test succeeded! Exiting.\r\n");
    while(1) {
    }
}
