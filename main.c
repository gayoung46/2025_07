#include <stdio.h>
#include <stdlib.h>

int inc(int counter);

int main(void)
{
    int i = 10;
    
    printf("�Լ� ȣ���� i=%d\n", i);
    i = inc(i);//�Լ��� ��ȯ���� ���, ��ȯ�Ǵ� ���� ���ʿ��� �޾��� 
    //inc(i);�� �ϸ� ��ȯ���� ������ ��  
    printf("�Լ� ȣ���� i=%d\n", i); 
    
  system("PAUSE");	
  return 0;
}

int inc(int counter)//�Ű������� �Լ��� �������� ���� ����  
{
    counter++;
    return counter;
}

//int main(int argc, char *argv[])
