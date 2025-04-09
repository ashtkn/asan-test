#include <stdint.h>

int main(int argc, char const *argv[]) {
  uint8_t buf[100];
  buf[-1] = 0xff;
  return 0;
}
