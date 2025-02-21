int sum(int k);

int main()
{
    int n;
    printf("Enter num: ");
    scanf("%d", &n);
    int result = sum(n);

    printf("%d", result);
    return 0;
}

int sum(int k) {
  if (k > 0) {
    return k + sum(k - 1);
  } else {
    return 0;
  }
}






