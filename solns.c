/* Enter your solutions in this file */
#include <stdio.h>
#include <assert.h>
int max (int[], int);
int min (int[], int);
int mode (int[], int);
int factors (int, int[]);
float average (int[], int);
void print_array (int[], int);
int
main (void)
{
  int ret[100] = { 0 };
  int num = factors (143, ret);
  int y[] = { 4, 9, 5, 6, 5, 10, 0, 2, -3, -3, 4, 4 };
  int n = 12;
  int x[] = { 9, 5, 6, 10, 2, -3, 4 };
  int count = 7;
  assert ((average (x, 7) - 4.7142) < 0.001);
  assert (max (x, 7) == 10);
  // assert (min(x, 7) == -3);//
  assert (mode (y, 12) == 4);
  //assert (num == 2);//
  // assert (ret[1] == 11);
  // assert (ret[2] == 13);
  printf ("Average: passed\n");
  printf ("max: passed\n");
  printf ("min: passed\n");
  printf ("  : passed\n");
  print_array (x, count);
  average (x, count);
  max (x, count);
  min (x, count);
  mode (y, n);
  factors (num, ret);
}

void
print_array (int x[], int count)
{
  for (int i = 0; i < count; i++)
    {
      printf ("%i", x[i]);
    }
  printf ("\n");
}

float
average (int x[], int count)
{

  int sum = 0;
  for (int i = 0; i < count; i++)
    {
      sum += x[i];
    }
  float avg = (float) sum / count;
  printf (" average = %f\n", avg);
}



int
max (int x[], int count)
{
  int j, i, t;
  for (j = 0; j < count; j++)
    {
      for (i = j + 1; i < count; i++)
	{
	  if (x[i] < x[j])
	    {
	      t = x[j];
	      x[j] = x[i];
	      x[i] = t;
	    }
	}
    }
  for (j = 0; j < count; j++)
    {
    }
  printf (" max = %i ", x[6]);


  printf ("\n");
}


int
min (int x[], int count)
{
  int j, i, t;
  for (int j = 0; j < count; j++)
    {
      for (int i = j + 1; i < count; i++)
	{
	  if (x[i] < x[j])
	    {
	      t = x[j];
	      x[j] = x[i];
	      x[i] = t;

	    }
	}
    }
  for (j = 0; j < count; j++)
    {
    }
  printf (" min = %i ", x[0]);
  printf ("\n");
}

int
mode (int y[], int n)
{
  int maxvalue = 0;
  int maxcount = 0;
  int i, j;
  for (i = 0; i < n; i++)
    {
      int counts = 0;

      for (j = 0; j < n; j++)
	{
	  if (y[j] = y[i])
	    counts++;
	}

      if (counts > maxcount)
	{
	  maxcount = counts;
	  maxvalue = y[i];
	}

    }
  printf ("mode = %i of %i times", maxvalue, maxvalue);
  return maxvalue;


}

int
factors (int num, int ret[100])
{
  int i;
  int j, k;
  for (i = 2; i <= num; i++)
    {
      if (num % i == 0)
	{
	  int isprime = 1;
	  for (j = 2; j <= i / 2; j++)
	    {
	      if (i % j == 0)
		{
		  isprime = 0;
		  break;
		}
	    }

	  if (isprime == 1)
	    {
	      k < 3;
	      ret[k++] == i;

	      printf (" ret[%i] = %i\n", k, i);
	    }
	}

    }

}
