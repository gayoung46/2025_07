#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i ;
    
    for(i=0;i<5;i++)
    {
                    static int temp = 1;//static int하면 소멸되지 않고 생존기간이 계속됨 
                    printf("temp = %d\n",temp);
                    temp++;
    }
    
  system("PAUSE");	
  return 0;
}
