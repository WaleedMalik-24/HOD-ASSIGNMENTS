#include <stdio.h>

int main() {
    char gender;
     printf("Enter a single letter \n 'M' OR 'm' for male - Any other letter for Female : "); n// Input a single character
    scanf("%c", &gender);
    if (gender == 'm' || gender == 'M')   // Checking if the input is 'm'/'M' or not
	 {
        printf("You are a male\n");
    } else {
        printf("You are a female\n");
    }

    return 0;
}

