

#include <stdio.h>
int main()
{
    int A[5]={4,8,11,10,9};
    int n=5;
    printf("%d",AlgorithmMax(A,n));
}

    int AlgorithmMax(int A[],int n)
    {
        int Result =A[0];
        int i;
        for(i=1;i<n;i++)
        {
            if(A[i]<Result)
                Result =A[i];
        }
        return Result;

    }

