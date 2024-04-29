#include <stdio.h>
int main() {    

    int numb1, numb2, sum;
    
    printf("Enter two integers: ");
    scanf("%d %d", &numb1, &numb2);

    // calculate the sum
    sum = numb1 + numb2;      
    
    printf("%d + %d = %d", numb1, numb, sum);
    return 0;
}
//function added in branch1
int func_add(int a, int b)
{
	// i am in main branch
	// i am making this changes in 
	// one more change 
	return a+b;
}
