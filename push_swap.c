#include <string.h>
#include <stdio.h>

void ft_sa(int *a)
{
    int cmpt;

    cmpt = a[0];
    a[0] = a[1];
    a[1] = cmpt; 
}

void ft_sb(int *b)
{
    int cmpt;

    cmpt = b[0];
    b[0] = b[1];
    b[1] = cmpt; 
}

void ft_ss(int *a, int *b)
{
    ft_sa(a);
    ft_sb(b);   
}

int *ft_pa(int *a, int *b, int c)
{
    a = realloc(a, (c + 1) * 4);
    while (c - 1 >= 0)
    {
        a[c] = a[c - 1];
        c--;
    }
    a[0] = b[0];
    return (a);
}

int *ft_pb(int *a, int *b, int c)
{
    b = realloc(b, (c + 1) * 4);
    while (c - 1 >= 0)
    {
        b[c] = b[c - 1];
        c--;
    }
    b[0] = a[0];
    return (b);
}

void ft_ra(int *a, int c)
{
    int cmpt;
    int i;
    
    cmpt = a[0];
    i = 0;
    while (i + 1 < c)
    {
        a[i] = a[i + 1];
        i++;
    }
    a[c - 1] = cmpt;
}

void ft_rb(int *b, int c)
{
    int cmpt;
    int i;
    
    cmpt = b[0];
    i = 0;
    while (i + 1 < c)
    {
        b[i] = b[i + 1];
        i++;
    }
    b[c - 1] = cmpt;
}

int main() {
  int *a;
  int *b;
  a = malloc(3 * 4);
  b = malloc(3 * 4);
  a[0] = 0;
  a[1] = 1;
  a[2] = 2;
  b[0] = 3;
  b[1] = 4;
  b[2] = 5;
  a = ft_pa(a, b, 3);
  sleep(1565135);
  return 0;
}