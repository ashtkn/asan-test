#include <stdint.h>

uint8_t buf[100];

int main(int argc, char const *argv[]) {
  buf[100] = 0xff;
  return 0;
}
