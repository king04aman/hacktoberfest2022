

  #include <stdio.h>

  int main() {
        int value, digit, oddSum, evenSum, rev, count = 1;

        rev = oddSum = evenSum = 0;

        printf("Enter the input number:");
        scanf("%d", &value);

        while (value > 0) {
                digit = value % 10;
                rev = (rev * 10) + digit;
                value = value / 10;
        }

        value = rev;

        while (value > 0) {
                digit = value % 10;
                if (count % 2 == 0) {
                        evenSum = evenSum + digit;
                } else {
                        oddSum = oddSum + digit;
                }
                value = value / 10;
                count++;
        }

        
        printf("Sum of odd digits is %d\n", oddSum);
        printf("Sum of even digits is %d\n", evenSum);
        return 0;
  }
