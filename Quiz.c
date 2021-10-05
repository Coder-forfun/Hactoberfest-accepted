#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

int marks[6]={0,0,0,0,0,0},seconds_passed=0,question_number=1,unit_selection_checker[6]={0,0,0,0,0,0};
    time_t time_start,time_end;

struct Units
{
    char questions[41][450];
    char answers[41][100];
    char input[41][100];
    char temp_input[41][100];
    int random_number[31];

} units[6];
//-----------------------The Quiz -----------------------------//
void quizattempt(int unit_selected,int question_divider,int time_limit)
{
    if(seconds_passed<time_limit)
    printf("\nYOU HAVE %d SECONDS LEFT\n",time_limit-seconds_passed);
    else
    printf("\nOUT OF TIME\n");
    units[unit_selected].random_number[question_number]=rand()%10+question_divider;
        printf("\nQUESTION NUMBER--%d\n%s\n",question_number,units[unit_selected].questions[units[unit_selected].random_number[question_number]]);
           fflush(stdin);
          do{
        gets(units[unit_selected].input[units[unit_selected].random_number[question_number]]);
            } while(units[unit_selected].input[units[unit_selected].random_number[question_number]][0] == '\0');

        strcpy(units[unit_selected].temp_input[units[unit_selected].random_number[question_number]],units[unit_selected].input[units[unit_selected].random_number[question_number]]);
        strlwr(units[unit_selected].temp_input[units[unit_selected].random_number[question_number]]);
        time_end=time(NULL);
        seconds_passed=time_end-time_start;
        if(strcmp(units[unit_selected].temp_input[units[unit_selected].random_number[question_number]],units[unit_selected].answers[units[unit_selected].random_number[question_number]])==0 && seconds_passed<time_limit)
        {
            printf("\nYou are correct\n");
            marks[unit_selected]++;
        }
        else if ( seconds_passed>=time_limit)
        {
            printf("\nYou are too slow\n");
            strcpy(units[unit_selected].input[units[unit_selected].random_number[question_number]],"You were too slow");
        }
        else
        {
          printf("\nYour answer is wrong\n");
          printf("\nThe correct answer is %s\n",units[unit_selected].answers[units[unit_selected].random_number[question_number]]);
        }
        question_number++;
}
//---------------------Attempt checker for score-----------------//
void attemptcheck(int unit_selected)
{
   
            printf("\nYou have attemped quiz from Unit %d\n",unit_selected);
            printf("\nYour score from this Unit is %d\n",marks[unit_selected]);
}
//-----------------Attempt checker for review------------------------//
void reviewcheck(int unit_selected)
{


    
  
     question_number=1;
    printf("\nReview from unit %d\n",unit_selected);
    for(question_number=1;question_number<11;question_number++)
    {
      printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nQuestion %d-->%s\n",question_number,units[unit_selected].questions[units[unit_selected].random_number[question_number]]);
    printf("\nCorrect answer--> %s\n",units[unit_selected].answers[units[unit_selected].random_number[question_number]]);
    printf("\nYour answer--> %s\n",units[unit_selected].input[units[unit_selected].random_number[question_number]]);
    printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        system("cls");

    }
}
//------------------------MARKS CHANGER-------------------//
void markscorrect(int unit_selected)
{
    printf("\nYour score in the selected lesson is  %d\n",marks[unit_selected]);
    printf("\n You want to change the score to \n");
scanf("%d",&marks[unit_selected]);
    while(marks[unit_selected]>10&&marks[unit_selected]<0)
    {
        printf("Enter a score between 0 to 10\n");
    scanf("%d",&marks[unit_selected]);
    }
    printf("\n CHANGE SUCCESFUL");

}
int main()
{



  //----------------------- QUESTIONS FROM UNIT 1--------------------//
    //-----------------------TRUE OF FALSE----------------------------//
    strcpy(units[1].questions[1],"C programs are converted into machine language with the help of a program called Editor.\n");
    strcpy(units[1].answers[1],"false");
    strcpy(units[1].questions[2],"C is a low level language.");
    strcpy(units[1].answers[2],"false");
    strcpy(units[1].questions[3],"Spaces and commas are allowed in a variable name.\n");
    strcpy(units[1].answers[3],"false");
    strcpy(units[1].questions[4],"The maximum value that an integer constant can have varies from one compiler to another.\n");
    strcpy(units[1].answers[4],"true");
    strcpy(units[1].questions[5],"A real constant in C can be expressed in both Fractional and Exponential forms.\n");
    strcpy(units[1].answers[5],"true");
    strcpy(units[1].questions[6],"Algorithm is the graphical representation of logic.\n");
    strcpy(units[1].answers[6],"false");
    strcpy(units[1].questions[7],"#define is known as preprocessor compiler directive.\n");
    strcpy(units[1].answers[7],"true");
    strcpy(units[1].questions[8],"The keywords can be used as variable names.\n");
    strcpy(units[1].answers[8],"false");
    strcpy(units[1].questions[9],"The ++ operator increments the operand by 1, whereas, the -- operator decrements it by 1.\n");
    strcpy(units[1].answers[9],"true");
    strcpy(units[1].questions[10],"The return type of malloc function is void.\n");
    strcpy(units[1].answers[10],"false");
// -----------------------CHOOSE THE CORRECT OPTION QUESTIONS---------------------//
    strcpy(units[1].questions[11],"Low level language is .?\n A) Human readable like language.\n B) language with big program size.\n C) language with small program size.\n D) Difficult to understand and readability is questionable.\n");
    strcpy(units[1].answers[11],"d");
    strcpy(units[1].questions[12],"Who invented C Language.?\nA) Charles Babbage\n B) Grahambel\n C) Dennis Ritchie\n D) Steve Jobs\n ");
    strcpy(units[1].answers[12],"c");
    strcpy(units[1].questions[13],"High level language is a .?\n A) Human readable like language.\n B) language with small program size.\n C) language with big program size.\n D) language which is difficult to understand and not human readable.\n");
    strcpy(units[1].answers[13],"a");
    strcpy(units[1].questions[14],"C language was invented to develop which Operating System.?\n A) Android\n B) Linux\n C) Ubuntu\n D) Unix\n");
    strcpy(units[1].answers[14],"d");
    strcpy(units[1].questions[15],"BCPL Language is also called..?\n A) C Language\n B) B Language\n C) D Language\n D) None\n");
    strcpy(units[1].answers[15],"d");
    strcpy(units[1].questions[16],"Identify wrong C Keywords below.\n A) union, const, var, float\n B) short, unsigned, continue, for\n C) signed, void, default, goto\n D) sizeof, volatile, do, if\n");
    strcpy(units[1].answers[16],"a");
    strcpy(units[1].questions[17],"Find a correct C Keyword below.\n A) breaker\n B) go to\n C) shorter\n D) default\n");
    strcpy(units[1].answers[17],"d");
    strcpy(units[1].questions[18],"Every C Variable must have.?\n A) Type\n B) Storage Class\n C) Both Type and Storage Class\n D) Either Type or Storage Class\n");
    strcpy(units[1].answers[18],"c");
    strcpy(units[1].questions[19],"Operator % in C Language is called.?\n A) Percentage Operator\n B) Quotient Operator\n C) Modulus\n D) Division\n");
    strcpy(units[1].answers[19],"c");
    strcpy(units[1].questions[20],"What is the other name for C Language ?: Question Mark Colon Operator.?\n A) Comparison Operator\n B) If-Else Operator\n C) Binary Operator\n D) Ternary Operator\n");
    strcpy(units[1].answers[20],"d");
       //------FILL IN THE BLANKS QUESTION-------------------------//
    strcpy(units[1].questions[21],"C is _______ type of programming language.\n ");
    strcpy(units[1].answers[21],"procedural");
    strcpy(units[1].questions[22],"C language was invented in _______ laboratories.\n");
    strcpy(units[1].answers[22],"bell");
    strcpy(units[1].questions[23],"Output of an arithmetic expression with integers and real numbers is ___ by default.?\n");
    strcpy(units[1].answers[23],"real number");
    strcpy(units[1].questions[24],"If both numerator and denominator of a division operation in C language are integers, then we get _______\n");
    strcpy(units[1].answers[24],"unexpected integer value");
    strcpy(units[1].questions[25],"Size of a Turbo C C++ compiler is _______\n");
    strcpy(units[1].answers[25],"16 bit");
    strcpy(units[1].questions[26],"Sizes of short, int and long in a Turbo C C++ compiler in bytes are _______\n");
    strcpy(units[1].answers[26],"2,2,4");
    strcpy(units[1].questions[27],"The number of characters used to distinguish Identifier or Names of Functions and Global variables is _______\n");
    strcpy(units[1].answers[27],"31");
    strcpy(units[1].questions[28],"Single Line Comment // is also called _______\n");
    strcpy(units[1].answers[28],"c++ style comment");
    strcpy(units[1].questions[29],"Number of Keywords present in C Language are _______. \n");
    strcpy(units[1].answers[29],"32");
    strcpy(units[1].questions[30],"Each statement in a C program should end with _______.\n");
    strcpy(units[1].answers[30],"semi colon");
     //-------------------------ERROR FINDING/OUTPUT-------------------//
    strcpy(units[1].questions[31],"Find Error/Output in follwing code:\n void main ()\n {\n int x = 128;\n printf (\"%d\", 1 + x++);\n }\n");
    strcpy(units[1].answers[31],"129");
    strcpy(units[1].questions[32],"Find Error/Output in follwing code:\n main() {\n int a = 10;\n if ((fork ( ) == 0))\n  a++;\n printf (\"%d\", a );\n }\n");
    strcpy(units[1].answers[32],"10");
    strcpy(units[1].questions[33],"What is the output of the program.?\n #include<stdio.h>\n int main()\n {\n printf(\"Hello Boss.\")\n }\n");
    strcpy(units[1].answers[33],"compiler error");
    strcpy(units[1].questions[34],"What is the output of the program.?\n int main()\n {\n auto int a=10;\n {\n auto int a = 15;\n printf(\"%d \", a);\n }\n printf(\"%d \", a);\n return 1;\n }\n");
    strcpy(units[1].answers[34],"15 10");
    strcpy(units[1].questions[35],"What is the output of the program.?\n int main()\n {\n register a=10;\n {\n register a = 15;\n printf(\"%d \", a);\n }\n printf(\"%d \", a);\n return 20;\n }\n");
    strcpy(units[1].answers[35],"15 10");
    strcpy(units[1].questions[36],"What is the output the program.?\n int main()\n {\n register a=80;\n auto int b;\n b=a;\n printf(\"%d \", a);\n printf(\"%d \", b);\n return -1;\n }\n");
    strcpy(units[1].answers[36],"compiles but no output");
    strcpy(units[1].questions[37],"What is the output of the program.?\n void myshow();\n int main()\n {\n myshow();\n myshow();\n myshow();\n }\n void myshow()\n {\n static int k = 20;\n printf(\"%d \", k);\n k++;\n }\n");
    strcpy(units[1].answers[37],"20 21 22");
    strcpy(units[1].questions[38],"What is the output of the program.?\n #include<stdio.h>\n static int k;\n int main()\n {\n printf(\"%d\", k);\n return 90;\n }\n");
    strcpy(units[1].answers[38],"0");
    strcpy(units[1].questions[39],"What is the output/error of the program.?\n int main()\n {\n register k = 25;\n printf(\"%d\", &k);\n return 90;\n }\n");
    strcpy(units[1].answers[39],"compiler error");
    strcpy(units[1].questions[40],"What is the output of C Program.?\n int main()\n {\n int a=0;\n a = printf(\"4\");\n printf(\"%d\",a);\n return 0;\n }\n");
    strcpy(units[1].answers[40],"41");
//------------------QUESTIONS FROM UNIT 2--------------------------------//
    //-----------------------TRUE OF FALSE----------------------------//
    strcpy(units[2].questions[1],"When if statements are nested, the last else gets associated with the nearest if without an else");
    strcpy(units[2].answers[1],"false");
    strcpy(units[2].questions[2],"A switch statement can always be replaced by a series of if..else statements");
    strcpy(units[2].answers[2],"false");
    strcpy(units[2].questions[3],"A switch expression can be of any type");
    strcpy(units[2].answers[3],"false");
    strcpy(units[2].questions[4],"The do…while statement first executes the loop body and then evaluate the loop control expression");
    strcpy(units[2].answers[4],"true");
    strcpy(units[2].questions[5],"In a pretest loop, if the body is executed n times, the test expression is executed n+1 times");
    strcpy(units[2].answers[5],"true");
    strcpy(units[2].questions[6],"The number of times a control variable is updated always equals the number of loop iterations");
    strcpy(units[2].answers[6],"true");
    strcpy(units[2].questions[7],"The type of all elements in an array must be the same");
    strcpy(units[2].answers[7],"true");
    strcpy(units[2].questions[8],"When an array is declared, C automatically initializes its elements to zero");
    strcpy(units[2].answers[8],"true");
    strcpy(units[2].questions[9],"An expression that evaluates to an integral value may be used as a subscript");
    strcpy(units[2].answers[9],"true");
    strcpy(units[2].questions[10],"Accessing an array outside its range is a compile time error");
    strcpy(units[2].answers[10],"true");
// -----------------------CHOOSE THE CORRECT OPTION QUESTIONS---------------------//
    strcpy(units[2].questions[11],"Choose a right C Statement.\n A) Loops or Repetition block executes a group of statements repeatedly.\n B) Loop is usually executed as long as a condition is met.\n C) Loops usually take advantage of Loop Counter\n D) All the above\n");
    strcpy(units[2].answers[11],"d");
    strcpy(units[2].questions[12],"Which loop is faster in C Language, for, while or Do While.?\n A) for\n B) while\n C) do while\n D) All work at same speed\n");
    strcpy(units[2].answers[12],"d");
    strcpy(units[2].questions[13],"Choose a correct C Statement.\n A) a++ is (a=a+1) POST INCREMENT Operator\n B) a-- is (a=a-1) POST DECREMENT Opeartor\n --a is (a=a-1) PRE DECREMENT Opeator\n C) ++a is (a=a+1) PRE INCRMENT Operator\n D) All the above.\n");
    strcpy(units[2].answers[13],"d");
    strcpy(units[2].questions[14],"What is the way to suddenly come out of or Quit any Loop in C Language.?\n A) continue; statement\n B) break; statement\n C) leave; statement\n D) quit; statement\n");
    strcpy(units[2].answers[14],"b");
    strcpy(units[2].questions[15],"Choose facts about continue; statement is C Language.\n A) continue; is used to take the execution control to next iteration or sequence\n B) continue; statement causes the statements below it to skip for execution\n C) continue; is usually accompanied by IF statement.\n D) All the above.\n");
    strcpy(units[2].answers[15],"d");
    strcpy(units[2].questions[16],"Choose a correct statement about C break; statement.?\n A) break; statement can be used inside switch block\n B) break; statement can be used with loops like for, while and do while.\n C) break; statement causes only the same or inner loop where break; is present to quit suddenly.\n D) All the above.\n");
    strcpy(units[2].answers[16],"d");
    strcpy(units[2].questions[17],"Choose a correct statement about C language break; statement.\n A) A single break; statement can force execution control to come out of only one loop.\n B) A single break; statement can force execution control to come out of a maximum of two nested loops.\n C) A single break; statement can force execution control to come out of a maximum of three nested loops.\n D) None of the above.\n");
    strcpy(units[2].answers[17],"a");
    strcpy(units[2].questions[18],"Choose a correct C Statement regarding for loop.\n for(; ;);\n A) for loop works exactly first time\n B) for loop works infinite number of times\n C) Compiler error\n D) None of the above\n");
    strcpy(units[2].answers[18],"b");
    strcpy(units[2].questions[19],"What are C ASCII character ranges.?\n A) A to Z = 65 to 91\n B) a to z = 97 to 122\n C) 0 to 9 = 48 to 57\n D) All the above\n");
    strcpy(units[2].answers[19],"d");
    strcpy(units[2].questions[20],"Expand or Abbreviate ASCII with regard to C Language.\n A) Australian Standard Code for Information Interchange\n B) American Standard Code for Information Interchange\n C) American Symbolic Code for Information Interchange\n D) Australian Symbolic Code for Information Interchange\n");
    strcpy(units[2].answers[20],"b");
       //------FILL IN THE BLANKS QUESTION-------------------------//
    strcpy(units[2].questions[21]," ______ is the other name for C Language ?: Question Mark Colon Operator.");
    strcpy(units[2].answers[21],"ternary operator");
    strcpy(units[2].questions[22],"______ executes a group of statements repeatedly.");
    strcpy(units[2].answers[22],"loops");
    strcpy(units[2].questions[23],"______ usually take advantage of Loop Counter");
    strcpy(units[2].answers[23],"loops");
    strcpy(units[2].questions[24],"___ is (a=a+1) POST INCREMENT Operator");
    strcpy(units[2].answers[24],"a++");
    strcpy(units[2].questions[25],"_____ is (a=a-1) POST DECREMENT Operator");
    strcpy(units[2].answers[25],"a--");
    strcpy(units[2].questions[26],"____ is (a=a-1) PRE DECREMENT Operator");
    strcpy(units[2].answers[26],"--a");
    strcpy(units[2].questions[27],"_____ is (a=a+1) PRE INCREMENT Operator");
    strcpy(units[2].answers[27],"++a");
    strcpy(units[2].questions[28],"_______ is the sum of sizes of all elements of the array.");
    strcpy(units[2].answers[28],"array size");
    strcpy(units[2].questions[29],"int, long, float, double are types of ______");
    strcpy(units[2].answers[29],"arrays");
    strcpy(units[2].questions[30],"An array Index starts with ______");
    strcpy(units[2].answers[30],"0");
     //-------------------------Error Finding/Output-------------------//
    strcpy(units[2].questions[31],"What is the output of the C Program.?\n int main()\n {\n int a=0;\n a = (5>2) ? : 8;\n printf(\"%d\",a);\n return 0;\n }\n");
    strcpy(units[2].answers[31],"1");
    strcpy(units[2].questions[32],"What is the output of C Program.?\n int main()\n {\n int a=0, b;\n a = (5>2) ? b=6: b=8;\n printf(\"%d %d\",a, b);\n return 0;\n }\n");
    strcpy(units[2].answers[32],"compiler error");
    strcpy(units[2].questions[33],"What is the output of the C Program.?\n int main()\n {\n if( 4 > 5 )\n {\n printf(\"Hurray..\");\n }\n printf(\"Yes\");\n return 0;\n }\n");
    strcpy(units[2].answers[33],"yes");
    strcpy(units[2].questions[34],"What is the output of the C Program.?\n int main()\n {\n if( 4 < 5 )\n printf(\"Hurray..\");\n printf(\"Yes\");\n else\n printf(\"England\")\n return 0;\n }\n");
    strcpy(units[2].answers[34],"compiler error");
    strcpy(units[2].questions[35],"What is the output of the C Program.?\n int main()\n {\n if( 10 < 9 )\n printf(\"Hurray..\");\n else if(4 > 2)\n printf(\"England\");\n return 0;\n }\n");
    strcpy(units[2].answers[35],"england");
    strcpy(units[2].questions[36],"What is the output of C Program.?\n int main()\n {\nif( 10 > 9 )\n printf(\"Singapore \");\n else if(4%2 == 0)\n printf(\"England\");\n printf(\"Poland\");\n return 0;\n }\n");
    strcpy(units[2].answers[36],"Singapore Poland");
    strcpy(units[2].questions[37],"What is the output of the C Program.?\n int main()\n {\n if(-5)\n {\n printf(\"Germany \");\n }\n if(5)\n {\n printf(\"Texas \");\n }\n printf(\"ZING\");\n return 0;\n }\n");
    strcpy(units[2].answers[37],"Germany Texas ZING");
    strcpy(units[2].questions[38],"What is the output of the C Program.?\n int main()\n {\n if(10.0)\n {\n printf(\"Texas \");\n }\n printf(\"ZING\");\n return 0;\n }\n");
    strcpy(units[2].answers[38],"Texas ZING");
    strcpy(units[2].questions[39],"What is the output of C Program.?\n int main()\n {\n if(\"abc\")\n {\n printf(\"India \");\n }\n if('c')\n {\n printf(\"Honey \");\n }\n printf(\"ZING\");\n return 0;\n }\n");
    strcpy(units[2].answers[39],"India Honey ZING");
    strcpy(units[2].questions[40],"What is the output of C Program.?\n int main()\n {\n while(true) \n {\n printf(\"RABBIT\");\n break;\n }\n return 0;\n }\n");
    strcpy(units[2].answers[40],"compiler error");
//------------------QUESTIONS FROM UNIT 3--------------------------------//
    //-----------------------TRUE OF FALSE----------------------------//
    strcpy(units[3].questions[1],"C functions can return only one value under their function name");
    strcpy(units[3].answers[1],"true");
    strcpy(units[3].questions[2],"A function in C should have atleast one argument");
    strcpy(units[3].answers[2],"true");
    strcpy(units[3].questions[3],"A function can be defined within the main function");
    strcpy(units[3].answers[3],"false");
    strcpy(units[3].questions[4],"A function can be defined and placed before the main function");
    strcpy(units[3].answers[4],"false");
    strcpy(units[3].questions[5],"An user-defined function must be called atleast once; otherwise a warning message will be issued");
    strcpy(units[3].answers[5],"true");
    strcpy(units[3].questions[6],"Any name can be used as a function name");
    strcpy(units[3].answers[6],"false");
    strcpy(units[3].questions[7],"Only a void type function can have void as it argument");
    strcpy(units[3].answers[7],"false");
    strcpy(units[3].questions[8],"When variable values are passed to functions, a copy of them are created in the memory");
    strcpy(units[3].answers[8],"true");
    strcpy(units[3].questions[9],"Program execution always begins in the main function irrespective of its location in the program");
    strcpy(units[3].answers[9],"true");
    strcpy(units[3].questions[10],"A function without a return statement is illegal");
    strcpy(units[3].answers[10],"false");
// -----------------------CHOOSE THE CORRECT OPTION QUESTIONS---------------------//
    strcpy(units[3].questions[11],"A character constant is enclosed by.?\n A) Left Single Quotes\n B) Right Single Quotes\n C) Double Quotes\n D) None of the above\n");
    strcpy(units[3].answers[11],"b");
    strcpy(units[3].questions[12],"Choose a correct statement about C String.\n A) A string is a group of characters enclosed by double quotes.\n B) If a string is defined with double quotes, NULL is automatically added at the end.\n C) Size of a string is without counting NULL character at the end\n D) All the above\n");
    strcpy(units[3].answers[12],"d");
    strcpy(units[3].questions[13],"A C string elements are always stored in.?\n A) Random memory locations\n B) Alternate memory locations\n C) Sequential memory locations\n D) None of the above\n");
    strcpy(units[3].answers[13],"c");
    strcpy(units[3].questions[14],"Choose a correct C statement about String functions.?\n A) int n=strlen(\"abc\") returns 3.\n B) strupr(\"abc\") returns ABC\n C) strlwr(\"Abc\") returns abc\n D) All the above\n");
    strcpy(units[3].answers[14],"d");
    strcpy(units[3].questions[15],"Choose a correct C statement about String functions.?\n A) strrev(\"abcD\") returns Dcba.\n B) strcmp(\"abc\", \"bcd\") returns a negative number\n C) strcmp(\"234\",\"123\") returns a positive number\n D) All the above\n");
    strcpy(units[3].answers[15],"d");
    strcpy(units[3].questions[16],"Choose a correct C statement about String functions.?\n A) toupper('a') returns A\n B) tolower('D') returns d.\n C) strcmp(\"123\",\"12345\") returns a negative number\n D) All the above\n");
    strcpy(units[3].answers[16],"d");
    strcpy(units[3].questions[17],"What is actually passed to PRINTF or SCANF functions.?\n A) Value of String\n B) Address of String\n C) End address of String\n D) Integer equivalent value of String\n");
    strcpy(units[3].answers[17],"b");
    strcpy(units[3].questions[18],"Choose a correct C Statement about Strings.\n A) PRINTF is capable of printing a multi word string.\n B) PUTS is capable of printing a multi word string.\n C) GETS is capable of accepting a multi word string from console or command prompt\n D) All the above\n");
    strcpy(units[3].answers[18],"d");
    strcpy(units[3].questions[19],"What is the maximum length of a C String.?\n A) 32 characters\n B) 64 characters\n C) 256 characters\n D) None of the above\n");
    strcpy(units[3].answers[19],"d");
    strcpy(units[3].questions[20],"What is the minimum number of functions to be present in a C Program.?\n A) 1\n B) 2\n C) 3\n D) 4\n");
    strcpy(units[3].answers[20],"a");
       //------FILL IN THE BLANKS QUESTION-------------------------//
    strcpy(units[3].questions[21],"A function which calls itself is called a ___ function.");
    strcpy(units[3].answers[21],"recursive");
    strcpy(units[3].questions[22],"A _______ is a group of c statements which can be reused any number of times.");
    strcpy(units[3].answers[22],"function");
    strcpy(units[3].questions[23],"Every Function has a ______ type.");
    strcpy(units[3].answers[23],"return");
    strcpy(units[3].questions[24],"Default return type of any function is an ______.");
    strcpy(units[3].answers[24],"integer");
    strcpy(units[3].questions[25],"a C Function can return _____ values at a time.?");
    strcpy(units[3].answers[25],"one");
    strcpy(units[3].questions[26],"______ is an array of Characters with null character as the last element of array.");
    strcpy(units[3].answers[26],"string");
    strcpy(units[3].questions[27],"________ is the Format specifier used to print a String or Character array in C Printf or Scanf function.");
    strcpy(units[3].answers[27]," %s ");
    strcpy(units[3].questions[28],"The maximum length of a C String is _____-.");
    strcpy(units[3].answers[28],"indefinite");
    strcpy(units[3].questions[29],"_____ is used to accept a Multi Word Input in C Language.");
    strcpy(units[3].answers[29],"gets");
    strcpy(units[3].questions[30],"_____ is the ASCII value of NULL or \0.");
    strcpy(units[3].answers[30],"0");
     //-------------------------ERROR FINDING/OUTPUT-------------------//
    strcpy(units[3].questions[31],"What is the output of C Program with Functions.?\n int main()\n {\n void show()\n {\n printf(\"hide\");\n }\n show();\n return 0;\n }\n");
    strcpy(units[3].answers[31],"hide");
    strcpy(units[3].questions[32],"What is the output of C Program with functions.?\n void show();\n int main()\n {\n show();\n printf(\"argentina \");\n return 0;\n }\n void show()\n {\n printf(\"africa \");\n }\n");
    strcpy(units[3].answers[32],"africa argentina");
    strcpy(units[3].questions[33],"What is the output of C Program with functions.?\n int main()\n {\n show();\n printf(\"BANK \");\n return 0;\n }\n void show()\n {\n printf(\"CURRENCY \");\n }\n");
    strcpy(units[3].answers[33],"compiler error");
    strcpy(units[3].questions[34],"What is the output of a C program with functions.?\n void show();\n void main()\n {\n show();\n printf(\"rainbow \");\n return;\n }\n void show()\n {\n printf(\"colours \");\n }\n");
    strcpy(units[3].answers[34],"colours rainbow");
    strcpy(units[3].questions[35],"What is the output of C Program.?\n void show();\n void main()\n {\n printf(\"pista \");\n show();\n }\n void show()\n {\n printf(\"cashew \");\n return 10;\n }\n");
    strcpy(units[3].answers[35],"pista cashew with compiler warning");
    strcpy(units[3].questions[36],"What is the output of C Program with functions.?\n int show();\n void main()\n {\n int a;\n printf(\"pista count=\");\n a=show();\n printf(\"%d\", a);\n }\n int show()\n {\n return 10;\n }\n");
    strcpy(units[3].answers[36],"pista count=10");
    strcpy(units[3].questions[37],"What is the output of C Program with Strings.?\n int main()\n {\n char str[]={'g','l','o','b','e','\\0'};\n printf(\"%s\",str);\n return 0;\n }\n");
    strcpy(units[3].answers[37],"globe");
    strcpy(units[3].questions[38],"What is the output of C Program with arrays.?\n int main()\n {\n char str[]={\"C\",\"A\",\"T\",\"\\0\"};\n printf(\"%s\",str);\n return 0;\n }\n");
    strcpy(units[3].answers[38],"compiler error");
    strcpy(units[3].questions[39],"What is the output of C program with strings.?\n int main()\n {\n char str1[]=\"JOHN\";\n char str2[20];\n str2= str1;\n printf(\"%s\",str2);\n return 0;\n }\n");
    strcpy(units[3].answers[39],"compiler error");
    strcpy(units[3].questions[40],"What is the output of C Program with arrays.?\n int main()\n {\n char str[25];\n scanf(\"%s\", str);\n printf(\"%s\",str);\n return 0;\n }\n //input: south africa\n");
    strcpy(units[3].answers[40],"south");
//------------------QUESTIONS FROM UNIT 4--------------------------------//
    //-----------------------TRUE OF FALSE----------------------------//
    strcpy(units[4].questions[1],"Are the expression *ptr++ and ++*ptr are same?");
    strcpy(units[4].answers[1],"false");
    strcpy(units[4].questions[2],"Are the three declarations char **apple, char *apple[], and char apple[][] same?");
    strcpy(units[4].answers[2],"false");
    strcpy(units[4].questions[3],"Pointer constants are the addresses of memory locations");
    strcpy(units[4].answers[3],"true");
    strcpy(units[4].questions[4],"The underlying type of a pointer variable is void");
    strcpy(units[4].answers[4],"false");
    strcpy(units[4].questions[5],"Pointers to pointers is a term used to describe pointers whose contents are the address of another pointer");
    strcpy(units[4].answers[5],"true");
    strcpy(units[4].questions[6],"It is possible to cast a pointer to float as a pointer to integer");
    strcpy(units[4].answers[6],"false");
    strcpy(units[4].questions[7],"An integer can be added to a pointer");
    strcpy(units[4].answers[7],"true");
    strcpy(units[4].questions[8],"When an array is passed as an argument to a function, a pointer is passed");
    strcpy(units[4].answers[8],"true");
    strcpy(units[4].questions[9],"Pointers cannot be used as formal parameters in headers to function definitions");
    strcpy(units[4].answers[9],"false");
    strcpy(units[4].questions[10],"Value of a local variable in a function can be changed by another function");
    strcpy(units[4].answers[10],"true");
// -----------------------CHOOSE THE CORRECT OPTION QUESTIONS---------------------//
    strcpy(units[4].questions[11],"What is the limit for number of functions in a C Program.?\n A) 16\n B) 31\n C) 32\n D) None of the above\n");
    strcpy(units[4].answers[11],"d");
    strcpy(units[4].questions[12],"Every C Program should contain which function.?\n A) printf()\n B) show()\n C) scanf()\n D) main()\n");
    strcpy(units[4].answers[12],"d");
    strcpy(units[4].questions[13],"What is the maximum number of statements that can present in a C function.?\n A) 64\n B) 128\n C) 256\n D) None of the above\n");
    strcpy(units[4].answers[13],"d");
    strcpy(units[4].questions[14],"What characters are allowed in a C function name identifier.?\n A) Alphabets, Numbers, %, $, _\n B) Alphabets, Numbers, Underscore ( _ )\n C) Alphabets, Numbers, dollar $\n D) Alphabets, Numbers, %\n");
    strcpy(units[4].answers[14],"b");
    strcpy(units[4].questions[15],"Choose a corrects statement about C language function arguments.\n A) Number of arguments should be same when sending and receiving\n B) Type of each argument should match exactly \n C) Order of each argument should be same\n D) All the above\n");
    strcpy(units[4].answers[15],"d");
    strcpy(units[4].questions[16],"Choose a non Library C function below.\n A) printf()\n B) scanf()\n C) fprintf()\n D) printf(2)\n");
    strcpy(units[4].answers[16],"d");
    strcpy(units[4].questions[17],"What is the default return value of a C function if not specified explicitly.?\n A) -1\n B) 0\n C) 1\n D) None of the above\n");
    strcpy(units[4].answers[17],"c");
    strcpy(units[4].questions[18],"What do you call this C Function calling itself.?\n int funny2()\n {\n funny2(num);\n }\n A) Indefinite Function\n B) Definite Function\n C) Cursive Function\n D) Recursive Function\n");
    strcpy(units[4].answers[18],"d");
    strcpy(units[4].questions[19],"What is the C keyword that must be used to achieve expected result using Recursion.?\n A) printf\n B) scanf\n C) void\n D) return\n");
    strcpy(units[4].answers[19],"d");
    strcpy(units[4].questions[20],"How many functions are required to create a recursive functionality.?\n A) One\n B) Two\n C) More than two\n D) None of the above\n ");
    strcpy(units[4].answers[20],"a");
       //------FILL IN THE BLANKS QUESTION-------------------------//
    strcpy(units[4].questions[21],"A recursive function without If and Else conditions will always lead to ______");
    strcpy(units[4].answers[21],"infinite loop");
    strcpy(units[4].questions[22],"A ______ can call any other function any number of times");
    strcpy(units[4].answers[22],"function");
    strcpy(units[4].questions[23],"You can refer to or call any function using a ______ also.");
    strcpy(units[4].answers[23],"pointer");
    strcpy(units[4].questions[24],"Arguments received by a function in C language are called ___ arguments.");
    strcpy(units[4].answers[24],"formal");
    strcpy(units[4].questions[25],"Arguments passed to a function in C language are called ___ arguments.");
    strcpy(units[4].answers[25],"actual");
    strcpy(units[4].questions[26],"Difference of pointers to two elements of an array gives the difference between their _____.");
    strcpy(units[4].answers[26],"indexes");
    strcpy(units[4].questions[27],"Accessing out of bounds index element is valid and it returns a ______ value.");
    strcpy(units[4].answers[27],"garbage");
    strcpy(units[4].questions[28],"Array of Arrays is also called ________");
    strcpy(units[4].answers[28],"multi dimensional array");
    strcpy(units[4].questions[29],"A multidimensional array of dimension N is a collection of __________");
    strcpy(units[4].answers[29],"n 1-d arrays");
    strcpy(units[4].questions[30],"First Dimension size is _______ when initializing the array at the same time.");
    strcpy(units[4].answers[30],"optional");
     //-------------------------ERROR FINDING/OUTPUT-------------------//
    strcpy(units[4].questions[31],"What is the output of C Program with functions and pointers.?\n int main()\n {\n int b=25;\n //b memory location=1234;\n int *p = b;\n printf(\"%d %d\", b, p);\n return 0;\n }\n");
    strcpy(units[4].answers[31],"25 25");
    strcpy(units[4].questions[32],"What is the output of C Program with functions and pointers.?\n int main()\n {\n int b=25;\n //b memory location=1234;\n int *p;\n p=&b;\n printf(\"%d %d %d\", &b, p);\n return 0;\n }\n");
    strcpy(units[4].answers[32],"1234 1234");
    strcpy(units[4].questions[33],"What is the output of C Program with functions.?\n #include<stdio.h>\n int sum(int,int);\n int main()\n {\n int a=5, b=10, mysum;\n mysum = sum(a,b);\n printf(\"sum=%d \", mysum);\n printf(\"sum=%d\", sum(10,20));\n return 0;\n }\n int sum(int i, int j)\n {\n return (i+j);\n }\n");
    strcpy(units[4].answers[33],"sum=15 sum=30");
    strcpy(units[4].questions[34],"What is the output of C program with functions.?\n int main()\n {\n printf(\"funny=%d\" , funny());\n return 0;\n }\n funny()\n {\n }\n");
    strcpy(units[4].answers[34],"funny=0");
    strcpy(units[4].questions[35],"What is the output of C Program with functions.?\n void funny2();\n int main()\n {\n printf(\"funny2=%d\" , funny2());\n return 0;\n }\n void funny2()\n {\n }\n");
    strcpy(units[4].answers[35],"compiler error");
    strcpy(units[4].questions[36],"What is the output of C Program with functions.?\n int bunny(int,int);\n int main()\n {\n int a, b;\n a = bunny(5, 10);\n b = bunny(10, 5);\n printf(\"%d %d\", a, b);\n return 0;\n }\n int bunny(int i, int j)\n {\n return (i, j);\n }\n");
    strcpy(units[4].answers[36],"10 5");
    strcpy(units[4].questions[37],"What is the output of a C Program with functions and pointers.?\n void texas(int *,int *);\n int main()\n {\n int a=11, b=22;\n printf(\"before=%d %d, \", a, b);\n texas(&a, &b);\n printf(\"after=%d %d\", a, b);\n return 0;\n }\n void texas(int *i, int *j)\n {\n *i = 55;\n *j = 65;\n }\n");
    strcpy(units[4].answers[37],"before=11 22, after=55 65");
    strcpy(units[4].questions[38],"What is the output of a C Program.?\n void show(int,int,int);\n int main()\n {\n int a = 1;\n show(++a, a++, a);\n return 0;\n }\n void show(int i, int j, int k)\n {\n printf(\"%d %d %d,\", i, j, k);\n }\n");
    strcpy(units[4].answers[38],"3 1 3, ");
    strcpy(units[4].questions[39],"What is the output of C Program with pointers.?\n int main()\n {\n int a = 4;\n int *p;\n p=&a;\n while(*p > 0)\n {\n printf(\"%d \", *p);\n (*p)--;\n }\n return 0;\n }\n");
    strcpy(units[4].answers[39],"4 3 2 1");
    strcpy(units[4].questions[40],"What is the output of C Program with functions.?\n void show();\n int show();\n int main()\n {\n printf(\"ANT\");\n return 0;\n }\n void show()\n {\n printf(\"Integer\") ;\n }\n int show()\n {\n printf(\"Void\");\n }\n");
    strcpy(units[4].answers[40],"compiler error");
  //------------------QUESTIONS FROM UNIT 5--------------------------------//
       //-----------------------TRUE OF FALSE----------------------------//
    strcpy(units[5].questions[1],"A struct type in C is a built-in data type");
    strcpy(units[5].answers[1],"false");
    strcpy(units[5].questions[2],"The tag name of a structure is optional");
    strcpy(units[5].answers[2],"false");
    strcpy(units[5].questions[3],"Structures may contain members of only one data type");
    strcpy(units[5].answers[3],"true");
    strcpy(units[5].questions[4],"A structure variable is used to declare a data type containing multiple fields");
    strcpy(units[5].answers[4],"true");
    strcpy(units[5].questions[5],"Pointers can be used to access the members of structure variables");
    strcpy(units[5].answers[5],"true");
    strcpy(units[5].questions[6],"The keyword typedef is used to define a new data type");
    strcpy(units[5].answers[6],"true");
    strcpy(units[5].questions[7],"A union may be initialized in the same way a structure is initialized");
    strcpy(units[5].answers[7],"false");
    strcpy(units[5].questions[8],"A union an have another union as one of the members");
    strcpy(units[5].answers[8],"true");
    strcpy(units[5].questions[9],"A structure cannot have a union as one of its members");
    strcpy(units[5].answers[9],"false");
    strcpy(units[5].questions[10],"An array cannot be used as a member of a structure");
    strcpy(units[5].answers[10],"false");
// -----------------------CHOOSE THE CORRECT OPTION QUESTIONS---------------------//
    strcpy(units[5].questions[11],"What are the types of data allowed inside a structure.?\n A) int, float, double, long double\n B) char, enum, union\n C) pointers and Same structure type members\n D) All the above\n");
    strcpy(units[5].answers[11],"d");
    strcpy(units[5].questions[12],"Choose a correct statement about structure and array.?\n A) An array stores only elements of same type. Accessing elements is easy.\n B) A structure is preferred when different type elements are to be combined as a single entity.\n C) An array implementation has performance improvements to structure\n D) All the above\n");
    strcpy(units[5].answers[12],"d");
    strcpy(units[5].questions[13],"Choose a correct statement about C structures.\n A) A structure enables display of folder structure in OS.\n B) A structure enables erasing contents in a folder in OS.\n C) A structure enables to detect and respond to mouse clicks.\n D) All the above\n");
    strcpy(units[5].answers[13],"d");
    strcpy(units[5].questions[14],"What is actually passed if you pass a structure variable to a function.?\n A) Copy of structure variable\n B) Reference of structure variable\n C) Starting address of structure variable\n D) Ending address of structure variable\n");
    strcpy(units[5].answers[14],"a");
    strcpy(units[5].questions[15],"In a nested structure definition, with country.state.district statement, memeber state is actually present in the structure.? (COUNTY, STATE, DISTRICT structures)\n A) district\n B) state\n C) country\n D) None of the above\n");
    strcpy(units[5].answers[15],"c");
    strcpy(units[5].questions[16],"What is a structure in C language.?\n A) A structure is a collection of elements that can be of same data type.\n B) A structure is a collection of elements that can be of different data type.\n C) Elements of a structure are called members.\n D) All the above\n");
    strcpy(units[5].answers[16],"d");
    strcpy(units[5].questions[17],"What is the size of a C structure.?\n A) C structure is always 128 bytes.\n B) Size of C structure is the total bytes of all elements of structure.\n C) Size of C structure is the size of largest element.\n D) None of the above\n");
    strcpy(units[5].answers[17],"b");
    strcpy(units[5].questions[18],"Choose a correct statement about C structure.?\n int main()\n {\n struct ship\n {\n };\n return 0;\n }\n A) It is wrong to define an empty structure\nB) Member variables can be added to a structure even after its first definition.\n C) There is no use of defining an empty structure\n D) None of the above\n");
    strcpy(units[5].answers[18],"c");
    strcpy(units[5].questions[19],"A C Structure or User defined data type is also called.?\n A) Derived data type\n B) Secondary data type\n C) Aggregate data type\n D) All the above\n");
    strcpy(units[5].answers[19],"d");
    strcpy(units[5].questions[20],"Choose a correct statement about C structures.\n A) A structure can contain same structure type member.\n B) A structure size is limited by only physical memory of that PC.\n C) You can define an unlimited number of members inside a structure.\n D) All the above.\n");
    strcpy(units[5].answers[20],"d");
       //------FILL IN THE BLANKS QUESTION-------------------------//
    strcpy(units[5].questions[21]," A structure size is limited by only ________ of the PC.");
    strcpy(units[5].answers[21],"physical memory");
    strcpy(units[5].questions[22],"We can define an _______ number of members inside a structure.");
    strcpy(units[5].answers[22],"unlimited");
    strcpy(units[5].questions[23],"________ is used to implement Linked Lists, Stack and Queue data structures");
    strcpy(units[5].answers[23],"structure");
    strcpy(units[5].questions[24],"________ are used in Operating System functionality like Display and Input taking.");
    strcpy(units[5].answers[24],"structures");
    strcpy(units[5].questions[25],"structure elements are stored in _______ memory locations");
    strcpy(units[5].answers[25],"contiguous");
    strcpy(units[5].questions[26],"Structure members can not be initialized at the time of _______");
    strcpy(units[5].answers[26],"declaration");
    strcpy(units[5].questions[27],"Elements of a structure are called ________.");
    strcpy(units[5].answers[27],"members");
    strcpy(units[5].questions[28],"A ________ enables display of folder structure in OS.");
    strcpy(units[5].answers[28],"structure");
    strcpy(units[5].questions[29],"A _______ is preferred when different type elements are to be combined as a single entity.");
    strcpy(units[5].answers[29],"structure");
    strcpy(units[5].questions[30],"An ____ implementation has performance improvements to structure");
    strcpy(units[5].answers[30],"array");
     //-------------------------ERROR FINDING/OUTPUT-------------------//
    strcpy(units[5].questions[31],"What is the output of C program with structures.?\n int main()\n {\n structure hotel\n {\n int items;\n char name[10];\n }a;\n strcpy(a.name, \"TAJ\");\n a.items=10;\n printf(\"%s\", a.name);\n return 0;\n }\n");
    strcpy(units[5].answers[31],"compiler error");
    strcpy(units[5].questions[32],"What is the output of C program.?\n int main()\n {\n struct book\n {\n int pages;\n char name[10];\n }a;\n a.pages=10;\n strcpy(a.name,\"Cbasics\");\n printf(\"%s=%d\", a.name,a.pages);\n return 0;\n }\n");
    strcpy(units[5].answers[32],"Cbasics=10");
    strcpy(units[5].questions[33],"What is the output of C program.?\n int main()\n {\n struct ship\n {\n int size;\n char color[10];\n }boat1, boat2;\n boat1.size=10;\n boat2 = boat1;\n printf(\"boat2=%d\",boat2.size);\n return 0;\n }\n");
    strcpy(units[5].answers[33],"boat2=10");
    strcpy(units[5].questions[34],"What is the output of C program with structures.?\n int main()\n {\n struct ship\n {\n char color[10];\n }boat1, boat2;\n strcpy(boat1.color,\"red\");\n printf(\"%s \",boat1.color);\n boat2 = boat1;\n strcpy(boat2.color,\"yellow\");\n printf(\"%s\",boat1.color);\n return 0;\n }\n");
    strcpy(units[5].answers[34],"red red");
    strcpy(units[5].questions[35],"What is the output of C program with structures.?\n int main()\n {\n struct tree\n {\n int h;\n }\n struct tree tree1;\n tree1.h=10;\n printf(\"height=%d\",tree1.h);\n return 0;\n }\n");
    strcpy(units[5].answers[35],"height=10");
    strcpy(units[5].questions[36],"What is the output of C program with structures.?\n int main()\n {\n struct tree\n {\n int h;\n int w;\n };\n struct tree tree1={10};\n printf(\"%d \",tree1.w);\n printf(\"%d\",tree1.h);\n return 0;\n }\n");
    strcpy(units[5].answers[36],"0 10");
    strcpy(units[5].questions[37],"What is the output of C program with structures.?\n int main()\n {\n struct tree\n {\n int h;\n int rate;\n };\n struct tree tree1={0};\n printf(\"%d \",tree1.rate);\n printf(\"%d\",tree1.h);\n return 0;\n }\n");
    strcpy(units[5].answers[37],"0 0");
    strcpy(units[5].questions[38],"What is the output of C program.?\n int main()\n {\n struct laptop\n {\n int cost;\n char brand[10];\n };\n struct laptop L1={5000,\"acer\"};\n struct laptop L2={6000,\"ibm\"};\n printf(\"Name=%s\",L1.brand);\n return 0;\n }\n");
    strcpy(units[5].answers[38],"acer");
    strcpy(units[5].questions[39],"What is the output of C program with structures pointers.?\n int main()\n {\n struct forest\n {\n int trees;\n int animals;\n }F1,*F2;\n F1.trees=1000;\n F1.animals=20;\n F2=&F1;\n printf(\"%d \",F2.animals);\n return 0;\n }\n");
    strcpy(units[5].answers[39],"compiler error");
    strcpy(units[5].questions[40],"What is the output of C program with structure arrays.?\n int main()\n {\n struct pens\n {\n int color;\n }p1[2];\n struct pens p2[3];\n p1[0].color=5;\n p1[1].color=9;\n printf(\"%d \",p1[0].color);\n printf(\"%d\",p1[1].color);\n return 0;\n }\n");
    strcpy(units[5].answers[40],"5 9");
    //------------------------END OF STORAGE PART--------------------------------//
  int loop_key,unit_selected[4]={0,0,0,0},quiz_attempt_number=1,unit,menu_option,unit_entered_checker=0,quiz_attempt_finished_checker=0,marks_and_review_opener=0;
  float total;
  char password[20],name[40];
  FILE *filePointer ;
  int system ( const char * command );
printf("\n----------------------------------------------------------------------------------------\n");
    printf("\n   WELCOME \n");
     printf("      TO\n       THE ");
     printf("\n  ******\n\n *      *\n\n*        *\n\n*\n\n*\n\n*\n\n*\n\n*       *\n\n *     *\n\n  *****");
     printf("\n   QUIZ ");
     printf("\n     GAME ");
     printf("\n---------------------------------------------------------------------------------------\n");
     printf("ENTER YOUR NAME:  ");
     gets(name);
     printf("\nPRESS ANY KEY TO CONTINUE\n");
  getch();
//-------MAIN MENU---------------------//
mainmenu:
{
    system("cls");
    printf("WELCOME, %s",name);
    printf("\n--------------------------------------------------------------------------------------------------------------\n");
printf("\nMAIN MENU\n");
printf("\nWhat would you like to do\n");
printf("\nPRESS 0 TO SELECT INSTRUCTIONS\n");
printf("\nPRESS 1 TO SELECT UNITS\n");
printf("\nPRESS 2 TO ATTEMPT QUIZ\n");
printf("\nPRESS 3 TO VERIFY MARKS\n");
printf("\nPRESS 4 TO SEE THE REVIEW\n");
printf("\nPRESS 5 FOR MARKS CORRECTION ((FOR HOST ONLY))\n");
printf("\nPRESS 6 TO QUIT\n");
printf("\n--------------------------------------------------------------------------------------------------------------\n");
if(unit_entered_checker==1)
    {
        printf("\nYour Status\n");
        printf("\nYou have selected the units %d,%d&%d\n",unit_selected[1],unit_selected[2],unit_selected[3]);
    }
    if(marks_and_review_opener==1&&quiz_attempt_finished_checker==0)
        {
            printf("\nYou have finished %d quizzes",quiz_attempt_number-1);
        }
        else if(quiz_attempt_finished_checker==1){
            printf("\nYou have finished your quiz attempts\n");
            printf("\nIf You have no corrections to make you can Press 6 QUIT\n");
        }
printf("\n--------------------------------------------------------------------------------------------------------------\n");
scanf("%d",&menu_option);
while(isalnum(menu_option!=0))
{
    printf("Please enter a proper input\n");
   scanf("%d",&menu_option);
}
}

//-------------------MAIN MENU OPTIONS TO GO TO EACH CASE USING SWITCH CASE-------------//
    switch(menu_option)
    {
        case 0:
        {
            goto instructions;
        }
        case 1:
    {
        if(unit_entered_checker==1)
    {
        printf("\nYOU HAVE ALREADY ENTERED THE UNITS\n");
        printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        goto mainmenu;
    }
    else
    {
          goto unitchecker;
    }
    }
    case 2:
    {
        if (quiz_attempt_finished_checker==1)
        {
            printf("\nYOU HAVE ALLREADY FINISHED THE QUIZ ATTEMPTS\n");
            printf("\nPRESS ANY KEY TO CONTINUE\n");
            getch();
            goto mainmenu;
        }
        else if(unit_entered_checker==0)
        {
            printf("\nENTER THE UNITS FIRST\n");
            printf("\nPRESS ANY KEY TO CONTINUE\n");
            getch();
            goto mainmenu;
        }
        {
            goto quiz;
        }
    }
    case 3:
    {
        if(marks_and_review_opener!=1)
        {
            printf("\nATTEMPT QUIZ FIRST\n");
            printf("\nPRESS ANY KEY TO CONTINUE\n");
            getch();
            goto mainmenu;
        }
        else
        {
        goto score;
        }
    }
    case 4:
    {
        if(marks_and_review_opener!=1)
        {
            printf("\nATTEMPT QUIZ FIRST\n");
            printf("\nPRESS ANY KEY TO CONTINUE\n");
            getch();
            goto mainmenu;
        }
        else
        {
        goto review;
        }
    }
    case 5:
    {
        if (marks_and_review_opener!=1)
        {
            printf("\nATTEMPT QUIZ FIRST\n");
            printf("\nPRESS ANY KEY TO CONTINUE\n");
            getch();
            goto mainmenu;
        }
        else
        {
            goto markschanger;
        }
    }
    case 6:
    {
        goto quit;
    }
    default:
    {
        printf("\nYou have entered an invalid input\n");
        printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        goto mainmenu;
    }

    }
//--------------------INSTRUCTIONS---------------------------------//
instructions:
{
    system("cls");
    printf("\n--------------------------------------------------------------------------------------------------------------\n");
printf("\nINSTRUCTIONS FOR THE QUIZ");
printf("\n1. The Quiz is for 5 units 1 to 5\n");
printf("\n2. The User is supposed to select any 3 units out of 5\n");
printf("\nThe Units are\nUnit 1-Basics of C\nUnit 2-Conditions and Loops\nUnit 3-Strings and Functions\nUnit 4-Pointers and Recursion\nUnit 5-Structures and Unions\n");
printf("\n3. 3 Quizzes will be conducted of 1 unit each based on the choice of the user\n");
printf("\n--------------------------------------------------------------------------------------------------------------\n");
printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
         system("cls");
        printf("\nn");
printf("\n4. Each Quiz of 10 marks and have 4 parts\n");
printf("a. PART 1-Fill in the blanks--contains 3 questions and has a time of 3 minutes.\nThe user must answer 'true' or 'false'\n");
printf("b. PART 2-Choose the correct options--contains 3 questions and has a time of 3 minutes.\nThe user must answer 'a','b','c' or 'd'\n");
printf("c. PART 3-Fill in the blanks--contains 2 questions and has a time of 2 minutes.\nThe user must type the correct answer\n");
printf("d. PART 4-Correcting the error/Finding the output--contains 2 questions and has a time of 2 minutes.\nThe user must type the correct answer(type 'compiler error' if there is any error in the code\n");
printf("Note:-\ni. Please write the answer in the format given above\nii. User can answer in both capital and small letter but small letter is preffered\n");
printf("\n--------------------------------------------------------------------------------------------------------------\n");
printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
         system("cls");
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
printf("\n5. User can check their marks and reviews\n");
printf("\n6. If any kind of correction is required please contact host for marks correction and finalisation\n");
printf("\n7.The 3 quizzes scores will be averaged and displayed\n");
printf("\nWe hope you have a great quiz attempt\nBEST OF LUCK!!!!!\n");
printf("\n--------------------------------------------------------------------------------------------------------------\n");
printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
goto mainmenu;
}
//------------------------ENTERING THE UNITS--------------------------//
 unitchecker:
 system("cls");
 unit_selection_checker[1]=0;unit_selection_checker[2]=0;unit_selection_checker[3]=0;unit_selection_checker[4]=0;unit_selection_checker[5]=0;
 {
     printf("\n--------------------------------------------------------------------------------------------------------------\n");
     printf("\nWhich three units you would like the quiz of\n");
 for(unit=1;unit<4;unit++)
 {
    scanf("%d",&unit_selected[unit]);
    unit_selection_checker[unit_selected[unit]]=1;
 }
 for(unit=1;unit<4;unit++)
 {

    if(unit_selected[unit]>5||unit_selected[unit]<1)
    {
        printf("\nYou have enterend invalid input please select from 1-5\n");
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
        printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        goto unitchecker;
    }
 }

if(unit_selected[1]==unit_selected[2]||unit_selected[2]==unit_selected[3]||unit_selected[3]==unit_selected[1])
{
    printf("\nYou have entered a unit more than once please try again\n");
    printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
    goto unitchecker;
}
printf("\nYou have successfully entered the units\n");
printf("\n--------------------------------------------------------------------------------------------------------------\n");
printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
unit_entered_checker=1;
goto mainmenu;
}
//-------------------------MAIN QUIZ------------------------//
quiz :
system("cls");
{
    if(quiz_attempt_finished_checker==1)
    {
        printf("You have completed the quiz attempt");
        printf("\nPRESS ANY KEY TO CONTINUE\n");
    getch();
    goto mainmenu;
    }
    while(quiz_attempt_number<4)
{
    time_start=time(NULL);
    srand(time(0));
    question_number=1;
    seconds_passed=0;
    printf("\nYou are attempting quiz from unit %d\n",unit_selected[quiz_attempt_number]);
    printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPART 1-TRUE OR FALSE\n");
    seconds_passed=0;
    while(question_number<4)
    {
      quizattempt(unit_selected[quiz_attempt_number],1,120);
    }
    printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        system("cls");
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPART 2-CHOOSE THE CORRECT OPTION\n");
    time_start=time(NULL);
    seconds_passed=0;
    while(question_number<7)
    {
      quizattempt(unit_selected[quiz_attempt_number],11,180);
    }
    printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        system("cls");
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPART 3-FILL IN THE BLANKS\n");
    time_start=time(NULL);
    seconds_passed=0;
    while(question_number<9)
    {
    quizattempt(unit_selected[quiz_attempt_number],21,120);
    }
    printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        system("cls");
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPART 4-CORRECTING THE ERROR OR SHOWING THE OUTPUT QUESTIONS\n");
    time_start=time(NULL);
    seconds_passed=0;
    while(question_number<11)
    {
    quizattempt(unit_selected[quiz_attempt_number],31,120);
    }
    unit_selection_checker[unit_selected[quiz_attempt_number]]=2;
    printf("\n--------------------------------------------------------------------------------------------------------------\n");
    marks_and_review_opener=1;
      quiz_attempt_number++;
      break;
}
if(quiz_attempt_number==4)
    {
        quiz_attempt_finished_checker=1;
    }
      printf("\nPRESS ANY KEY TO CONTINUE\n");
    getch();
    system("cls");

    goto mainmenu;
}
//----------------------SCORE------------------------------//
score:
system("cls");
{
    loop_key=1;
    while(loop_key==1)
    {
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
        printf("\nWhich units would you like to see the marks of\n");
        printf("\nPRESS 6 TO SEE YOUR FINAL MARKS\n");
        printf("\nPRESS 0 TO GOTO MAINMENU\n");
        scanf("%d",&unit);
        if(unit==6 && quiz_attempt_finished_checker==1)
        {
            goto total_marks;
        }
        if(unit==6 && quiz_attempt_finished_checker!=1)
        {
            printf("Please finish your attempt first");
            printf("\nPRESS ANY KEY TO CONTINUE\n");
getch();
            goto score;
        }
        if(unit==0)
        {
            goto mainmenu;
        }
        if(unit_selection_checker[unit]==0)
        {
        printf("\nYou have not selected this unit for the quiz\n");
                printf("\n--------------------------------------------------------------------------------------------------------------\n");

        printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        goto score;
        }
        if(unit_selection_checker[unit]==1)
        {
            printf("\nYou have not attempted the quiz. TRY again after attempting\n");
                    printf("\n--------------------------------------------------------------------------------------------------------------\n");
            printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
            goto score;
        }
        else


        {
        attemptcheck(unit);
        }
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPRESS ANY KEY TO CONTINUE\n");
getch();
goto score;
    }
     printf("\nPRESS ANY KEY TO CONTINUE\n");
getch();
total_marks:
{
    if(quiz_attempt_finished_checker==1)
    {
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
    total=(marks[1]+marks[2]+marks[3]+marks[4]+marks[5])/3.0;
printf("\nYour Final score is %.2f\n",total);

    printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nPRESS ANY KEY TO CONTINUE\n");
getch();
}
}
goto mainmenu;
}
//-------------------REVIEWING THE ANSWERS-----------------------------//
review:
system("cls");
{
loop_key=1;
  while(loop_key==1)
  {
        printf("\n--------------------------------------------------------------------------------------------------------------\n");

      printf("Which unit would you like the review of\n");
      printf(" \n0 TO GOTO MAINMENU\n");
            scanf("%d",&unit);
            if(unit==0)
        {
            goto mainmenu;
        }
            if(unit_selection_checker[unit]==0)
        {
        printf("\nYou have not selected this unit for the quiz\n");
            printf("\n--------------------------------------------------------------------------------------------------------------\n");
        printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        goto review;
        }
        if(unit_selection_checker[unit]==1)
        {
            printf("\nYou have not attempted the quiz. TRY again after attempting\n");
        printf("\n--------------------------------------------------------------------------------------------------------------\n");

            printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
            goto review;
        }
        else
        {
     reviewcheck(unit);
        }
        printf("\nPRESS ANY KEY TO CONTINUE\n");
  getch();
  }
  printf("\nPRESS ANY KEY TO CONTINUE\n");
  getch();
goto mainmenu;
}
//-------------------------MARKS CORRECTOR IN CASE OF MISTAKES---------------------//
markschanger:
system("cls");
{
 printf("\n--------------------------------------------------------------------------------------------------------------\n");

    printf("\nEnter Password\n");
    {
       scanf("%s",&password);
    }
    unit=0;loop_key=1;
    while(strcmp(password,"PICEL123")!=0)
    {
        unit++;
        printf("\nWRONG PASSWORD!!\n");
        printf("\nTRY AGAIN!!!\n");
        scanf("%s",&password);
        if(unit==3)
        {
            printf("\nOut of  attempts try again from mainmenu\n");
     printf("\n--------------------------------------------------------------------------------------------------------------\n");
         printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
            goto mainmenu;
        }
    }
passwordless:
system("cls");
    printf("\n--------------------------------------------------------------------------------------------------------------\n");

    {
        while(loop_key==1)
        {
            printf("\nWhich units would you like to correct\n");
             printf("\nPRESS 0 TO GOTO MAINMENU\n");
            scanf("%d",&unit);

            if(unit==0)
        {
            goto mainmenu;
        }
            if(unit_selection_checker[unit]==0)
        {
        printf("\nYou have not selected this unit for the quiz\n");
        printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        goto passwordless;
        }
        if(unit_selection_checker[unit]==1)
        {
            printf("\nYou have not attempted the quiz. TRY again after attempting\n");
            printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
            goto passwordless;
        }
        else
        {
           markscorrect(unit);
        printf("\n--------------------------------------------------------------------------------------------------------------\n");
             printf("\nPRESS ANY KEY TO CONTINUE\n");
        getch();
        }
        }
    }
   goto mainmenu;
}
//-----------------ENDING-------------------//
quit:
{
    FILE *filePointer ;
  int system ( const char * command );
    char grade;
     printf("\n--------------------------------------------------------------------------------------------------------------\n");
    if(quiz_attempt_finished_checker==1)
    {
    total=(marks[1]+marks[2]+marks[3]+marks[4]+marks[5])/3.0;
    if(total>=9)
grade='S';
else if(total>=8)
grade='A';
else if(total>=7)
grade='B';
else if(total>=6)
grade='C';
else if(total>=5)
grade='D';
else if(total>=4)
grade='E';
else
grade='F';

filePointer=fopen("Scorecard.txt","w") ;
if ( filePointer == NULL )
	{
	  printf("-----------------------------------------------------------------------------------------\n");
printf("|                                       SCORECARD                                       |\n");
printf("|                                    Congratulations!!                                  |\n");
printf("|                                      %-40s         |\n",name);
printf("| Report:-                                                                              |\n");
printf("| Unit Attempted                    Score                                               |\n");
printf("|1. Unit-%d                           %2d                                                 |\n",unit_selected[1],marks[unit_selected[1]]);
printf("|2. Unit-%d                           %2d                                                 |\n",unit_selected[2],marks[unit_selected[2]]);
printf("|3. Unit-%d                           %2d                                                 |\n",unit_selected[3],marks[unit_selected[3]]);
printf("|Your final Score is: %-6.2f                                                            |\n",total);
printf("|Your final GRADE is: %-6.2c                                                            |\n",grade);
printf("|Thank you for Attempting our quiz                                                      |\n");
printf("-----------------------------------------------------------------------------------------");
	}
    else
    {
fprintf(filePointer,"\n-----------------------------------------------------------------------------------------\n");
fprintf(filePointer,"|                                       SCORECARD                                       |\n");
fprintf(filePointer,"|                                    Congratulations!!                                  |\n");
fprintf(filePointer,"|                                      %-40s         |\n",name);
fprintf(filePointer,"| Report:-                                                                              |\n");
fprintf(filePointer,"| Unit Attempted                    Score(Max:10)                                       |\n");
fprintf(filePointer,"|1. Unit-%d                           %2d                                                 |\n",unit_selected[1],marks[unit_selected[1]]);
fprintf(filePointer,"|2. Unit-%d                           %2d                                                 |\n",unit_selected[2],marks[unit_selected[2]]);
fprintf(filePointer,"|3. Unit-%d                           %2d                                                 |\n",unit_selected[3],marks[unit_selected[3]]);
fprintf(filePointer,"|Your final Score is: %6.2f                                                            |\n",total);
fprintf(filePointer,"|Your final GRADE is: %-6.2c                                                            |\n",grade);
fprintf(filePointer,"|Thank you for Attempting our quiz                                                      |\n");
fprintf(filePointer,"-----------------------------------------------------------------------------------------");
fclose(filePointer);
    system("notepad Scorecard.txt");
    }
        printf("\n--------------------------------------------------------------------------------------------------------------\n");

    }
   else
    {
                printf("\n--------------------------------------------------------------------------------------------------------------\n");
    printf("\nIt appears that you have left without finishing your attempt. Please notify to us the reason for this\n");
        printf("\n--------------------------------------------------------------------------------------------------------------\n");

    }
}
return 0;
}
