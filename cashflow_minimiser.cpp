#include <stdio.h>
#include <stdlib.h>

void minimizeCashFlow(int n, int *credits, int *debts) {
  int i, j;

  while (1) {
    int maxCreditIndex = -1, maxDebtIndex = -1;
    int maxCredit = 0, maxDebt = 0;


    for (i = 0; i < n; i++) {
      if (credits[i] > maxCredit) {
        maxCredit = credits[i];
        maxCreditIndex = i;
      }
      if (debts[i] > maxDebt) {
        maxDebt = debts[i];
        maxDebtIndex = i;
      }
    }


    if (maxCredit == 0 && maxDebt == 0) {
      break;
    }


    int minAmount = (maxCredit < maxDebt) ? maxCredit : maxDebt;


    credits[maxCreditIndex] -= minAmount;
    debts[maxDebtIndex] -= minAmount;


    printf("Person %d pays $%d to Person %d\n", maxDebtIndex, minAmount, maxCreditIndex);
  }
}

int main() {
  int n, i;
  int *credits, *debts;

  printf("Enter the number of people: ");
  scanf("%d", &n);

  credits = (int *)malloc(n * sizeof(int));
  debts = (int *)malloc(n * sizeof(int));

  printf("Enter the credit amounts for each person:\n");
  for (i = 0; i < n; i++) {
    printf("Person %d: $", i);
    scanf("%d", &credits[i]);
  }

  printf("Enter the debt amounts for each person:\n");
  for (i = 0; i < n; i++) {
    printf("Person %d: $", i);
    scanf("%d", &debts[i]);
  }

  minimizeCashFlow(n, credits, debts);

  free(credits);
  free(debts);

  return 0;
}
