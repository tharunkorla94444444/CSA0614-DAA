#include <stdio.h>
#include <string.h>
void string();
void number();
char a[100], b[100];
int c;
int main()
{
  printf("case 1 = string.\ncase 2= number.\n");
  printf("\nchoose case:: ");
  scanf("%d",&c);
  switch(c)
  {
  	case 1:
  		string();
  		break;
  	case 2:
  		number();
  		break;
  	default:
  		printf("enter valid input.");
  		break;
  }
}
  	void string()
 	{
  		printf("Enter a string :\n");
  		scanf("%s",a);
  		strcpy(b, a); 
  		strrev(b);  

  		if (strcmp(a, b) == 0)  
    		printf("Given string is palindrome.\n");
  		else
    		printf("Given string is Not palindrome.\n");
	}

	void number()
  	{
  		printf("Enter a number :\n");
  		scanf("%s",a);
  		strcpy(b, a); 
  		strrev(b);  

  		if (strcmp(a, b) == 0)  
    		printf("Given number is palindrome.\n");
  		else
    		printf("Given number is Not palindrome.\n");
	}
