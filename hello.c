#include <stdio.h>

int square(int x)
{
    return x*x;
}

int println(char *x)
{
    printf("%s\n", x);
}
 
int main()
{
    printf("hello world\n");
    println("good bye");

}