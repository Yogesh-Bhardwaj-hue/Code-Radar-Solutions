int mostPlayedGame(int games[], int n){
    int count = 0;
    for(int i=1;i<=n;i++){
        if(games[i]==games[i+1]){
            count+=1;
        }
        return count;
    }
}