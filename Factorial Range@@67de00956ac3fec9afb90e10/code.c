int factorialRange(int start , int end){
    int fact =1;
    for(int i=1; i<=end ; i++){
        fact*=start+1;
        printf("%d\n",fact);
    }
}