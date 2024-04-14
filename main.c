#include <stdio.h>
#include <string.h>

int main() 
{
/* Pattern Number 1 */
  	int num,i,j,k,l,m;
  	printf("Enter your number : ");
  	scanf(" %d", &num);
  	for(i=1; i<=num; i++)
  	{
  		for(j=1; j<=i; j++)
  		printf("*", j);
  		printf("\n");
  	}
  	for(k=2,i=1; i<=num; i++,k++)
  	{
  		for(j=1; j<=k; j++)
  		printf("*", j);
  		printf("\n");
	}
	for(l=1,i=2; i<=num; i++,l++)
	{
		for(j=num; j>=l; j--)
  		printf("*", j);
  		printf("\n");	
	}
	for(m=1,i=1; i<=num; i++,m++)
	{
		for(j=num; j>=m; j--)
		printf("*", j);
  		printf("\n");
	}

/* Pattern Number 2 */	
{
	int num,i,j;
	printf("Enter your number : ");
	scanf(" %d", &num);
	
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=i; j++)
	{
		if(j==i)
		printf("%d",i);
		else
		printf("0");
	}
	printf("\n");
	}
}

/* Pattern Number 3 */
{
	int num,i,j,k,l;
	printf("Enter your number : ");
	scanf(" %d", &num);
	k=num;
	for(i=1; i<=num; i++,k--)
	{
		for(j=k; j<=num; j++)
		printf("%d", j);
		for(j=i, l=num+1; j>1; j--,l++)
		printf("%d", l);
		printf("\n");
	}
	for(i=2; i<=num; i++)
	{
		for(j=i; j<=num; j++)
		printf("%d", j);
		for(j=num-i, l=num+1; j>=1; j--,l++)
		printf("%d", l);
		printf("\n");
	}
}	

/* Pattern Number 4 */	
{
 char ch,i,j,k='A';
 printf("Enter any Character : ");
 scanf(" %c", &ch);
 if(ch>='a' && ch<='z')
 	ch=ch-32;
 for(i='A'; i<=ch; i++)
 {
   for(j='A'; j<=i; j++, k++)
       printf("%c", k);
   printf("\n");
 }
}

/* Pattern Number 5 */	
{
	int num=4,i,j,k,l,m,n=6;
	for(i=1; i<=num; i++,n=n-2)
	{
		for(j=1; j<=i; j++)
		printf("%d", j);
		for(m=n; m>=1; m--)
		printf("%d", i);
		for(j=i-1; j>=1; j--)
		printf("%d", j);
		printf("\n");
	}
	for(i=3,k=1; i>=1; i--, k=k+2)
	{
		for(j=1; j<=i; j++)
		printf("%d", j);
		for(l=k; l>=1; l--)
		printf("%d", i);
		for(j=i; j>=1; j--)
		printf("%d", j);
		printf("\n");
	}
}

/* Pattern Number 6 */	
{ 
	int k=1;
	char i,j,ch;
	printf("Enter Any Character : ");
	scanf(" %c", &ch);
	if(ch>='a' && ch<='z')
	ch=ch-32;
	for(i='A';i<=ch; i++,k++)
	{
		for(j='A'; j<=ch-k+1; j++)
		printf("%c", j);
		printf("\n");
	}
}

/* Pattern Number 7 */
{	
	int i,j,len;
	char str[]="BHARAT";
	len=strlen(str);
	for(i=0; i<=len; i++)
	{
		for(j=i; j>0; j--)
		printf(" ");
		printf("%c",str[i]);	
		printf("\n");
	}	
}

/* Pattern Number 8 */
{	
	int i,j,len;
	char str[]="BHARAT";
	len=strlen(str);
	for(i=0; i<=len; i++)
	{
		for(j=0; j<=i; j++)
		printf("%c",str[i]);	
		printf("\n");
	}	
}

/* Pattern Number 9 */
{
	int num,i,j,k;
	printf("Enter Any Number : ");
	scanf(" %d", &num);
	for(k=num,i=1; i<=num; i++, k--)
	{
		for(j=1; j<=k; j++)
		printf("%d", j);
		for(j=k-1; j>=1; j--)
		printf("%d", j);
		printf("\n");
	}
}

/* Pattern Number 10 */
{
	char ch,i,j,k;
	printf("Enter Any Character : ");
	scanf(" %c", &ch);
	if(ch>='a' && ch<='z')
	ch=ch-32;
	
	for(k=ch,i='A'; i<=ch; i++,k--)
	{
		for(j='A'; j<=k; j++)
		printf(" %c", j);
		for(j=k-1; j>='A'; j--)
		printf(" %c", j);
		printf("\n");
	}
}	

/* Pattern Number 11 */
{
	int i,j,k,l;
	for(i=1,k=1; i<=5; i++,k=k+2)
	{
		if(i%2==0)
	{
		for(j=1,l=2; j<=k; j++,l=l+2)
		printf(" %d", l);
	}
	else
	{
		for(j=1,l=1; j<=k; j++,l=l+2)
		printf(" %d", l);	
	}
		printf("\n");
	}
}

/* Pattern Number 12 */
{

 char ch,i,j,k;
 printf("Enter any character : ");
 scanf(" %c", &ch);
 if(ch>='a' && ch<='z')
   ch=ch-32;
 for(i='A'; i<=ch; i++)
 {
   for(j='A'; j<=i; j++)
      printf("%c",j);
   for(j=i-1; j>='A'; j--)
      printf("%c",j);
   printf("\n");
 }
 for(k=ch-1,i='A'; i<ch; i++,k--)
 {
   for(j='A'; j<=k; j++)
      printf("%c",j);
   for(j=k-1; j>='A'; j--)
      printf("%c",j);
   printf("\n");
 }
}

/* Pattern Number 13 */
{	
 int a,b,c1=1,c2=15;
 for(a=5; a>=1; a--)
 {
  if(a%2==0)
  {
    for(b=1; b<=a; b++,c2--)
       printf(" %d",c2);
  }
  else
  {
     for(b=1; b<=a; b++,c1++)
       printf(" %d",c1); 
  }
  printf("\n");
 }
}

/* Pattern Number 14 */
{
 char ch,i,j;
 printf("Enter Any Character : ");
 scanf(" %c", &ch);
 if(ch>='a' && ch<='z')
    ch=ch-32;
 for(i='A'; i<=ch; i++)
 {
   for(j=i; j>='A'; j--)
      printf("%c",j);
   for(j='B'; j<=i; j++)
      printf("%c",j);
   printf("\n");
 }
}

/* Pattern Number 15 */
{
 int num,i,j;
 printf("Enter Any Number : ");
 scanf("%d", &num);
 for(i=1; i<=num; i++)
 {
   for(j=i; j>=1; j--)
      printf("%d",j);
   for(j=2; j<=i; j++)
      printf("%d",j);
   printf("\n");
 }
}

/* Pattern Number 16 */
{
 int num,i,j,k,l;
 printf("Enter maximum number : ");
 scanf(" %d", &num);
 for(i=1,k=0; i<=num+1; i++,k++)
 {
   for(j=1,l=k; j<=i; j++,l--)
       printf("%d", l);
   for(j=1; j<i; j++)
       printf("%d", j);
   printf("\n");
 }
}

/* Pattern Number 17 */
{
	int num,i,j,k,l,m,n;
	printf("Enter any number : ");
	scanf(" %d", &num);
	m=num;
	l=1;
	for(i=1; i<=num; i++,l=l+7-i,m--)
	{
		k=l;
		n=num-i;
		for(j=1; j<=i; j++,k=k-n)
		{
			printf(" %d", k);
			n++;
		}
		printf("\n");
	}
}

/* Pattern Number 18 */
{
	int num,i,j,k,l;
	printf("Enter Any Number : ");
	scanf(" %d", &num);
	for(i=1; i<=num; i++)
	{
		for(k=num-i; k>=1; k--)
		printf(" ");
		printf("%d",i);
		for(k=i*2; k>1; k--)
		printf(" ");
		printf("%d",i);
		printf("\n");
	}
	for(i=1, l=num-1; i<num; i++, l--)
	{
		for(k=i; k>=1; k--)
		printf(" ");
		printf("%d", l);
		for(k=l*2; k>1; k--)
		printf(" ");
		printf("%d", l);
		printf("\n");
	}
}

/* Pattern Number 19 */
{
	int num=5,i,j;
	for(i=1; i<=num; i++)
	{
		if(i%2==0)
		printf("*");
		else if(i%3==0)
		{
			for(j=1; j<=i; j++)
			printf("*");
		}
		else
		{
			for(j=1; j<=num; j++)
			printf("*");
		}
		printf("\n");
}
}

/* Pattern Number 20 */
{
	int num=5,i,j;
	for(i=1; i<=num; i++)
	{
		for(j=1; j<=num; j++)
		{
			if((j==2 || j==3 || j==4) && (i==1))
			printf(" ");
			else if((j==3) && (i==2))
			printf(" ");
			else if((j==2 || j==4) && (i==3))
			printf(" ");
			else if((j==2 || j==3 || j==4) && (i==4 || i==5))
			printf(" ");
			else 
			printf("*");
		}
		printf("\n");
}
}

/* Pattern Number 20 */
{
	int i,j,k=1,l=5,m,n;
	for(i=1; i<=5; i++,k=k+7-i,l--)
	{
		m=k;
		n=l;
		for(j=1; j<=i; j++,m=m-n++)
		printf(" %d", m);
		printf("\n");
	}
}

/* Pattern Number 21 */
{
	int num=3,i,j,k,l;
	l=num;
	for(i=1; i<=num; i++, l=l-2)
	{
		for(k=i; k>1; k--)
		printf(" ");
		printf("*");
		for(j=l; j>=1; j--)
		printf(" ");
		if(i<num)
		printf("*");
		printf("\n");
	}	
}

/* Pattern Number 22 */
{
	int m;
	char ch,i,j,k,l,sp;
	printf("Enter Any Character : ");
	scanf(" %c", &ch);
	if(ch>='a' && ch<='z');
	ch=ch-32;
	for(i='A',k=ch; i<=ch; i++,k--)
	{
		for(sp=i; sp>'A'; sp--)
		printf(" ", sp);
		for(j=i,l=k; j<=ch; j++,l--)
		printf("%c", l);
		for(m=ch-i,l='B'; m>=1; m--,l++)
		printf("%c", l);
		printf("\n");
	}
}

/* Pattern Number 23 */
{
	int i,j;
	for(i=1; i<=4; i++)
	{
		for(j=1; j<=5; j++)
	{
		if((j==1 || j==2 || j==4 || j==5) && (i==2 || i==3))
		printf(" ");
		else if((j==1 || j==2 || j==4 || j==5) && (i==4 || i==5))
		printf(" ");
		else
		printf("*");
	}
	printf("\n");
	}	
}

/* Pattern Number 24 */
{
	int num,i,j,k,l=4,m=4,n=1;
	for(i=1; i<=l; i++)
	{
		for(j=1; j<=i; j++, n++)
		printf("%d", n);
		printf("\n");
	}
	for(i=l-1; i>1; i--,m=m-2)
	{
		for(j=1,k=m; j<=i; j++,k++)
		printf("%d", k);
		printf("\n");
	}
		printf("1");
}

/* Pattern Number 25 */
{
	int num=4,i,j,k=num+1,l,m,n,o;
	for(i=1; i<=num; i++, k--)
	{
		for(j=1,l=num; j<=i; j++,l--)
		printf("%d",l);
		for(j=1,m=k; j<i; j++, m++)
		printf("%d",m);
		printf("\n");	
	}
	for(i=num-1,n=1; i>=1; i--,n--)
	{
		for(j=i,l=num; j>=1; j--,l--)
		printf("%d",l);
		for(j=i,o=num-n; j>1; j--,o--)
		printf("%d",o);
		printf("\n");
	}
}		

/* Pattern Number 26 */
{
	int i,j,k;
	for(i=1; i<=4; i++)
	{
		if(i%2==0)
	{
		if(i==2)
		{
			for(j=1,k=8; j<=4; j++,k--)
			printf(" %d", k);
		}
		else
		{
			for(j=1,k=16; j<=4; j++,k--)
			printf(" %d", k);
		}
	}
	else
	{
		if(i==1)
		{
			for(j=1; j<=4; j++)
		 	printf(" %d", j);
		}
		else
		{
			for(j=1,k=9; j<=4; j++,k++)
			printf(" %d", k);
		}
	}
	printf("\n");
}
}

/* Pattern Number 27 */
{
	int i,j;
	printf("Enter Any Number : ");
	scanf(" %d", &num);
	for(i=1; i<=num; i++)
	{
		for(j=i; j<=num; j++)
		printf(" ");
		printf("%d\n", i);
	}
}

/* Pattern Number 28 */
{
	int num,i,j,k,l;
	printf("Enter Any Number : ");
	scanf(" %d", &num);
	printf("Enter Last Number : ");
	scanf(" %d", &k);
	{
		for(i=1; i<=k; i++)
		printf("%d", i);
		printf("\n");
 	}
	for(i=2; i<=num; i++)
	{
		for(j=2,l=i; j<=k; j++,l=i*j)
		printf("%d", l);
		printf("\n");
	}
}

/* Pattern Number 29 */
{
  char ch, i, j, k, l, m, n;
  printf ("Enter Any Character : ");
  scanf (" %c", &ch);
  if (ch >= 'a' && ch <= 'z')
	ch = ch - 32;
  for (i='A', k=ch; i<=ch; i++, k--)
	{
	  for (j=i, l=k; j>='A'; j--, l++)
		printf ("%c", l);
	  for (j=i, l=ch-1; j>'A'; j--, l--)
		printf ("%c", l);
	  printf ("\n");
	}
	for (i='A', k=ch-1; i<ch; i++, k--)
	{
	    for(j=i,l=i+1; j<ch; j++,l++)
	    printf ("%c", l);
	    for(j=k, l=ch-1; j>'A'; j--,l--)
	    printf ("%c", l);
	    printf ("\n");
	}
}

/* Pattern Number 30 */
{
  int num,i,j,k,l;
  printf("Enter Any Number : ");
  scanf(" %d", &num);
  for(i=1,k=num; i<=num; i++,k--)
  {
      for(j=i,l=k; j>=1; j--,l++)
      printf("%d", l);
      for(j=i, l=num-1; j>1; j--,l--)
      printf("%d", l);
      printf("\n");
  }
  for(i=1; i<num; i++)
  {
      for(j=i,l=i+1; j<num; j++,l++)
      printf("%d", l);
      for(j=num-i,l=num-1; j>1; j--,l--)
      printf("%d", l);
      printf("\n");
  }
}

/* Pattern Number 31 */
{
   int num,i,j;
   printf("Enter Any Number : ");
   scanf(" %d", &num);
   for(i=1; i<=num; i++)
   {
       for(j=i; j<=num; j++)
       printf("%d",j);
       printf("\n");
   }
}

/* Pattern Number 32 */
{
   char ch,i,j;
   printf("Enter Any Character : ");
   scanf(" %c", &ch);
   if(ch>='a' && ch<='z')
   ch=ch-32;
   for(i='A'; i<=ch; i++)
   {
       for(j=i; j<=ch; j++)
       printf("%c",j);
       printf("\n");
   }
}

/* Pattern Number 33 */
{
   int num,i,j;
   printf("Enter Any Numbers : ");
   scanf(" %d", &num);
   for(i=num; i>=1; i--)
   {
       for(j=num; j>=1; j--)
       printf("%d", j);
       printf("\n");
   }
}

/* Pattern Number 34 */
{
   int num,i,j;
   printf("Enter Any Numbers : ");
   scanf(" %d", &num);
   for(i=num; i>=1; i--)
   {
       for(j=num; j>=1; j--)
       printf("%d", i);
       printf("\n");
   }
}

/* Pattern Number 35 */
{
   int num,i,j;
   printf("Enter Any Numbers : ");
   scanf(" %d", &num);
   for(i=num; i>=1; i--)
   {
       for(j=1; j<=i; j++)
       printf("%d", j);
       printf("\n");
   }
}

/* Pattern Number 36 */
{
   int num,i,j,k;
   printf("Enter Any Numbers : ");
   scanf(" %d", &num);
   for(i=1; i<=num; i++)
   {
       for(j=i; j<=num; j++)
       {
          printf(" "); 
       }
   for(k=1; k<=i; k++)
    {
      printf("%d", k);
    }
       printf("\n");
 }
}

/* Pattern Number 37 */
{
   int num,i,j,k;
   printf("Enter Any Numbers : ");
   scanf(" %d", &num);
   for(i=1; num>=1; i++,num--)
   {
       for(j=i; j>=1; j--)
       {
          printf(" "); 
       }
   for(k=1; k<=num; k++)
    {
      printf("%d", k);
    }
       printf("\n");
 }	
}

/* Pattern Number 38 */
{
 int num,i,j,k,l;
 printf("Enter Any Number :");
 scanf(" %d",&num);
 for(i=1; num>=i; i++)
 {
   for(k=num-i; k>=1; k--)
      printf(" ");
   for(j=1; j<=i; j++)
      printf("%d",j);
   for(l=i-1; l>=1; l--)
      printf("%d",l);
   printf("\n");
 }
}

/* Pattern Number 39 */
{
 char ch,i,j,k;
 printf("Enter Any character : ");
 scanf(" %c",&ch);
 if(ch>='a' && ch<='z')
   ch=ch-32;
 for(i='A'; ch>=i; i++)
 {
   for(k=ch-i; k>=1; k--)
       printf(" ");
   for(j='A'; i>=j; j++)
       printf("%c",j);
   for(j=i-1; j>='A'; j--)
       printf("%c",j);
   printf("\n");
 }
}

/* Pattern Number 40 */
{
 int num,k,i,j;
 printf("Enter Any number : ");
 scanf(" %d",&num);
 for(i=1; i<=num; i++)
 {
   for(j=1; j<=i; j++)
      printf("%d",i);
   printf("\n");
 }
 for(k=num-1; k>=1; k--)
 {
   for(j=1; j<=k; j++)
      printf("%d",k);
   printf("\n");
 }
}

/* Pattern Number 41 */
{
  char ch,i,j,k;
  printf("Enter any character : ");
  scanf(" %c", &ch);
  if(ch>='a' && ch<='z')
    ch=ch-32;
  for(i='A'; i<=ch; i++)
  {
     for(j='A'; j<=i; j++)
        printf("%c",i);
     printf("\n");
  }
  for(k=ch-1; k>='A'; k--)
  {
     for(j='A'; j<=k; j++)
        printf("%c",k);
     printf("\n");
  }
}

/* Pattern Number 42 */
{
 int num,i,j,k;
 printf("Enter Any number : ");
 scanf(" %d",&num);
 for(i=1; i<=num; i++)
 {
   for(k=i; k>1; k--)
      printf(" ");
   for(j=i; j<=num; j++)
      printf("%d",j);
   for(j=num-1; j>=i; j--)
      printf("%d",j);
   printf("\n");
 }
}

/* Pattern Number 43 */
{
 int num,i,j;
 printf("Enter repeat number : ");
 scanf(" %d",&num);
 for(i=1 ;num>=i; num--)
 {
  for(j=num; j>=i; j--)
     printf("%d",j);
  printf("\n");
 }
}

/* Pattern Number 44*/
{
 int num,i,j,k;
 printf("Enter Any number : ");
 scanf(" %d",&num);
 for(i=1; i<=num; i++)
 {
   for(k=num-i; k>0; k--)
       printf(" ");
   for(j=i; j>=1; j--)
       printf("%d",j);
   for(j=2; j<=i; j++)
       printf("%d",j);
   printf("\n");
 }
 for(i=1; i<=num; i++)
 {
   for(k=i; k>=1; k--)
       printf(" ");
   for(j=num-i; j>=1; j--)
       printf("%d",j);
   for(j=2; j<=num-i; j++)
       printf("%d",j);
   printf("\n");
 }
}

/* Pattern Number 45*/
{
 char ch,i,j,k;
 printf("Enter last character : ");
 scanf(" %c",&ch);
 if(ch>='a' && ch<='z')
   ch=ch-32;
 for(i='A'; i<=ch; i++)
 {
   for(k=ch-i; k>=1; k--)
      printf(" ");
   for(j='A'; j<=i; j++)
      printf("%c",j);
   for(j=i-1; j>='A'; j--)
      printf("%c",j);
   printf("\n");
 }
}

/* Pattern Number 46*/
{
 char ch,i,j,k;
 printf("Enter last character : ");
 scanf(" %c",&ch);
 if(ch>='a' && ch<='z')
    ch=ch-32;
 printf("\n");
 for(i='A'; i<=ch; ch--)
 {
   for(j=ch; j>=i; j--)
       printf("%c",j);
   printf("\n");
 }
}

/* Pattern Number 47*/
{
 char ch,i,j;
 printf("Enter last character : ");
 scanf(" %c",&ch);
 if(ch>='a' && ch<='z')
    ch=ch-32;
 printf("\n");
 for(i='A'; i<=ch; i++)
 {
    for(j=i; j>='A'; j--)
        printf("%c",j);
    printf("\n");
 }
 for(i='A'; 'A'<=ch; ch--,i++)
 {
    for(j=ch-1; j>='A'; j--)
        printf("%c",j);        
    printf("\n");
 }
}

/* Pattern Number 48*/
{
 int num,i,j,k,l=1;
 printf("Enter any number : ");
 scanf(" %d", &num);
 for(i=1; i<=num; i++)
 {
  for(k=1; k<=num-i; k++)
    printf(" ");
  for(j=1; j<=i; j++,l++)
    printf("%d ",l);  
  printf("\n");
 }
}

/* Pattern Number 49*/
{
 int num,i,j,k;
 printf("Enter Any number : ");
 scanf(" %d", &num);
 for(i=1; i<=num; i++)
 {
   for(k=num; k>=i; k--)
      printf(" ");
   for(j=1; j<=i; j++)
      printf(" %d", j);
   printf("\n");
 }
}

/* Pattern Number 50*/
{

 int num,i,j,k;
 printf("Enter any number : ");
 scanf(" %d", &num);
 for(i=1; i<=num; i++)
 {
  for(j=i; j<=num; j++)
     printf("%d",j);
  for(k=1; k<i; k++)
     printf("%d",k);
  printf("\n");
 }
}
	  return 0;
}
	