#include <stdio.h>

bool isPalindrome(int x){
    if (x < 0)
        return 0;
    
    long y = 0;
    long temp = x;
    while (temp) {
        y = y * 10 + (temp % 10);
        temp /= 10;
    }
    return y == x;
}

/*
int isPalindrome(int x){
    if (x < 0)
        return 0;
    if (x == 0)
        return 1;
    int digits = 0;
    int y = x;
    while (y) {
        y = y / 10;
        digits++;
    } 

    y = x;
    int numbers[digits];
    for (int i=0; i<digits; i++) {
        numbers[i] = y % 10;
        y = y / 10;
    }

    int left = 0;
    int right = digits - 1;
    while (left < right) {
        if (numbers[left] != numbers[right])
            return 0;
        left++;
        right--;
    }
    return 1;
}
*/

int main()
{
    int x = 1;
    
    printf("IsPalindrome: %i\n", isPalindrome(x));

    return 0;
}

