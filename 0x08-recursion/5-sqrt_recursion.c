#include "main.h"

/**
 * power_operation - returns the natural square root of a number.
 * @n: input number.
 * @c: iterator.
 * Return: square root or -1.
 */


Print Recursive Function Output


natal-draft.0j@icloud.com
What does this code print?

int print(int nb)
{
    if (nb < 0) 
    {
        return (0);
    }
    printf("%d", nb + print(nb - 1));
    nb --;
    return (nb);
}

int main(void)
{
    print(4);
    return (0);
}

01234568


64200


00246

2 / 2


102345678




natal-draft.0j@icloud.com
What does this code print?

void print(int nb)
{
    printf("%d", nb);
    nb ++;
    if (nb < 10) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}

456789


987654


345678910


109876543

45678910




natal-draft.0j@icloud.com
What does this code print?

void print(int nb)
{
    if (nb < 0) 
    {
        return;
    }
    printf("%d", nb);
    nb --;
    print(nb);
}

int main(void)
{
    print(4);
    return (0);
}

4321


01234


1234

4321




natal-draft.0j@icloud.com
What does this code print?

void print(int nb)
{
    printf("%d", nb);
    nb --;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(2);
    return (0);
}

210


012


21


12

210




natal-draft.0j@icloud.com
What does this code print?

void print(int nb)
{
    printf("%d", nb);
    -- nb;
    if (nb > 0) 
    {
        print(nb);
    }
}

int main(void)
{
    print(4);
    return (0);
}

3210


4321


321


43210

43210




natal-draft.0j@icloud.com
Write a function that returns the natural square root of a number.

Prototype: int _sqrt_recursion(int n);
If n does not have a natural square root, the function should return -1

int _sqrt_recursion(int n)
{
if (n < 0)
{
return -1;
}
else if (n == 0 || n == 1)
{
return n;
}
else
{
int i;
for (i = 1; i * i <= n; i++)
{
if (i * i == n)
{
return i;
}
}
return -1;
}
}




natal-draft.0j@icloud.com
write without loops

int _sqrt_recursion(int n, int i)
{
if (n < 0)
{
return -1;
}
else if (n == 0 || n == 1)
{
return n;
}
else if (i * i == n)
{
return i;
}
else if (i * i > n)
{
return -1;
}
else
{
return _sqrt_recursion(n, i + 1);
}
}

int _sqrt_recursion(int n)
{
return _sqrt_recursion(n, 1);
}
