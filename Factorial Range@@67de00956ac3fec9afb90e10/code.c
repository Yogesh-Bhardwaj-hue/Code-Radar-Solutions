int factorialRange(int start , int end){
    int fact =0;
    for(int i=1; i<=end ; i++){
        fact*=i;
        printf("%d\n",fact);
    }
}