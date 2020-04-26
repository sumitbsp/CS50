# include <stdio.h>
# include <cs50.h>
# include <math.h> 

int main(void) {
    float change;
    do {
         change = get_float("Enter your change: ");
    } while (change < 0);
    int changeOwned = round(change * 100);
    int coins = 0;
    while(changeOwned >= 25) {
        changeOwned -= 25;
        coins++;
    }
    while(changeOwned >= 10) {
        changeOwned -= 10;
        coins++;
    }
    while(changeOwned >= 5) {
        changeOwned -= 5;
        coins++;
    }
    while(changeOwned >= 1) {
        changeOwned -= 1;
        coins++;
    }
    printf("%i\n", coins);
}