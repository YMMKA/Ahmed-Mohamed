#include <stdio.h>
#include <stdlib.h>
#include  <string.h>
typedef struct list 
{
  
char bookname[100];
   
int id;
   
char author[100];
   
float price;
 
} List;

struct listNode 
{
  
List l;
  
struct listNode *nextPtr;
 
};

typedef struct listNode ListNode;

typedef ListNode *ListNodePtr;

// display program instructions to user
  void
printMessageCenter (const char *message) 
{
  
int len = 0;
  
int pos = 0;
  
    //calculate how many space need to print
    len = (78 - strlen (message)) / 2;
  
printf ("\t\t\t");
  
for (pos = 0; pos < len; pos++)	//print space
    {
      
printf (" ");
    
}
  
printf ("%s", message);	//print message
}


int
isNameValid (const char *name)
{
  
int validName = 1;
  
int len = 0;
  
int index = 0;
  
len = strlen (name);
  
for (index = 0; index < len; ++index)
    
    {
      
if (!(isalpha (name[index])) && (name[index] != '\n')
	   && (name[index] != ' '))
	
	{
	  
validName = 0;
	  
break;
	
}
    
}
  
return validName;

}


// print the list
  void
displayAll (ListNodePtr currentPtr) 
{
  
// if list is empty
    if (isEmpty (currentPtr))
    
    {
      
puts ("List is empty.\n");
    
}
  
  else
    
    {
      
// while not the end of the list
	while (currentPtr != NULL)
	
	{
	  
 
printf ("Bookname:%s\n", currentPtr->l.bookname);
	  
printf ("Book Id:%d\n", currentPtr->l.id);
	  
printf ("Book author:%s\n", currentPtr->l.author);
	  
printf ("Book price:%f\n\n", currentPtr->l.price);
	  
currentPtr = currentPtr->nextPtr;
	
}
    
}

}
