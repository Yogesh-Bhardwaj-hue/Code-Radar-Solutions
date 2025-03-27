int factorialRange(int start , int end){
    int fact =1;
    for(int i=1; i<=end ; i++){
        fact*=start;
        printf("%d\n",fact);
    }
}