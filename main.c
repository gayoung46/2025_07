#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[])
//{
    
    
  //system("PAUSE");	
  //return 0;
//}

void f(void);

//int i;

int main(void)
{
    int i; 
    for(i=0;i<5;i++)
    {
                    f();
    }
    system("PAUSE");
    return 0;
}

void f(void)
{
     int i;
     for(i=0;i<10;i++)
     printf("#"); 
}
