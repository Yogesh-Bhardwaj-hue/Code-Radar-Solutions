int factorialRange(int start , int end){
    int fact =1;
    for(int i=1; i<=end+1 ; i++){
        fact*=i;
        printf("%d\n",fact);
    }
}