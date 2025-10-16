#include <stdio.h>
#include <stdlib.h>

int inc(int counter);

int main(void)
{
    int i = 10;
    
    printf("함수 호출전 i=%d\n", i);
    i = inc(i);//함수의 반환값을 사용, 반환되는 값을 왼쪽에서 받아줌 
    //inc(i);를 하면 반환값을 버리는 것  
    printf("함수 호출후 i=%d\n", i); 
    
  system("PAUSE");	
  return 0;
}

int inc(int counter)//매개변수는 함수가 없어지면 값이 끝남  
{
    counter++;
    return counter;
}

//int main(int argc, char *argv[])
