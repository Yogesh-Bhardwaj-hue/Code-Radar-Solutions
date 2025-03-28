int mostPlayedGame(int games[], int n) {
    int maxCount = 0, mostPlayed = -1;

    for (int i = 0; i < n; i++) {
        int count = 1;
        for (int j = i + 1; j < n; j++) {
            if (games[i] == games[j]) {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
            mostPlayed = games[i];
        }
    }
    
    return mostPlayed;
}