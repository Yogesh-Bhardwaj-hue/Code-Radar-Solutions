int factorialRange(int start , int end){
    int fact =1;
    if(start == 0){
        printf("%d",'1');
        start=1;
    }
    for(int i=1; i<=end ; i++){
        fact*=i;
        printf("%d\n",fact);
    }
}