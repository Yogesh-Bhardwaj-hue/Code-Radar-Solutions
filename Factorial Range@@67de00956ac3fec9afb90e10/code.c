int factorialRange(int start , int end){
    int fact =1;
    if(start == 0){
        printf("1\n");
        start=1;
    }
    else if(start<0){
        printf("Invalid Range");
    }
    for(int i=1; i<=end ; i++){
        fact*=i;
        printf("%d\n",fact);
    }
}