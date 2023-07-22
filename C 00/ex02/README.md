Print the Alphabet in Reverse - z to a

Expected Output : zyxwvutsrqponmlkjihgfedcba

 while (c >= 'a')                                //     a while loop as long as 'c' which is 'z' is greater than 'a' or equal to it 


  {
        write(1, &c, 1);                            //   we will be printing 'z'
        c--;                                        //   decrementing 'z'
    }