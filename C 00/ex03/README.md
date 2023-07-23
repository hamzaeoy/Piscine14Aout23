#include <unistd.h>  // This line includes the "unistd.h" header file, which contains the function "write" for output operations.

void ft_print_numbers(void)          // This is the function definition for "ft_print_numbers." It does not take any arguments (void) and does not return anything.
{
	short c = '0';                  // Declare a variable "c" of type "short" and assign it the ASCII value of '0', which represents the character '0'.

	while (c <= '9')                // Start a while loop. It will continue as long as the value of "c" is less than or equal to the ASCII value of '9' (i.e., while "c" represents a digit from '0' to '9').
	{
		write(1, &c, 1);            // Use the "write" function to output the character represented by the value of "c" (which is a digit) to the standard output (file descriptor 1).                            The "&c" is the address of "c" (a pointer to "c"), and "1" is the number of bytes to write (in this case, 1 byte, which is the size of a "char").
		c++;                        // Increment the value of "c" by 1 to move to the next character ('0' -> '1' -> '2' -> ... -> '9').
	}
}

/* 
int main(void)
{
	ft_print_numbers();             // This is a comment to indicate that the "ft_print_numbers" function will be called when the program runs.
	return(0);                      // Return 0 to indicate successful program execution to the operating system.
} 
*/
