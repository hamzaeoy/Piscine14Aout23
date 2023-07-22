#include<unistd.h>

void    ft_print_alphabet(void)
{
    char c ;
    c = 'a';
    
            while(c >= 'a' && c <= 'z')

    {
            write(1,&c,1);
            c++;
            if (c > 'z') 
         {
                // If 'c' greater 'z', exit the loop.
            break;
         }

    }
}
/* int main()

{
    ft_print_alphabet();
    return(0);
} */
