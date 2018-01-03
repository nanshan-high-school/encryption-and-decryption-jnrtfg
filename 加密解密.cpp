#include <iostream>
#include <string.h>
void a();
void b();
int main()
{
	int function;
	printf("(1)Lock TEXT\n(2)UnLock TEXT\n");
	printf("Choose 1or2 ");
	scanf("%d",&function);
	switch (function)
	{
		case 1:
			a();
			break;
		case 2:
			b();
			break;
		default:
			printf("Error 404\n");
			printf("No function%d",function);
			break;
	}
	return 0; 
}
void a()
{
	printf("Enter TEXT(MAX:100)");
	int i,j=0;
	char word[101];
	scanf("%s",word);
	for(i=strlen(word);i--;i==0)
	{
		if(j<=strlen(word))
		{
			if(word[j]=='z')
			{
				word[j]=word[j]-26;
			}
			else 
				if(word[j]=='Z')
				{
					word[j]=word[j]-26;
				}
			word[j]++;
			j++;
		}
		
	}
	for(j=0;j<strlen(word);j++)
	{
		printf("%c",word[j]);
	}
	system("PAUSE");
	return;
	
}
void b()
{
	printf("Enter text the nedd Unlock(MAX:100)");
		int i,j=0;
	char word[101];
	scanf("%s",word);
	for(i=strlen(word);i--;i==0)
	{
		if(j<=strlen(word))
		{
			if(word[j]=='a')
			{
				word[j]=word[j]+26;
			}
			else 
				if(word[j]=='A')
				{
					word[j]=word[j]+26;
				}
			word[j]--;
			j++;
		}
		
	}
	for(j=0;j<strlen(word);j++)
	{
		printf("%c",word[j]);
	}
	system("PAUSE");
	return;
}