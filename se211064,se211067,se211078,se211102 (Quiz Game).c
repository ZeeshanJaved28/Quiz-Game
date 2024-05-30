/*
In this project, a number of questions are asked, and the user is awarded a 5 Tola of gold price for each correct answer given.
In the quiz games, questions are chosen in such a way that they cover all fields of a typical quiz contest.
The user’s general knowledge is tested with quiz questions regarding: " C program " 
*/
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
void show_record();// shows the highest gold prize won by a particular user
void reset_score();// to reset the highest score/gold prize to default.
void help();//help menu with game summary and rules.
void edit_score(float , char []);//adds the current gold prize won to the previous one upon giving the right answer to a question.
int main()//Start of main function.
{
     system("color 0f");
     int countr,practice,r1,count,i,n;
     float score;
     char choice;
     char playername[20];
     mainhome:
     system("cls");
     printf("Programming Fundamental(PF)\n");
     printf("Muhammad Rehan Allauddin(se211078)\n");
     printf("Huzaifa Khalid(se211102)\n");
     printf("Zeeshan Javed (C)(se211067)\n");
     printf("Huzaifa Ali (se211064)\n\n\n");
     printf("\t\t\tC PROGRAM QUIZ GAME\n");
     printf("\t\t----------------------------------");

     printf("\n\n\t\t\tWelcome To The Game\n       ");
     printf("\t\t----------------------------------");
     printf("\n\n\t\t\t $ BECOME A ROYAL  $\n      ");
     printf("\t\t-----------------------------------");
     printf("\n\n\t\t > Press S to Start the Game");
     printf("\n\t\t > Press V to View the Highest Score  ");
     printf("\n\t\t > Press R to Reset Score");
     printf("\n\t\t > Press H for Help");
     printf("\n\t\t > Press Q to Quit\n");
     choice=toupper(getch());
     if (choice=='V')
	{
	show_record();
	goto mainhome;
	}
     else if (choice=='H')
	{
	help();getch();
	goto mainhome;
	}
	else if (choice=='R')
	{reset_score();
	getch();
	goto mainhome;}
	else if (choice=='Q')
	exit(1);
    else if(choice=='S')
     {
     system("cls");

    printf("\n\n\n\n\n\n\n\n\n\n\t\t\tResister Your Name: ");
     gets(playername);

    system("cls");
    printf("\n ------------------  Welcome %s to C Program Quiz Game --------------------------",playername);
    printf("\n\n Here Are Few Tips For You.");
    printf("\n -------------------------------------------------------------------------");
    printf("\n >> There are 2 rounds in this Quiz Game,PRACTICE ROUND & CHALLENGE ROUND");
    printf("\n >> In practice round you will be asked a total of 6 questions to test your");
    printf("\n    general knowledge. You are eligible to play the game if you give atleast 4");
    printf("\n    right answers, otherwise you can't proceed further to the CHALLENGE ROUND.");
    printf("\n >> Your game starts with CHALLENGE ROUND. In this round you will be asked a");
    printf("\n    total of 20 questions. Each right answer will be awarded 5 TOLA OF GOLD!");
    printf("\n    By this way you can win upto 100 TOLA OF GOLD!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option.");
    printf("\n >> You will be asked questions continuously, till right answers are given");
    printf("\n >> No negative marking for wrong answers!");
    printf("\n\n\t!!!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!!!");
    printf("\n\n\n Press Y  to start the game!\n");
    printf("\n Press any other key to return to the main menu!");
    if (toupper(getch())=='Y')
		{
		    goto home;
        }
	else
		{
        goto mainhome;
       system("cls");
       }

     home:
     system("cls");
     count=0;
     for(i=1;i<=6;i++)
     {
    system("cls");
     practice=i;


     switch(practice)
		{
		case 1:
		printf("\n\nQ1: C Language is a _ _ _ ");
		printf("\n\nA:General-Purpose Computer Programming Language\t\tB:Procedural Computer Programming Language\n\nC:Multi-Paradigm Computer Programming Language\t\tD:All The Above");
		if (toupper(getch())=='D')
			{
			    printf("\n\nCorrect!!!");count++;
			    getch();
			    break;
}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D:All The Above");
		           getch();
		       break;
		       }

        case 2:
		printf("\n\n\nQ2: C first appeared in _ _ _");
		printf("\n\nA:1972\t\tB:1974\n\nC:1982\t\tD:1984");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A:1972");
		       getch();
		       break;}

        case 3:
		printf("\n\n\nQ3: Filename extension of C language is: ");
		printf("\n\nA: (.cp) extension \t\tB: (.c#) extension\n\nC: (.c) extension\t\tD: All The Above");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C: (.c) extension");
		       getch();
		       break;}

        case 4:
		printf("\n\n\nQ4: C influenced by:");
		printf("\n\nA:Assembly Language\t\tB:FORTRAN\n\nC:ALGOL 68\t\tD:All The Above");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");count++;
			getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D:All The Above");
		       getch();
		       break;}

        case 5:
        printf("\n\n\nQ5: Who is father of C Language _ _ _");
        printf("\n\nA:JamesA. Gosling\t\tB:Mark Zuckerberg\n\nC:Steve Jobs\t\tD:Dennis Ritchie");
        if (toupper(getch())=='D')
               {printf("\n\nCorrect!!!");count++;
               getch();
                break;}
        else
		       {printf("\n\nWrong!!! The correct answer is D:Dennis Ritchie");
		       getch();
		       break;}

        case 6:
		printf("\n\n\nQ6: C Language developed at _ _ _");
		printf("\n\nA:AT & T Bell Laboratories of USA in 1972\t\tB:Cambridge University inn 1972\n\nC:Sun Microsystems in 1973\t\tD:AT & T Bell Laboratories of USA in 1970");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");count++;
			getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A:AT & T Bell Laboratories of USA in 1972");
		       getch();
		       break;}}
		       }

	if(count>=4)
	{goto test;}
	else
	{
	system("cls");
	printf("\n\nSORRY YOU ARE NOT ELIGIBLE TO PLAY CHALLENGE ROUND, BETTER LUCK NEXT TIME");
	getch();
	goto mainhome;
	}
     test:
     system("cls");
     printf("\n\n\t*** CONGRATULATION %s you are eligible to play CHALLENGE ROUND ***",playername);
     printf("\n\n\n\n\t\t  *** !Press any key to Start CHALLENGE ROUND! ***                     ");
     if(toupper(getch())=='p')
		{goto game;}
game:
     countr=0;
     for(i=1;i<=20;i++)
     {system("cls");
     r1=i;

     switch(r1)
		{
		case 1:
		printf("\n\nQ1: C programs are converted into machine language with the help of _ _ _");
		printf("\n\nA: A Compiler\t\tB: An Editor\n\nC: An Operating System\t\tD:None Of The Above");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;getch();}
		else
		       {printf("\n\nWrong!!! The correct answer is A: A Compiler");getch();
		       goto score;
		       break;}

		case 2:
		printf("\n\n\nQ2: C was primarily developed as:");
		printf("\n\nA:General Purpose Language\t\tB:Data Processing Language\n\nC:System Programming Language\t\tD:None Of The Above");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C:System Programming Language");getch();
		      goto score;
		       break;
		       }

        case 3:
		printf("\n\n\nQ3: The name of the variable used in one function cannot be used in another function:");
		printf("\n\nA:False\t\tB:True\n\nC:May be\t\tD:None Of The Above");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A:False");getch();
		       goto score;
		       break;}

        case 4:
		printf("\n\n\nQ4: What is the size of an int data type _ _ _");
		printf("\n\nA:8 Bytes\t\tB:4 Bytes\n\nC:Depends on the System/Compiler\t\tD:Cannot be Determined");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {
                printf("\n\nWrong!!! The correct answer is C:Depends on the System/Compiler");getch();
		       goto score;
		       break;
		       }

        case 5:
		printf("\n\n\nQ5: The precedence of arithmetic operators is (from highest to lowest):");
		printf("\n\nA:%,+,-,*,/\t\tB:+,-,%,*,/\n\nC%,+,/,*\t\tD:%,*,/,+");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {
		           printf("\n\nWrong!!! The correct answer is D:%,*,/,+");
		       getch();
		       goto score;
		       break;
		       }

		case 6:
		printf("\n\n\nQ6: What is the default return type, if it is not specified in function definition:");
		printf("\n\nA:Short int\t\tB: double\n\nC: int\t\tD: void");
		if (toupper(getch())=='C' )
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C: int");goto score;
		       getch();
		       break;}

        case 7:
		printf("\n\n\nQ7: The value obtained in the function is given back to main() by using _ _ _ keyword.");
		printf("\n\nA: return\t\tB: new\n\nC: volatile\t\tD: static");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A: return");getch();
		       goto score;
		       break;}

        case 8:
		printf("\n\n\nQ8:  Which of the following is not a derived data type in C ?");
		printf("\n\nA:Function\t\tB:Enumeration\n\nC:Pointer\t\tD:Array");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B:Enumeration");getch();
		       goto score;
		       break;}

        case 9:
		printf("\n\n\nQ9: The C language defines _ _ _ fundamental data types.");
		printf("\n\nA: 4\t\tB: 5\n\nC: 6\t\tD: 8");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C: 6");getch();
		       goto score;
		       break;}

        case 10:
		printf("\n\n\nQ10: Which operator from the following has the lowest priority ?");
		printf("\n\nA: Comma Operator\t\tB: Assignment Operator\n\nC: Division Operator\t\tD: Conditional Operator");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch(); break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A: Comma Operator");getch();break;goto score;}

        case 11:
		printf("\n\n\nQ11: Among unary operation which operator represents increment?");
		printf("\n\nA: --\t\tB: ++\n\nC: **\t\tD: !");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
              {printf("\n\nWrong!!! The correct answer is B: ++");getch();
              break;goto score;}

        case 12:
		printf("\n\n\nQ12: The function scanf is used to _ _ _");
		printf("\n\nA:To take logical decisions\t\tB:Input a set of values\n\nC:Print a set of values\t\tD:Do mathematical manipulations");
		if (toupper(getch())=='B')
			  {printf("\n\nCorrect!!!");countr++;getch();
			   break;}
		else
              {printf("\n\nWrong!!! The correct answer is B:Input a set of values");getch();
              break;goto score;}

		case 13:
		printf("\n\n\nQ13: If the function returns no value then it is called _ _ _");
		printf("\n\nA:Data type function\t\tB:Calling function\n\nC:Main function\t\tD:Void function");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++;getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is D:Void function");getch();
		       break;goto score;}

        case 14:
		printf("\n\n\nQ14: Each element of a structure can be _ _ _ _");
		printf("\n\nA:Read and printed as a separate data item\t\tB:Printed as a separate data item\n\nC:Read as a separate data item\t\tD:None Of These");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A:Read and printed as a separate data item");getch();
		       break;goto score;}

		case 15:
		printf("\n\n\n15: In the for loop structure, which statement is present?");
		printf("\n\nA:Assign statement\t\tB:Alter statement\n\nC:Both (A) and (B)\t\tD:None Of These");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++;getch();
			 break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C:Both (A) and (B)");getch();
		       goto score;
		       break;}

		case 16:
		printf("\n\n\nQ16: Which can be included in a string constant using the escape sequences?");
		printf("\n\nA:Apostrophe (’)\t\tB:Question mark (?)\n\nC:Double quotes (“)\t\tD:All The Above");
		if (toupper(getch())=='D')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;
			}
		else
		       {printf("\n\nWrong!!! The correct answer is D:All The Above");getch();
		       goto score;
		       break;}

		case 17:
		printf("\n\n\nQ17: Which of the following are used to enclose the body of a function?");
		printf("\n\nA:{}\t\tB:[]\n\nC:()\t\tD:None Of Above");
		if (toupper(getch())=='A')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is A:{}");getch();goto score;
		       break;}

		case 18:
		printf("\n\n\nQ18: By the process of linking, the resulting code is called as _ _ _ _ ");
		printf("\n\nA:Source code\t\tB:Object code\n\nC:Executable code\t\tD.None Of The Above\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C:Executable code");getch();goto score;
		       break;}

		case 19:
		printf("\n\n\nQ19: In the _ _ _ structure, the logical expression is checked first.");
		printf("\n\nA:Do-while Loop\tB:If\n\nC:While-Loop\tD:All types\n\n");
		if (toupper(getch())=='C')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is C: While-Loop");getch();goto score;
		       break;}

		case 20:
		printf("\n\n\nQ20: Which of the following statements is not true about C language?");
		printf("\n\nA:Every instruction is terminated by semicolon\t\tB:It is case insensitive\n\nC:Comments can be placed anywhere in the program code\t\tD:It has features of both high level and low level languages");
		if (toupper(getch())=='B')
			{printf("\n\nCorrect!!!");countr++; getch();
			break;}
		else
		       {printf("\n\nWrong!!! The correct answer is B:It is case insensitive");getch();goto score;
		       break;}}}
	score:
    system("cls");
	score=(float)countr*5;
	if(score>0.00 && score<100)
	{
	   printf("\n\n\t\t**************** CONGRATULATION *****************");
	     printf("\n\t You won %.2f TOLA OF GOLD",score);goto go;}

	 else if(score==100.00)
	{
	    printf("\n\n\n \t\t**************** CONGRATULATION ****************");
	    printf("\n\t\t**************** YOU ARE A ROYAL****************");
	    printf("\n\t\t You won %.2f TOLA OF GOLD",score);
	    printf("\t\t Thank You!!");
	}
	 else
{
	 printf("\n\n\t******** SORRY YOU DIDN'T WIN ANY GOLD ********");
	    printf("\n\t\t Thanks for your participation");
	    printf("\n\t\t TRY AGAIN");goto go;}

	go:
	puts("\n\n Press Y if you want to play next game");
	puts(" Press any key if you want to go main menu");
	if (toupper(getch())=='Y')
		goto home;
	else
		{
		edit_score(score,playername);
		goto mainhome;}}}//End of main
// shows the Highest Score or Gold prize won by a particular user
void show_record()
    {system("cls");
	char name[20];
	float sc;
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&name,&sc);
	printf("\n\n\t\t************************************************");
	printf("\n\n\t\t %s has secured the Highest Score %.2f",name,sc);
	printf("\n\n\t\t************************************************");
	fclose(f);
	getch();}
// to reset the highest score/gold prize to default
void reset_score()
    {system("cls");
    float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
    fclose(f);}
//help menu with game summary and rules.
void help()
	{system("cls");
    printf("\n\n                              HELP                               ");
    printf("\n ----------------------------------------------------------------- ");
    printf("\n ...................... C program Quiz Game ...................... ");
    printf("\n >> There are two rounds in the game, PRACTICE ROUND & CHALLENGE ROUND");
    printf("\n >> In practice round you will be asked a total of 6 questions to test your general");
    printf("\n    knowledge. You will be eligible to play the game if you can give atleast 4");
    printf("\n    right answers otherwise you can't play CHALLENGE ROUND...........");
    printf("\n >> Your game starts with the CHALLENGE ROUND. In this round you will be asked");
    printf("\n    total 20 questions each right answer will be awarded 5 TOLA OF GOLD!");
    printf("\n    By this way you can win upto 100 TOLA OF GOLD!!!!!..........");
    printf("\n >> You will be given 4 options and you have to press A, B ,C or D for the");
    printf("\n    right option");
    printf("\n >> You will be asked questions continuously if you keep giving the right answers.");
    printf("\n >> No negative marking for wrong answers");

	printf("\n\n*************************************** BEST OF LUCK *************************************");
	printf("\n\n        ***** C PROGRAM QUIZ GAME is demonstrated by Programming Fundamental(PF) *****    ");
	printf("\n\n        ************************ Zeeshan Javed (C) (se211067) ************************    ");
	printf("\n\n        ********************* Muhammad Rehan Allauddin (se211078) ********************    ");
	printf("\n\n        ************************* Huzaifa Khalid (se211102) **************************    ");
	printf("\n\n        **************************  Huzaifa Ali (se211064) ****************************   ");}
//adds the current GOLD prize won to the previous one upon giving the right answer to a question
void edit_score(float score, char plnm[20])
	{system("cls");
	float sc;
	char nm[20];
	FILE *f;
	f=fopen("score.txt","r");
	fscanf(f,"%s%f",&nm,&sc);
	if (score>=sc)
	  { sc=score;
	    fclose(f);
	    f=fopen("score.txt","w");
	    fprintf(f,"%s\n%.2f",plnm,sc);
	    fclose(f);}}
