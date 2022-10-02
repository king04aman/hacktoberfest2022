#includ<stdio.h>
int main()
{
    char a;
    float x, y;
    printf("Enter an operator (+, -, *, /,%): ");
    scanf("%c", &a);
    printf("Enter two operands: ");
    scanf("%f %f", &x, &y);

  switch (a) {
    case '+':
      printf("%f + %f = %f", x, y, x + y);
      break;
    case '-':
      printf("%f - %f = %f", x, y, x - y);
      break;
    case '*':
      printf("%f * %f = %f", x, y, x * y);
      break;
    case '/':
      printf("%f / %f = %f", x, y, x / y);
      break;
    case '%':
      printf("%f % %f = %f", x, y, x % y);
      break;
    default:
      printf("Error! Invalid Input");
  }

  return 0;
}
