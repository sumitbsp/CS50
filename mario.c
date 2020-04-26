# include <stdio.h>
# include <cs50.h>

int main (void) {
    int number;
    do {
        number = get_int("Enter a number:");
    } while (number < 1 || number > 8);
   

    string hash = "#";
    string dot = " ";

    for (int k = 1; k < number + 1; k++) {
        for (int i = 0 ; i < number - k; i++){
            printf("%s", dot);
        }
        for (int i = 0 ; i < k; i++){
            printf("%s", hash);
        }
        printf("\n");
    }
     return number ;
}