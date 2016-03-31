#include<stdio.h>


void grey_to_binary(char *grey)
{
    char *binary_num;
    int i=0;
    printf("You are in Grey_to_binary converter\n");

    binary_num = (char *)malloc(sizeof(char) * strlen(grey));

    binary_num[0]= grey[0];

    while(*(grey+i) != '\0')
    {
        if(*(binary_num+i) == *(grey+i+1))
        {
            *(binary_num + i +1) = '0';
            i++;
        }
        else
        {
            *(binary_num + i +1) = '1';
            i++;
        }
    }
    binary_num[i] = '\0';

    printf("%s\n",binary_num);

    free(binary_num);

}

void binary_to_grey(char *bin)
{
    char *grey;
    int i=0;
    grey = (char *)malloc(sizeof(char) * strlen(bin));
    printf("you are in Binary to grey converter\n");
    grey[0]= bin[0];

    while(*(bin+i+1) != '\0')
    {
        if(*(bin+i) == *(bin+i+1))
        {
        *(grey + i +1) = '0';
        i++;
        }
        else
        {
                 *(grey + i +1) = '1';
    i++;
        }

    }

    *(grey + i+1) = '\0';

    printf("%s\n",grey);

    free(grey);


}

void only_set_bit(int bin)
{
    int i=0,bit_num=0;

    printf("you are in only set bit function\n");
    while(i<32)
    {
        if((bin&1) == 1 )
        {
            bit_num++;
            printf("the bit number at which the set bit is %d\n",bit_num);
            return;
        }

        else
        {
            bit_num++;
            bin = (bin >> 1);
            i++;
        }
    }

    printf("no 1 present\n");

}

void turn_of_kth_bit(int number, int k)
{
    int i,j,l=1;
    i=k;
    j=0;
    printf("you are in turn off kth bit\n");
    while(j<i-1)
    {
        l=  (l<<1);
        j++;

    }
    l = ~l;
    number = number & l;

    printf("the new number is %d\n",number);


}

void swap_nibble(int number)
{
    int j;

    printf("you are in swap nibble\n");
    j= number & 15;

    j=j<<4;
    number = number>>4;

    number = number | j;

    printf("the new number after nibble swappin is %d\n",number);

    return;

}

void sparse_num(int number)
{
    int sparse_number;
    sparse_number = number;
    while(sparse_number != 0)

        if((sparse_number & 3) == 1  || (sparse_number & 3) == 2 || (sparse_number & 3) == 0 )
        {
            sparse_number = sparse_number >> 1;
        }

        else if((sparse_number & 3 != 1) && (sparse_number & 3 != 2) && (sparse_number & 3 != 0))
        {
            printf("Not a sparse number \n");
            return;
        }
    }

    printf("it is a sparse number\n");

    return;
}
