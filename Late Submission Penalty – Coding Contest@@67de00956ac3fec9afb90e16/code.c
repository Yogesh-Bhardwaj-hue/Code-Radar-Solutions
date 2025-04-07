int calculatePenalty(int subDay , int subMonth , int subYear, int dueYear , int dueDay , int dueMonth){
    int penalty;

    if(subYear == dueYear){
        if(subMonth == dueMonth){
            if(subDay == dueDay){
                penalty = 0;

            }
            else if(subDay != dueDay){
                penalty = 10;
            }
        }
        else if(subMonth != dueMonth){
            penalty = 200;
        }
    }
    else if(subYear != dueYear){
        penalty = 5000;
    }
    return penalty;
}