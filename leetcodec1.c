#include <stdio.h>
#define MAX 100

int top = -1;
char stack[MAX];

void push(char ch)
 {
    if(top==MAX-1)
    {
        printf("Stack Overflow\n");
    }else
    {
    stack[++top] = ch;
    }
}

char pop() 
{   if(top==-1)
    {
    printf("stack underflow\n");
    }else
    {
    return stack[top--];
    }
}

int main() {
    char a[MAX];
    char x;
    int i, j;

    printf("Enter the string: ");
    scanf("%s", a);

    printf("Enter the end character: ");
    scanf(" %c", &x);


    for (i = 0; a[i] != '\0'; i++) {
        push(a[i]);

        if (a[i] == x)
            break;
    }


    j = 0;
    while (top != -1) {
        a[j++] = pop();
    }

    printf("Result: %s", a);

    return 0;
}
