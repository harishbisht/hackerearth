#include <stdio.h>
#include<string.h>
int main()
{
  char s[20],*p;
  long long int sum=0,d,t;    
  scanf("%llu",&t);
  while(t--)
  { 
	  scanf("%s",s);
	  sum=0;
	  p=s;
	   d=*p;
         while(*p!='\0')
	  {
	      sum=sum*10 + (d-48)/3;
	      p++;
	      d=d%3;
	      d=d*10 + *p;
	  }

     if(d== 0)
	printf("%llu\n",sum);
     else if(strcmp(s,"1")==0 || strcmp(s,"2")==0 || strcmp(s,"3")==0)
        printf("1\n");
     else if ( strcmp(s,"0")==0 )
	printf("0\n");
     else 
	 printf("%s\n",s);
} 
    return 0;
}
