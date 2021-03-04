
#include<unistd.h>

void    ft_print_comb202(char ll, char lr, char rl, char rr,int L)
{
    char a;
    char b;

    a = 46;
    b = 32;
    write(1, &ll, 1);
    write(1, &lr, 1);
    write(1, &a, 1);
    write(1, &rl, 1);
    write(1, &rr, 1);
    if (L == 98)
    {

    }else{
        write(1, &b,1);
    }
}

void    ft_print_comb201(int L, int R)
{
    char ll;
    char lr;
    char rl;
    char rr;

    ll = L / 10 + 48;
    lr = L % 10 + 48;
    rl = R / 10 + 48;
    rr = R % 10 + 48;
    ft_print_comb202(ll, lr, rl, rr, L);
}



void    ft_print_comb2(void)
{
    int L;
    int R;

    L = 0;
    R = 1;
    while (L <= 98)
    {
        while (R <= 99)
        {
            ft_print_comb201(L, R);
            R++;
        }
    L++;
    R = L + 1;
    }
}

