#include <stdio.h>
#include <stdlib.h>

//int main(int argc, char *argv[])
//{
    
    
  //system("PAUSE");	
  //return 0;
//}

static int all_files;

extern void sub();

int main(void)
{
    sub();
    printf("%d\n",all_files);
    
    system("PAUSE");	
    return 0;
}


