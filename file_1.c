#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculate the sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);
    return 0;
}
//function added in branch1
int func_add(int a, int b)
{
<<<<<<< HEAD
	// Varsha has made a change here.
=======
	//Changes are made now
>>>>>>> branch2
	return a+b;
}
