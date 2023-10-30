#include <stdio.h>
char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int checkwin();
int main()
    {
    int player = 1, i, choice;
    char ch=':', ch1=')';
    char mark;
    do
    {
        board();
        player = (player % 2) ? 1 : 2; //The line (player % 2) ? 1 : 2 basically evaluates if (player % 2) is true. If it's true, the 1 is selected, otherwise, if it's false, the 2 is selected. The selected value is then assigned to player
        printf("Player %d, enter a number:  ", player);
        scanf("%d", &choice);
        mark = (player == 1) ? 'X' : 'O';

        if(choice==1 && square[1]=='1')
            square[1]=mark;

        else if(choice==2 && square[2]=='2')
            square[2]=mark;

        else if(choice==3 && square[3]=='3')
            square[3]=mark;

        else if(choice==4 && square[4]=='4')
            square[4]=mark;

        else if(choice==5 && square[5]=='5')
            square[5]=mark;

        else if(choice==6 && square[6]=='6')
            square[6]=mark;

        else if(choice==7 && square[7]=='7')
            square[7]=mark;

        else if(choice==8 && square[8]=='8')
            square[8]=mark;

        else if(choice==9 && square[9]=='9')
            square[9]=mark;

        else
        {
            printf("Invalid move! Try Again %c%c ", ch, ch1);

            player--;
            getchar();
        }
        i = checkwin();
        player++;
        }
        while (i ==  - 1); board();

        if (i == 1)
        {
           printf("==>\aPlayer %d win ", --player);
        }
        else
        {
            printf("==>\aGame draw");
        }
        getchar();
        return 0;
}
                     //Function to return gaming : 1 for game is over with result, -1 for game still is in progress and 0 is for that game is over and no result
    int checkwin()
{
    if(square[1]==square[2] && square[2]==square[3])
    {
       return 1;
    }
        else if(square[4]==square[5] && square[5]==square[6])
        {
            return 1;
        }

    else if(square[7]==square[8] && square[8]==square[9])
        {
            return 1;
        }
        else if(square[1]==square[4]&& square[4]== square[7])
        {
            return 1;
        }
        else if(square[2]==square[5] && square[5]==square[8])
        {
            return 1;
        }
        else if(square[3]==square[6] && square[6]==square[9])
        {
            return 1;
        }
        else if(square[1]==square[5] && square[5]==square[9])
        {
            return 1;
        }
        else if(square[3]==square[5] && square[5]==square[7])
        {
            return 1;
        }
        else if (square[1]!='1' && square[2]!='2' && square[3]!='3' && square[4]!='4' && square[5]!='5' && square[6]!='6' && square[7]!='7' && square[8]!='8' && square[9]!='9')
        {
            return 0;
        }
    else
    {
        return  - 1;
    }

}
 //drawing board with player marking
void board()
{
    system("cls");
    printf("\n\n\ Tic Tac Toe \n\n");
    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[1], square[2], square[3]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[4], square[5], square[6]);
    printf("_____|_____|_____\n");
    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", square[7], square[8], square[9]);
    printf("     |     |     \n\n");
}
