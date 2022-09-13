//Memory alloc(1D Array) = Base Address + index * Data size...

/*Example: a[6] = {3, 9, 2, 1, 4, 5}
                    |  |  |  |  |  |
         Index:     0   1   2   3   4  

         B = 204 , a[3]-->Location? 
         */

   /* Ans: B =204, index = 3, data size = 4 byte

        a[3]-->location = 204 + (3 * 4)
                        = 216
                        */