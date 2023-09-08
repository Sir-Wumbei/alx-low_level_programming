#include <unistd.h>
int main(void) {
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

write(2, quote, 59); /* 59 is the length of the quote excluding the null terminator */

return (1); // Return an error status code, e.g., 1, with parentheses
}
