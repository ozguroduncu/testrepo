#include <stdio.h>

    void bublesort(int A[],int N){
        int i,j,tmp;
        for(i=0;i<N;i++){
            for(j=0;j<N-1;j++)
            {
                if(A[j]>A[j+1])
                {
                    tmp=A[i+1];
                    A[i+1]=A[i];
                    A[i]=tmp;
                }
            }
        }
           for(int k=0;k<N;k++)
    {
        printf("%d ",A[k]);
    }
    }
int main() {
  int array[]={2,4,8,1,5};
bublesort(array,5);
}