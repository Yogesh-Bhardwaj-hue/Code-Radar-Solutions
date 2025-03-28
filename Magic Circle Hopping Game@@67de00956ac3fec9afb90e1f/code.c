int finalEnergy(int clouds[], int n, int k){
    int initial = 100, stormy = 1, soft = 0;
    for(int i=soft; i<=n-1;i++){
        while(clouds[i]==stormy){
            int energy -= initial - 2;
        }
        return energy;
    }
}