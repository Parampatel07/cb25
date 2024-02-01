// Write a programe to findout how many days given month has without using else if ladder 
// and or 
#include<stdio.h>
void
main ()
{
  int month = 0;

  printf ("Enter value of month ");
  scanf ("%d", &month);

  if (month <= 7)
	{
	  if (month == 2)
		{
		  printf ("This month has 28 or 29 days ");
		}
	  else
		{
		    if (month % 2 == 0)
			{
			  printf ("This month has 30 days ");
			}
		    else
			{
			  printf ("This month has 31 days ");
			}
		}
	}
    else
    {
        if(month % 2 == 0){
            printf("This month has 31 days ");
        }
        else
        {
            printf("This month has 30 days ");
        }
    }
}
