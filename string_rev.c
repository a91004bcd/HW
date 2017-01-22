#include<stdio.h>
void swap(char *a,char *b)
{
	*a^=*b;
	*b^=*a;
	*a^=*b;
}

char *reverse_r(char *curr,char *dst)
{
	if(*(curr)!='\0')
	{
		dst=reverse_r(curr+1,dst);
	}
	curr--;
	if(curr>dst)
	{
 		swap(curr,dst);
	}
	return dst+1;
}
char *reverse(char *str)
{
  reverse_r(str,str);
  return str;
}
int main()
{
	char test[]="123456789";
	reverse(test);
	printf("%s",test);
}
