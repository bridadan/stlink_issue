#include "mbed.h"
#include "test_env.h"

int main() {
    printf("Please type {{__sync;12345}}\r\n");
    GREENTEA_SETUP(120, "default_auto");
    printf("Test succeeded! Exiting.\r\n");
    while(1) {
    }
}
