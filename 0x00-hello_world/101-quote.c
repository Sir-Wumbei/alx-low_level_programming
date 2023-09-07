#include <unistd.h>
int main(void)
{
const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
write(2, quote, 59); // 59 is the length of the quote excluding the null terminator
return (1);
}
