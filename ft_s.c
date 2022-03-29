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