
int finalEnergy(int clouds[], int n, int k) {
    int energy = 100;  
    int i = 0;         
    
    do {
        i = (i + k) % n; 
        energy--;         
        
        if (clouds[i] == 1) {
            energy -= 2;  
        }
    } while (i != 0);  

    return energy;
}