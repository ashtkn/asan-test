#include <stdint.h>

uint8_t buf[100];

int main(int argc, char const *argv[]) {
  buf[-1] = 0xff;
  return 0;
}
