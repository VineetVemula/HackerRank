int birthdayCakeCandles(int n, int ar_size, int* ar) {
    // Complete this function
    int count=0,max=0,i;
    for(i=0;i<n;i++)
    {
        if(max<ar[i])
        {
            max=ar[i];
            count=0;
        }
        if(max==ar[i])
            count++;
    }
    return count;
}

int main() {
    int n; 
    scanf("%i", &n);
    int *ar = malloc(sizeof(int) * n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       scanf("%i",&ar[ar_i]);
    }
    int result = birthdayCakeCandles(n, n, ar);
    printf("%d\n", result);
    return 0;
}
