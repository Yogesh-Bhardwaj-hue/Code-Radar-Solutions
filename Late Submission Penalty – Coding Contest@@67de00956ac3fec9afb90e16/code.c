int calculatePenalty(int subDay, int subMonth, int subYear, int dueDay, int dueMonth, int dueYear) {
    int penalty = 0;

    if (subYear > dueYear) {
        penalty = 5000;
    } else if (subYear == dueYear) {
        if (subMonth > dueMonth) {
            penalty = 200 * (subMonth - dueMonth);
        } else if (subMonth == dueMonth && subDay > dueDay) {
            penalty = 10 * (subDay - dueDay);
        }
    }

    return penalty;
}
