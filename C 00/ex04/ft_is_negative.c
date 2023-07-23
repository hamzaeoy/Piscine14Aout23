#include<unistd.h>
void     ft_is_negative(int n)
{ 
    if (n < 0) // Check if the value of 'n' is less than 0
        write(1, "N", 1); // Write the character 'N' to the standard output if 'n' is negative
    else // If 'n' is not negative
        write(1, "P", 1); // Write the character 'P' to the standard output
}
/*
int main()
{
   
	ft_is_negative(7); // if we pass a posituve number it prints P ,
                        // but if we gave it a negative one it prints N.
    return(0);
} 
*/