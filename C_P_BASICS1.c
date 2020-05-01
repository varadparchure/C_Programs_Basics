/*
VARAD PARCHURE
IT
*/

swap two numbers


#include<stdio.h>


void main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	
	printf("numbers before swapping a= %d , b=%d " ,a,b );
	
	int temp;
	
	temp=a;
	a=b;
	b=temp;
	
	printf("swaped numbers are a=%d , b= %d",a,b);
	
}





//*************************************************************************************************************************************************




/*string reversal


#include<stdio.h>


void main()
{
char a[10];


printf("enter a string\n");
scanf("%s",a);
printf("string is %s\n",a);


int i=0,j=0,k=0;
int n;
char b[10];

while(a[i]!= '\0')
{
	
	i++;
	
}	
	


printf("\nlength is %d\n",i);	



for(j=i-1;j>=0;j--)
{
	b[k++]=a[j];
	
	
}
	b[j]= '\0';


printf("reverse string issss \n %s" ,b);

}


*/



//*******************************************************************************************************************



/*FACTORIAL OF A NUMBER


#include<stdio.h>

void main()
{

int a;

printf("\nEnter a number \n");
scanf("%d",&a);



int i,j=1;

for(i=1;i<=a;i++)
{
	
	j=j*i;
	
}


printf("factorial of %d is %d",a,j);



}*/




























//***********************************************************************************************************************

/*CHECK PALINDROME OR NOT SRTING AND NUMBER


#include<stdio.h>
#include<string.h>


void main()
{
int flag=0, len=0;

char a[10];

printf("enter the string\n");
scanf("%s",a);	
	
int i=0,j=strlen(a)-1;


while(j>i)
{


if(a[i++]!=a[j--])
{

printf("is not palindrome");
	return;
}	

}


	printf(" a palindrome");


}	

*/
	

//*********************************************************************************************************************************


/*AREA OF CIRCLE TRIANGLE AND ADDITION OF TWO NUMMBERS USING CASE AND FUNCTIONS


#include<stdio.h>


int areacir(int r)
{
	float area;
	area=3.142*(r*r);
	return area;
}



int arrec(int l,int b)
{
	float area;
	area=l*b;
	return area;
	
	
}




void main()
{
int choice;
int r,l,b,a,c;
float ar;

do{
printf("\n 1:AREA CIRCLE \n 2:AREA RECTANGLE , \n 3:ADDITION OF NUMBERS , \n 4:exit\n");
scanf("%d",&choice);

switch(choice)
{
		case 1:
		printf("enter radius of circle\n");
		scanf("%d",&r);
		ar=areacir(r);
		printf("\nArea of circle is :  %f\n",ar);
		
		break;
	
	
	
	
case 2:
printf("Enter l and b of rectangle\n");
scanf("%d%d",&l,&b);
ar=arrec(l,b);
		printf("\nArea of rectangle is :  %f\n",ar);


break;
	
	case 3:
	printf("Enter two numbers\n");
scanf("%d%d",&a,&c);
ar=a+c;
printf("addition is: %f\n",ar);

	break;
	
}	
	
}while(choice!=4);





}
*/












//*********************************************************************************************************************************






/*PALINDROME FOR A NUMBER


#include<stdio.h>
#include<string.h>


void main()
{
	int flag=0;
	char a[10];
	
	printf("enter a number\n");
	scanf("%s",a);
	
	
	
	
	int i=0,j=strlen(a)-1;
	
	while(i<j)
	{
		if(a[i++]!=a[j--])
		{
			printf("\n not a palindrome\n");
			flag=1;
			break;
		}
		
	
	}
	
	if(flag==0)
	printf("\nis a palindrome\n");
	
	
}


*/
















//#######################################################################################################################



/*REVERSE DIGITS OF A NUMBER
	



#include<stdio.h>
#include<string.h>


void main()
{
	char a[10],b[10];
	printf("enter a number\n");
	scanf("%s",a);
	
	int i,j=0;
	for(i=strlen(a)-1;i>=0;i--)
	{
		
		 b[j++]=a[i];
		
		
	}
	
	
	printf("%s",b);
	
	
	
}







*/




//#######################################################################################################################






/*•	CHECKING PRIME OR NOT


#include<stdio.h>
#include<string.h>


void main()
{

int a;
printf("enter a number\n");
	scanf("%d",&a);

	
	int i,prime=0;
	
	
	for(i=1;i<=a;i++)
	{
		
		if(a%i==0)
			prime++;
	}
	
	if(prime==2)
		printf("prime no");
	else
		printf("not a prime");
	
}




*/















//#######################################################################################################################




/*•	DECIMAL TO BINARY 




#include<stdio.h>
#include<string.h>


void main()
{


int n;
printf("enter a number\n");
	scanf("%d",&n);


int b[10];


int i=0;

while(n>0)
{
	 b[i]= n%2;
	 n=n/2;
	 i++;
	
}

int j;
for(j=i-1;j>=0;j--)
printf("%d",b[j]);
}



*/























//###############################################################################################################################



/*•	fibonacci series



#include<stdio.h>
#include<string.h>


void main()
{


int n,i;
printf("enter a number\n");
	scanf("%d",&n);



int t1=0,t2=1,c;

for(i=2;i<=n;i++)
{
	 
	 c=t1+t2;
	 t1=t2;
	 t2=c;
	 
	 printf("%d ",t2);
	
}
}


*/

//********************************************************************************************************************************




/*malloc


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	int *a,n;
	
	printf("enter size of n\n");
	scanf("%d",&n);
	
	
	a= (int*)malloc(n *sizeof(int));
	int i;
	
	 for (i = 0; i < n; i++) 
	 { 
        a[i] = i + 1; 
       } 
  
  
  
        // Print the elements of the array 
        printf("The elements of the array are: "); 
        for (i = 0; i < n; i++) { 
            printf("%d, ", a[i]); 
        } 
	
	
	
}


*/






//********************************************************************************************************************************

/*structure


#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void main()
{
	
	
	struct emp
	 {
		char name[10];
		long int phno;
		
   	}e1;
	
	
	printf("enter the name\n");
	scanf("%s",e1.name);
	printf("enter the phno\n");
	scanf("%ld",&e1.phno);


printf("Name and Phno of employee is %s and %ld",e1.name,e1.phno);	
	
	
}

*/









//********************************************************************************************************************************





/*print hello world without using semicolon;


#include<stdio.h>
void main()
{

if(printf("hello")) {}
	
}

	*/
	





//*****************************************************************************************************


/*Write a program to swap two numbers without using the third variable

#include<stdio.h>
void main()
{
	
	int a=1,b=4;
	
	printf("before swapping a=%d and b=%d",a,b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	
	printf("after swapping a=%d and b=%d",a,b);
	
	
	
}
*/




//***********************************************************************************************



/*How can you print a string with the symbol % in it?




#include<stdio.h>
void main()
{
	
printf("there is a 90%% chance of precipitation today ");	
	
}

*/
