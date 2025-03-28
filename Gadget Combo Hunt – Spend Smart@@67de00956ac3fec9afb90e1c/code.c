int maxGadgetSpend(int keyboards[], int n, int headsets[], int m, int budget) {
    int maxSpend = -1; 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int totalCost = keyboards[i] + headsets[j];
            
            
            if (totalCost <= budget && totalCost > maxSpend) {
                maxSpend = totalCost;
            }
        }
    }

    return maxSpend;
}