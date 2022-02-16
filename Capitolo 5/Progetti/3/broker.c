#include <stdio.h>

int main(void)
{
  int num;

  float commission, price, value, rival;

  printf("Enter number of actions: ");
  scanf("%d", &num);
  printf("Enter price of a single action: ");
  scanf("%f", &price);

  value = num * price;

  if (value < 2500.00f)
    commission = 30.00f + .017f * value;
  else if (value < 6250.00f)
    commission = 56.00f + .0066f * value;
  else if (value < 20000.00f)
    commission = 76.00f + .0034f * value;
  else if (value < 50000.00f)
    commission = 100.00f + .0022f * value;
  else if (value < 500000.00f)
    commission = 155.00f + .0011f * value;
  else
    commission = 255.00f + .0009f * value;

  if (commission < 39.00f)
    commission = 39.00f;

  rival = (num<2000)?(33 + 0.03f*num):(33 + 0.02f*num);

  printf("Commission: $%.2f\n", commission);
  printf("Rival: $%.2f\n", rival);

  return 0;
}
