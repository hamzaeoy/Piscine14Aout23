#include <unistd.h>                                  // the library that allow us to work with the write function <unistd.h>
void ft_print_reverse_alphabet(void)                // lprototype li 3tawna khsna nkhdmo bih
{
    char c = 'z';                                   // declaring a char and initializing it with c and gave it z as a value   
    while (c >= 'a')                                // a while loop as long as 'c' which is 'z' is greater than 'a' or equal to it 
    {
        write(1, &c, 1);                            // we will be printing 'z'
        c--;                                        // decrementing 'z'
    }
    }
    /*
int main(void)
{
    ft_print_reverse_alphabet();                    // calling our function to print alphabet in reverse and in lowercase 
    return(0);
} */
