void maxGadgetSpend(int keyboards[],int n, int headsets[], int m , int budget){
    for(int i=1;i<=budget;i++){
        while(keyboard[i]==headsets[i]){
            i+=i;
            return i;        }
    }
    else{
        return -1;
    }
}