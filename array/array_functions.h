#include<stdio.h>
void find_sum(int a[],int data)
{
    int i,j,arr_size;
    arr_size=sizeof(a);
    printf("%d",arr_size);
    for(i=0;i<arr_size;i++)
    {
        for(j=0;j<arr_size  ; j++)
        {
            if(a[i]+a[j] == data)
            {
                printf("found ");
            }
            if (i==j)
            {
                j++;
                continue;
            }
        }
    }

}


void missing_number(int *arr)
{
    int i,testcase,number,sum=0,sum_2=0;;

    scanf("%d",&testcase);

    while(testcase>0)
    {
        scanf("%d",&number);
        arr=(int *)malloc(sizeof(int)*(number-1));
        sum_2=sum=0;
        for(i=0;i<number;i++)
        {
            sum_2 = sum_2 + (i+1);
        }
        for(i=0 ; i<number-1 ; i++)
        {
            scanf("%d",(arr+i));
            sum = sum + *(arr+i);
        }

        printf("the missing number is %d",(sum_2 - sum) );

        testcase--;
    }

}

void rotate_arr(int *arr,int d, int n )
{
    int i,temp;

    arr= (int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(arr + i));
    }

    while(d>0)
    {
        temp=arr[0];
        for(i=0;i<n-d;i++)
        {
            *(arr + i ) = *(arr +i +1);
        }
        arr[n-1] = temp;
        d--;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",*(arr+i));
    }
}

void major_element(int *arr, int size_arr)
{
    int i,j,k,switch_key,temp;
    i=j=k=0;
    arr = (int *)malloc(sizeof(int));
    printf("you are in major_element function\n");
    while(k<size_arr)
    {
        scanf("%d",(arr+k));
        k++;
    }
    switch_key=0;

    while(switch_key == 0)
    {
        switch_key = 1;

        for (j=0;j<size_arr-1;j++)
        {
            if( *(arr + j) > *(arr + j + 1))
            {
                k= *(arr+j);
                *(arr + j) = *(arr+j+1);
                *(arr+j+1) = k;
                switch_key = 0;
                           }
        }

        if( switch_key == 1)
        {
            printf("the array is sorted\n");
        }

    }
    for(i=0;i<size_arr;i++)
        {
            printf("%d ",*(arr+i));
        }

        j=0;
        while(j<size_arr)
        {
           i=0;
           temp= arr[j];
            printf("the array is sorted\n");

           while(temp == arr[j])
           {
               i++;
               j++;
           }


           if(i > (size_arr/2))
           {
               printf("%d\n",temp);
                          }

        }


free(arr);

/* run time error

output ok */

}

void num_odd_times(int *arr, int size_arr)
{
    int i,j,k,temp;
    arr =(int *)malloc(sizeof(int));
    i=j=k=0;
    while (i<size_arr)
    {
        scanf("%d",(arr+i));
        i++;
    }

    k=0;
    while(k == 0)
    {
        k==1;
        for(j=0;j<size_arr-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

                k=0;

            }
        }

                   }

            k=0;

    for(j=0;j<size_arr;j++)
    {
        temp = arr[j];
        while(temp == arr[j])
        {
            j++;
            k++;
        }
        if(k%2 == 0)
        {
            printf("%d\n",temp);
        }
        else
        {
            k=0;
        }
    }

}


void max_so_far(int arr[],int n)

{
    int i,max_far,max_current;
    max_far = max_current =0;

    while(i<n)
    {
        max_far = max_far + arr[i];

        if(max_far > max_current)
        {
            max_curent = max_far;
        }

        i++;
    }

    printf("the maximum sum in the sub_array is %d\n",max_current);
    return ;

}

void merge_array_n_mn(int arr1,int arr2,int m_n)
{
    int i=0,j=0,k=0;

    while(k<m_n)
    {
        if(arr2[j]>arr1[i] && arr1[k] != -1)
        {
            while(arr1[k] != -1)
           {
               k++;
           }
           arr1[k]= arr2[j];
           j++;
        }
        else{
            arr1[k]= arr2[j];
            j++;
        }
        k++;

    }
    return;
}








