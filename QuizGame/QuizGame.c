#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<ctype.h>

void design();
void QueDesign(int);
void wait();
void DispScore();
void Score(int);

int main()
{
    char ans[150],name[50];
    int n,b,c,score=0,age=0;
    float f=0.0;
    
    design();
    printf("\n");
    printf("\t\t\t\t\tWELCOME\n");
    printf("\t\t\t\t\t  TO\n");
    printf("\t\t\t\t\t QUIZ\n");
    printf("\t\t\t\t\t GAME\n\n");
    design();
    design();
    printf("\t\t\tTEST YOUR KNOWLEDGE IN YOUR FIELD OF INTEREST\n");
    design();

    printf("\t\t> Enter 1 to Play the game\n\n");
    printf("\t\t> Enter 2 to Quit the game\n\n");
    printf("\t\t> Enter 3 to View the Credits\n\n");
    printf("\t\tYour response:");
    scanf("%d",&n);

    switch (n)
    {
    case 1:
        system("cls");
        goto registration;        
        break;
    
    case 2:
        system("cls");
        goto quit;
        break;

    case 3:
        system("cls");
        goto credits;
        break;

    }

    registration:

           system("cls");
            design();
            printf("\t\t\t\t\tREGISTRATION\n");
            design();
            printf("\t\t\tEnter your name:");
            while (getchar() != '\n');
            gets(name);
            printf("\n");
            printf("\t\t\tAge:");
            //while (getchar() != '\n');
            scanf("%d",&age);
            goto game;
            return;
    game:
        system("cls");
        design();
        printf("\t\t\t\t\tINSTRUCTIONS\n");
        design();
        //printf("Here there will be some instructions\n\n\n\n\n\n");
        printf("\n\t\t> You will have 10 domains out of which you can choose only ONE.\n\n");
        printf("\t\t> You are free to choose your favourite domain.\n\n");
        printf("\t\t> There will be 10 questions in each domain.\n\n");
        printf("\t\t> Each question carries one point.\n\n");
        printf("\t\t> There will be no negative marks for incorrect answer.\n\n");
        printf("\t\t> Enter only respective option letter.\n\n");
        printf("\t\t> You will be shown answers after every question\n\n");
        printf("\t\t> Scores will be displayed at the end of each domain\n\n");
        printf("\t\t> There will be no time limit for each question\n\n");
        printf("\t\t> You cannot quit the game in between when once started\n\n");
        design();
        design();
        printf("\n\t\t> Enter 1 to Play the game\n\n");
        printf("\t\t> Enter 2 to Quit the game\n\n");
        
        printf("\t\tYour response:");
        scanf("%d",&b);
       
        switch (b)
        {
        case 1:
          system("cls");
          goto domain;
          break;
        
        case 2:
          system("cls");
          goto quit;
          break;
      
        }

    quit:
        printf("\n\n\n");
        printf("\t\t\t\t\t-------THANK YOU-------\n\n");
        printf("\t\t\tPlease provide feedback so that we can improve\n\n");
        printf("\t\t\tHow much will you rate us on the scale of 5\n\t\t\t");
        scanf("%f",&f);
      
        if (f<=2 && f>=0)
        {
          printf("\n\t\t\tSeems like your Experience was not good\n\n\t\t\tWe will try to improve");
        }else if (f<=4 && f>2){
          printf("\n\t\t\tSeems like your Experience was good\n\n\t\t\tWe will try to improve");
        }else{
          printf("\n\t\t\tSeems like you are happy with this\n\n\t\t\tTHANK YOU");
        }
        printf("\n\n\t\t\tPress any key to exit");
        getch();
        return;

    credits:
       // printf("This is credit window\n");
         design();
         printf("\t\t\t\t\tCREDITS\n");
         design();
         printf("\t\tMADE BY:\n");
         printf("\t\t\tK6_B2\n\n");
         printf("\t\t> SHAMBHAVI LALSIGNE\t\tRoll no.28\n");
         printf("\t\t> KAUSTUBH LAMBE\t\tRoll no.29\n");
         printf("\t\t> VAISHNAVI LANDE\t\tRoll no.30\n");
         printf("\t\t> ANURAG LANDGE\t\t\tRoll no.31\n");
         printf("\t\t> CHAITANYA LANDGE\t\tRoll no.32 (Group Leader)\n");
         printf("\t\t> AADESH LODHA\t\t\tRoll no.33\n");
        return;

    domain:
        system("cls");
        design();
        printf("\t\t\t\t\tSELECT DOMAIN\n");
        design();
        printf("\n");
         printf("\t\t1. ENTERTAINMENT");
        printf("\t\t\t2. FAMOUS PERSONALITIES\n\n");
        printf("\t\t3. TECHNOLOGY AND ADVANCEMENT");
        printf("\t\t4. FINANCE\n\n");
        printf("\t\t5. GENERAL KNOWLEDGE");
        printf("\t\t\t6. GEOGRAPHY\n\n");
        printf("\t\t7. SPORTS");
        printf("\t\t\t\t8. POLITICS\n\n");
        printf("\t\t9. INDIAN HISTORY");
        printf("\t\t\t10. APTITUDE\n\n");

        printf("\t\tYour response:");
        scanf("%d",&c);

        switch (c)
        {
        case 1:
            system("cls");
            goto entertainment;
            break;

        case 2:
            system("cls");
            goto famous_person;
            break;

        case 3:
            system("cls");
           // goto technology;
            break;

        case 4:
            system("cls");
           // goto finance;
            break;

        case 5:
            system("cls");
           // goto gk;
            break;

        case 6:
            system("cls");
           // goto geography;
            break;

        case 7:
            system("cls");
            goto sports;
            break;

        case 8:
            system("cls");
            goto politics;
            break;

        case 9:
            system("cls");
            goto history;
            break;

        case 10:
            system("cls");
            goto aptitude;
            break;
        
        }
        entertainment:
                        wait();
        QueDesign(1);
printf("\t\tWhat is the name of Sholay's iconic villian?\n\n");
printf("\t\tA.Kaalia\t\t\tB.Shakaal\n\n\t\tC.Gabbar Singh\t\t\tD.Bulla\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[0]);
if (toupper(ans[0])=='C')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option C\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(2);
printf("\t\tWho is the director of Dil Chahata Hai?\n\n");
printf("\t\tA.Zoya Akhtar\t\t\tB.Aamir Khan\n\n\t\tC.Farhan Akhtar\t\t\tD.Reema Kagti\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[1]);
if (toupper(ans[1])=='C')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option C\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(3);
printf("\t\tWhat is Shraddha Kapoor's debut film?\n\n");
printf("\t\tA.Aashiqui2\t\t\tB.Luv ka the End\n\n\t\tC.Ek Villian\t\t\tD.ABCD2\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[2]);
if (toupper(ans[2])=='B')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option B\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(4);
printf("\t\tFor which movie did the late actor Irrfan Khan won national award?\n\n");
printf("\t\tA.Life of pie\t\t\t\tB.Lunch box\n\n\t\tC.Paan Singh tomar\t\t\tD.Billu\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[3]);
if (toupper(ans[3])=='C')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option C\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(5);
printf("\t\tIn ChakDe!India,how many minutes,according to coach Kabir Khan,\n\t\tdoes the team have?\n\n");
printf("\t\tA.70\t\t\tB.69\n\n\t\tC.30\t\t\tD.50\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[4]);
if (toupper(ans[4])=='A')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option A\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();

system("cls");

QueDesign(6);
printf("\t\tHow many sisters does the Tv show FRIENDS character Joey has?\n\n");
printf("\t\tA.5\t\t\tB.3\n\n\t\tC.8\t\t\tD.7\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[5]);
if (toupper(ans[5])=='D')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option D\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(7);
printf("\t\tWhich actor played a famous fiction character 'Sherlock Holmes'\n\t\tin BCC series?\n\n");
printf("\t\tA.Chris Hemsworth\t\tB.Benedict Cumberbatch\n\n\t\tC.Brad Pitt\t\t\tD.Cole Sprouse\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[6]);
if (toupper(ans[6])=='B')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option B\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(8);
printf("\t\tWhat is Black Widow's real name?\n\n");
printf("\t\tA.Natasha Romanoff\t\t\tB.Elisa Jonhs\n\n\t\tC.Jennifer Watson\t\t\tD.Clair Megan\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[7]);
if (toupper(ans[7])=='A')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option A\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(9);
printf("\t\tWhat Hogwarts house is harry in?\n\n");
printf("\t\tA.Slytherin\t\t\tB.Gryffindor\n\n\t\tC.Ravenclaw\t\t\tD.Huffle puff\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[8]);
if (toupper(ans[8])=='B')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option B\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(10);
printf("\t\tWhich actress did Brad Pitt marry before Angelina Julie?\n\n");
printf("\t\tA.Courtney Cox\t\t\t\tB.Jennifer Lopez\n\n\t\tC.Jennifer Aniston\t\t\tD.Sophie Hunter\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[9]);
if (toupper(ans[9])=='C')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option C\n");//
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

DispScore();
Score(score);
goto game;

return;

  famous_person:
        wait();

    QueDesign(1);
    printf("\t\tWho was the first Indian scientist to win noble prize?\n\n");
    printf("\t\tA.C.V Raman\t\t\tB.Amartya sen\n\n\t\tC.Hargobind Khorana\t\tD.Subramanian Chandrashekar\n\n");
    printf("\t\tYour response here:\n\t\t");
    while (getchar() != '\n');
    scanf("%c",&ans[10]);
    if (toupper(ans[10])=='A')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option A\n");
    printf("\t\tReason: Universal truth\n\n");
}
    printf("\t\tPress enter to continue\n");
    getch();
    system("cls");

    QueDesign(2);
  printf("\t\tWh0 was the first Indian woman to win Miss World title?\n\n");
  printf("\t\tA.Aishwarya Rai\t\t\tB.Sushmita Sen\n\n\t\tC.Reita Faria\t\t\tD.Diya Mirza\n\n");
  printf("\t\tYour response here:\n\t\t");
  while (getchar() != '\n');
  scanf("%c",&ans[11]);
  if (toupper(ans[11])=='C')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option C\n");
    printf("\t\tReason: Universal truth\n\n");
}
  printf("\t\tPress enter to continue\n");
  getch();
system("cls");

QueDesign(3);
printf("\t\tWh0 was the president of Uzbekistan?\n\n");
printf("\t\tA.Abdulhashim Mutalov\t\tB.O'tkir Sultanova\n\n\t\tC.Islam Karimov\t\t\tD.Nigmatilla Yudashev\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[12]);
if (toupper(ans[12])=='C')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option C\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(4);
printf("\t\tThe first woman External Affair Minister of India was?\n\n");
printf("\t\tA.Sushma Swaraj\t\t\tB.Jayalalitha\n\n\t\tC.Prathibha Patil\t\tD.Indira Gandhi\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[13]);
if (toupper(ans[13])=='D')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option D\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(5);
printf("\t\tWh0 is the father of Geometry?\n\n");
printf("\t\tA.Aristotle\t\t\tB.Euclid\n\n\t\tC.Pythagoras\t\t\tD.Kepler\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[14]);
if (toupper(ans[14])=='B')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option B\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(6);
printf("\t\tThe Indian to beat the computers in mathematics wizardry is?\n\n");
printf("\t\tA.Ramanujam\t\t\tB.Rina Panigrahi\n\n\t\tC.Raja Ramanna\t\t\tD.Shakuntala Devi\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[15]);
if (toupper(ans[15])=='D')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option D\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(7);
printf("\t\tJamini Roy was a famous?\n\n");
printf("\t\tA.Producer\t\t\tB.Painter\n\n\t\tC.Dancer\t\t\tD.Actor\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[16]);
if (toupper(ans[16])=='B')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option B\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(8);
printf("\t\tWho was the first president of USA?\n\n");
printf("\t\tA.George Washington\t\tB.Donald Trumph\n\n\t\tC.Barack Obama\t\t\tD.James Adams\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[17]);
if (toupper(ans[17])=='A')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option A\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(9);
printf("\t\tWho was the son of Queen Diana?\n\n");
printf("\t\tA.Prince Charles\t\tB.Prince Harry\n\n\t\tC.Prince Archie\t\t\tD.Prince Charles II\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[18]);
if (toupper(ans[18])=='B')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option B\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();

system("cls");

QueDesign(10);
printf("\t\tWho was the first person to cross Antartic circle?\n\n");
printf("\t\tA.James Cook\t\t\tB.Ann Bancroft\n\n\t\tC.Maureen Catherine\t\tD.Eileen Collins\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[19]);
if (toupper(ans[19])=='A')
{
    printf("\t\tCongratulations!!Your answer is correct\n\n");
    score++;
}else{
    printf("\t\tYour answer is incorrect\n\n");
    printf("\t\tCorrect Answer:The correct answer is option A\n");
    printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

DispScore();
Score(score);
goto game;

    history:
        wait();
         QueDesign(1);
  printf("\t\tWhich among the following rulers is often described as the \n\t\tfirst empire builder of Indian History?\n\n");
  printf("\t\tA.Dhanananda\t\t\t\tB.Mahapadmananda\n\n\t\tC.Bimbisara\t\t\t\tD.Chandragupta Maurya\n\n");
  printf ("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[120]);
  if (toupper(ans[120]) == 'B')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option B\n");
      printf ("\t\tReason: Historical Event\n\n");
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(2);
  printf("\t\tThe earliest evidence of domestication of animals has been\n\t\tprovided by Adamagarh. In which of the following states is\n\t\tlocated Adamgarh ?\n\n");
  printf("\t\tA.Rajasthan\t\t\tB.Madhya Pradesh\n\n\t\tC.Gujarat\t\t\tD.Maharastra\n\n");
  printf ("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[121]);
  if (toupper(ans[121]) == 'B')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option B\n");
      printf ("\t\tReason: Historical Event\n\n");
      
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");
    QueDesign(3);
  printf ("\t\tWho had composed the original Ramayana?\n\n");
  printf("\t\tA.Rishi Valmiki\t\t\t\t\tB.Tulsi Das\n\n\t\tC.Sant Ek Nath\t\t\t\t\tD.Anhinanda\n\n");
  printf ("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[122]);
  if (toupper(ans[122]) == 'A')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option A\n");
      printf ("\t\tReason: Universal Fact\n\n");
      
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(4);
  printf ("\t\tRavana was a devotee of who among the following God?\n\n");
  printf("\t\tA.Vishnu\t\t\t\t\tB.Brahma\n\n\t\tC.Shiva\t\t\t\t\t\tD.None of the above\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf("%c", &ans[123]);
  if (toupper(ans[123]) == 'C')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option C\n");
      printf ("\t\tReason: Universal Truth\n\n");
      
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(5);
  printf ("\t\tName of the Kingdom developed by Pandavas\n\n");
  printf("\t\tA.Avanti\t\t\t\t\tB.Indraprastha\n\n\t\tC.Dwarika\t\t\t\t\tD.Hastinapur\n\n");
  printf ("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[124]);
  if (toupper(ans[124]) == 'B')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option B\n");
      printf ("\t\tReason: Universal Fact\n\n");
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(6);
  printf ("\t\tPlace where the Mahabharata War took place\n\n");
  printf("\t\tA.Indraprasth\t\t\t\t\tB.Panipat\n\n\t\tC.Kurukshetra\t\t\t\t\tD.Hastinapur\n\n");
  printf ("\t\tEnter Your Response here: ");
  while (getchar() != '\n');
  scanf ("%c", &ans[125]);
  if (toupper(ans[125]) == 'C')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option C\n");
      printf ("\t\tReason: Historical Event\n\n");
      
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");
    QueDesign(7);
    printf ("\t\tThe Vijayanagara ruler, Kirshnadev Raya\\’s work Amuktamalyada, was in\n\n");
    printf("\t\tA.Kannada\t\t\t\t\tB.Tamil\n\n\t\tC.Sanskrit\t\t\t\t\tD.Telugu\n\n");
  printf ("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[126]);
  if (toupper(ans[126]) == 'D')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option D\n");
      printf ("\t\tReason: Universal Truth\n\n");
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");
    QueDesign(8);
    printf ("\t\tWho founded the Khilji dynasty?\n\n");
  printf("\t\tA.Ala-ud-din Khilji\t\t\tB.Jalal-ud-din Khilji\n\n\t\tC.Shihab-ud-din Khilji\t\t\tD.Qutb-ud-din Khilji\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[127]);
  if (toupper(ans[127]) == 'B')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option B\n");
      printf ("\t\tReason: Universal Fact\n\n");
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");
    QueDesign(9);
    printf("\t\tWho was private secretary of Mahatma Gandhi ?\n\n");
  printf("\t\tA.Gopal Krishan Gokhlae\t\t\tB.Raj Kumar Shukla\n\n\t\tC.Nathu Ram Godse\t\t\tD.Mahadev Desai\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf("%c", &ans[128]);
  if (toupper(ans[128]) == 'D')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option D\n");
      printf ("\t\tReason: Universal Truth\n\n");
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");
    QueDesign(10);
    printf ("\t\tGovernment of India Act passed in\n\n");
  printf("\t\tA.1933\t\t\t\t\tB.1935\n\n\t\tC.1938\t\t\t\t\tD.1947\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[129]);
  if (toupper(ans[129]) == 'B')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option B\n");
      printf ("\t\tReason: Historical Event\n\n");
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    DispScore();
    Score(score);
    goto game;
    return;

    aptitude:

         QueDesign(1);
  printf("\t\tProfit of Raj while selling a book to Simran is Rs. 63.\n\t\tDespite a discount of 23\\% on the book Raj manages to get 10\\% profit.\n\t\tWhat must be the list price of the book?\n\n");
  printf("\t\tA.1120\t\t\t\t\tB.560\n\n\t\tC.900\t\t\t\t\tD.750\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf("%c", &ans[130]);
  if (toupper(ans[130]) == 'C')
    {
      printf ("\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option C\n");
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(2);
  printf("\n\t\tWhen will be both hands of a clock at right angle, between 8pm and 9pm?\n\n");
  printf("\t\tA.29 (8/11) minutes past 8 pm\t\tB.27 (3/11) minutes past 8 pm\n\n\t\tC.25 (7/11) minutes past 8 pm\t\tD.24 (5/11) minutes before 9 pm\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[131]);
  if (toupper(ans[131]) == 'B')
    {
      printf ("\n\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\n\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option B\n");
      
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(3);
  printf("\n\t\tA is formed by reversing the digits of B. B is 45 less than A.\n\t\tThe sum of the digits of B is 9. What is A?\n\n");
  printf("\t\tA.36\t\t\t\t\tB.81\n\n\t\tC.54\t\t\t\t\tD.72\n\n");
  printf ("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[132]);
  if (toupper(ans[132]) == 'D')
    {
      printf ("\n\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\n\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option D\n");
      
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(4);
  printf("\n\t\tSquare of difference between two numbers is 9 while the sum of\n\t\tsquares of those two numbers is 225.\n\t\tWhat is their product\n\n");
  printf("\t\tA.108\t\t\t\tB.125\n\n\t\tC.169\t\t\t\tD.96\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[133]);
  if (toupper(ans[133]) == 'A')
    {
      printf ("\n\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\n\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option A\n");
      
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(5);
  printf ("\n\t\tIn a mixture of 90 L the ratio of acid and water is 2 : 1.\n\t\tIf the ratio of acid and water is to be 1 : 2, then the\n\t\tamount of water (in litres) to be added to the mixture is\n\n");
  printf("\t\tA.20 L\t\t\t\t\tB.40 L\n\n\t\tC.70 L\t\t\t\t\tD.90 L\n\n");
  printf ("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf("%c", &ans[134]);
  if (toupper(ans[134]) == 'D')
    {
      printf ("\n\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\n\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option D\n");
      
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(6);
  printf("\n\t\tWhat will be selling price, if cost price is Rs. 120 and gain is 35% ?\n\n");
  printf("\t\tA.162\t\t\t\t\tB.135\n\n\t\tC.185\t\t\t\t\tD.155\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar() != '\n');
  scanf ("%c", &ans[135]);
  if (toupper(ans[135]) == 'A')
    {
      printf ("\n\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\n\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option A\n"); 
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(7);
    printf ("\n\t\tThe sum of ages of 5 children born at the intervals of\n\t\t3 years each is 50 years. What is the age of the youngest\n\t\tchild\n\n");
  printf("\t\tA.2\t\t\t\t\tB.3\n\n\t\tC.4\t\t\t\t\tD.5\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[136]);
  if (toupper(ans[136]) == 'C')
    {
      printf ("\n\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\n\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option C\n");  
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    QueDesign(8);
    printf ("\n\t\tAn aeroplane covers a certain distance at a speed of 240\n\t\tkmph in 5 hours. To cover the same distance in 5/3 hours,\n\t\tit must travel at a speed of\n\n");
  printf("\t\tA.300kmph\t\t\t\t\tB.360kmph\n\n\t\tC.600kmph\t\t\t\t\tD.720kmph\n\n");
  printf ("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[137]);
  if (toupper(ans[137]) == 'D')
    {
      printf ("\n\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\n\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option D\n");
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");
    
  QueDesign(9);
  printf("\n\t\tIf a person walks at 14 km/hr instead of 10 km/hr, he would\n\t\thave walked 20 km more. The actual distance travelled by him is\n\n");
  printf("\t\tA.45 km\t\t\t\t\tB.55 km\n\n\t\tC.50 km\t\t\t\t\tD.40 km\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf ("%c", &ans[138]);
  if (toupper(ans[138]) == 'C')
    {
      printf ("\n\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\n\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option C\n");
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");
    QueDesign(10);
    printf("\n\t\tA and B together have Rs. 1210. If 4/15 of A's amount is equal to\n\t\t 2/5 of B's amount, how much amount does B have\n\n");
  printf("\t\tA.460\t\t\t\t\tB.484\n\n\t\tC.550\t\t\t\t\tD.664\n\n");
  printf("\t\tEnter Your Response here: ");
  while (getchar () != '\n');
  scanf("%c", &ans[139]);
  if (toupper(ans[139]) == 'B')
    {
      printf ("\n\t\tCongratulations!! Your answer is correct\n\n");
      score++;
    }
  else
    {
      printf ("\n\t\tYour answer is incorrect\n\n");
      printf ("\t\tCorrect answer is option B\n");
    }
    printf("\t\tPress enter to continue\n");
    getch();
    system ("cls");

    DispScore();
    Score(score);
    goto game;
    return;

    sports:
            wait();
            QueDesign(1);
printf("\t\t Which sports personality was ranked at the top spot in the\n\t\tannual Forbes ranking of highest-paid athletes? \n\n");
printf("\t\t A.Cristiano Ronaldo\t\t\t B.Lionel Messi \n\n\t\t C.Virat Kohli\t\t\t\t D.Roger Federer \n\n");
printf("\t\t Your response here: \n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[61]);
if (toupper(ans[61])=='D')
{
 printf("\t\tCongratulations!!Your answer is correct\n\n");
 score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
 	printf("\t\tCorrect  Answer: The correct answer is option D\n");
 printf("\t\t Reason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(2);
printf("\t\tWho is the first Indian to win the Fed Cup Heart Award for\n\t\tAsia/Oceania zone?\n\n");
printf("\t\tA.Leander Paes \t\t\t\tB.Sania Mirza\n\n\t\tC.Rohan Bopanna\t\t\t\tD.Prajnesh Gunneswaran\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[62]);
if (toupper(ans[62])=='B')
{
 printf("\t\tCongratulations!!Your answer is correct\n\n");
 score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
 	printf("\t\tCorrect Answer: The correct answer is option B\n");
 printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(3);
printf("\t\tTour de France\' event, which has been postponed due to\n\t\tCovid-19 outbreak, is related to which sports?\n\n");
printf("\t\tA.Tennis\t\t\tB.Marathon\n\n\t\tC.Cycling\t\t\tD.Golf\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[63]);
if (toupper(ans[63])=='C')
{
 printf("\t\tCongratulations!!Your answer is correct\n\n");
 score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
 	printf("\t\tCorrect Answer: The correct answer is option C\n");
printf("\t\tReason: The Tour de France\' is the famous cycling race event of the world.\n\t\tEvent has been scheduled to  be held from June 27 to July 19, 2020.\n\n");
}
printf("\t\tPress enter to continue \n");
getch();
system("cls");

QueDesign(4);
printf("\t\tBreakdancing has been included as an official sport in which\n\t\tfamous event\n\n");
printf("\t\tA.Asian Games\t\t\t\tB.Olympics\n\n\t\tC.Commonwealth Games\t\t\t D.South Asian Games \n\n");
printf("\t\tYour response here:   \n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[64]);
if (toupper(ans[64])=='B')
{
 printf("\t\tCongratulations!!Your answer is correct\n\n");
 score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
 	printf("\t\tCorrect Answer: The correct answer is option B\n");
 printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(5);
printf("\t\tThe cricket team of which country was recently presented with\n\tt\tthe ICC Women’s Championship trophy?\n\n");
printf("\t\tA.England\t\t\tB.South Africa \n\n\t\tC.Australia \t\t\tD.New Zealand\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[65]);
if (toupper(ans[65])=='C')
{
 printf("\t\tCongratulations!!Your answer is correct\n\n");
 score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
 	printf("\t\tCorrect Answer: The correct answer is option C\n");
 printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(6);
printf("\t\tWhich international football club won the Premier League title,\n\t\twith seven games left?\n\n");
printf("\t\tA.Chelsea\t\t\tB.Manchester City\n\n\t\tC.Liverpool\t\t\tD.Arsenal\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[66]);
if (toupper(ans[66])=='C')
{
 printf("\t\tCongratulations!!Your answer is correct\n\n");
 score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
 	printf("\t\tCorrect Answer: The correct answer is option C\n");
 printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(7);
printf("\t\tWhich racing driver won the Formula One Hungarian Grand Prix?\n\n");
printf("\t\tA.Lewis Hamilton\t\t\tB.Sebastian Vettel \n\n\t\tC.Max Verstappen\t\t\tD. Charles Leclerc \n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[67]);
if (toupper(ans[67])=='A')
{
 printf("\t\tCongratulations!!Your answer is correct\n\n");
 score++;
}
else
{
 printf("\t\tYour answer is incorrect   \n\n");
 	printf("\t\tCorrect Answer:The correct answer is option A\n");
 printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(8);
printf("\t\tWho won the men\'s singles final at badminton World Tour\n\t\theld in Bangkok?\n\n");
printf("\t\tA.Anders Antonsen\t\t\tB.Lin Dan\n\n\t\tC.Jan o Jorgensen\t\t\tD.Lee Chong Wei\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[68]);
if (toupper(ans[68])=='A')
{
 printf("\t\tCongratulations!!Your answer is correct\n\n");
 score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
 	printf("\t\tCorrect Answer:The correct answer is option A\n");
 printf("\t\tReason: Universal truth    \n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(9);
printf("\t\tKobe Bryant, who recently died in a helicopter crash,\n\t\twas a legendary personality of which sports?\n\n");
printf("\t\t A.Cricket\t\t\tB.Basket ball \n\n\t\tC.Football\t\t\tD.Boxing\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[69]);
if (toupper(ans[69])=='B')
{
 printf("\t\tCongratulations!!Your answer is correct\n\n");
 score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
 	printf("\t\t Correct Answer: The correct answer is option B\n");
 printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(10);
printf("\t\tWhich cricketer won the \'Sir Garfield Sobers Trophy\' for\n\t\t\'Player of the Year\', presented by the International Cricket Council (ICC)?\n\n");
printf("\t\tA.Virat Kohli\t\t\t\tB.Ben Stokes\n\n\t\tC.Kane Williamson\t\t\tD.Rohit Sharma\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[70]);
if (toupper(ans[70])=='B')
{
 printf("\t\tCongratulations!!Your answer is correct\n\n");
 score++;
}
else
{
 printf("\t\tYour answer is incorrect   \n\n");
 	printf("\t\tCorrect Answer: The correct answer is option B\n");
 printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

DispScore();
    Score(score);
    goto game;

    return;

politics:
          wait();
          QueDesign(1);
printf("\t\t Who among the following was the first Speaker of the Lok Sabha?\n\n");
printf("\t\tA. Ganesh Vasudev Mavalankar\t\tB. M.A. Ayyangar\n\n\t\tC. Sardar Hukam Singh\t\t\tD. N. Sanjiva Reddy\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[71]);
if (toupper(ans[71])=='A')
{
printf("\t\tCongratulations!!Your answer is correct\n\n");
score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
printf("\t\tCorrect Answer:The correct answer is option A\n");
printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(2);
printf("\t\t Who among the following was the main rival candidate against\n\t\tIndia’s first President Dr. Rajendra Prasad?\n\n");
printf("\t\tA. NN Das\t\t\tB.  K T Shah\n\n\t\tC. CH Ram\t\t\tD. S Radhakrishnan\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[72]);
if (toupper(ans[72])=='B')
{
printf("\t\tCongratulations!!Your answer is correct\n\n");
score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
               printf("\t\tCorrect Answer:The correct answer is option B\n");
printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(3);
printf("\t\t Which State has the largest number of members in Lok Sabha?\n\n");
printf("\t\tA. Maharashtra\t\t\tB. West Bengal\n\n\t\tC. Uttar Pradesh\t\tD. Madhya Pradesh\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[73]);
if (toupper(ans[73])=='C')
{
printf("\t\tCongratulations!!Your answer is correct\n\n");
score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
               printf("\t\tCorrect Answer:The correct answer is option C\n");
printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(4);
printf("\t\t Who has the power to establish municipalities in Union Territories?\n\n");
printf("\t\tA. State legislature\t\tB. Parliament of India\n\n\t\tC. Governor\t\t\tD. None of the above\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[74]);
if (toupper(ans[74])=='B')
{
printf("\t\tCongratulations!!Your answer is correct\n\n");
score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
               printf("\t\tCorrect Answer:The correct answer is option B\n");
printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(5);
printf("\t\tWhere is the Forest Research Institute located?\n\n");
printf("\t\tA.Raipur\t\t\tB.Jodhpur\n\n\t\tC.Dehradun\t\t\tD.Chennai\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[75]);
if (toupper(ans[75])=='C')
{
printf("\t\tCongratulations!!Your answer is correct\n\n");
score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
               printf("\t\tCorrect Answer:The correct answer is option C\n");
printf("\t\tReason: The Forest Research Institute is located in Dehradun, Uttrakhand.\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(6);
printf("\t\tIn which year was the National Human Rights Commission\n\t\testablished?\n\n");
printf("\t\tA.1992\t\t\tB.1993\n\n\t\tC.1994\t\t\tD.1995\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[76]);
if (toupper(ans[76])=='B')
{
printf("\t\tCongratulations!!Your answer is correct\n\n");
score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
               printf("\t\tCorrect Answer:The correct answer is option B\n");
printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(7);
printf("\t\tWho was the chairman of the first Finance Commission?\n\n");
printf("\t\tA. K. Santhanam\t\t\tB. A.K. Chanda\n\n\t\tC. K.C. Neogy\t\t\tD. Mahavir Tyagi\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[77]);
if (toupper(ans[77])=='C')
{
printf("\t\tCongratulations!!Your answer is correct\n\n");
score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
               printf("\t\tCorrect Answer:The correct answer is option C\n");
printf("\t\tReason: K.C. Neogy was the chairman of the first Finance Commission of India\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(8);
printf("\t\tWho among the following coined the term zero hour?\n\n");
printf("\t\tA. Constitution assembly\t\tB. Dr. B R Ambedkar\n\n\t\tC. Indira Gandhi\t\t\tD. Press\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[71]);
if (toupper(ans[71])=='D')
{
printf("\t\tCongratulations!!Your answer is correct\n\n");
score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
               printf("\t\tCorrect Answer:The correct answer is option D\n");
printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(9);
printf("\t\tZonal Councils are which type of bodies?\n\n");
printf("\t\tA. Constitution bodies\t\tB. Statutory bodies\n\n\t\tC. Non Statutory bodies\t\tD. Extra Constitutional bodies\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[79]);
if (toupper(ans[79])=='B')
{
printf("\t\tCongratulations!!Your answer is correct\n\n");
score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
               printf("\t\tCorrect Answer:The correct answer is option B\n");
printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

QueDesign(10);
printf("\t\tElection Commission is constituted under which article of\n\t\tthe Constitution of India?\n\n");
printf("\t\tA. Article 324\t\t\tB. Article 325\n\n\t\tC. Article 326\t\t\tD. Article 327\n\n");
printf("\t\tYour response here:\n\t\t");
while (getchar() != '\n');
scanf("%c",&ans[80]);
if (toupper(ans[80])=='A')
{
printf("\t\tCongratulations!!Your answer is correct\n\n");
score++;
}
else
{
 printf("\t\tYour answer is incorrect\n\n");
               printf("\t\tCorrect Answer:The correct answer is option A\n");
printf("\t\tReason: Universal truth\n\n");
}
printf("\t\tPress enter to continue\n");
getch();
system("cls");

  DispScore();
  Score(score);
  goto game;

  return;

        return 0;
}


void design(){
    printf("\t\t-------------------------------------------------------------\n");
}

void QueDesign(int c){
    printf("\t\t-------------------------------------------------------------\n");
    printf("\t\t\t\t\tQUESTION %d\n",c);
    printf("\t\t-------------------------------------------------------------\n");
}

void wait(){
    system("cls");
        printf("\n\n");
        printf("\t\t\tPlease wait.....\n\n");
        printf("\t\t\tFetching your questions\n\n");
        printf("\t\t\tRemember\n\n");
        printf("\t\t\t\tBe confident and answer :)\n\n\n");
        printf("\t\t\t!!!!!!!!!!! ALL THE BEST !!!!!!!!!!!");
        Sleep(5000);
        system("cls");
}

void DispScore(){
  printf("\n\n\n\t\t\t!!! CONGRATULATIONS !!!\n\n");
  printf("\t\tYou have completed your Quiz succesfully\n\n");
  printf("\t\tNow it's Score time :)\n\n");
  printf("\t\tCalculating your score.....\n\n");
  printf("\t\tPlease wait !!!");
  Sleep(5000);
  system("cls");
}

void Score(int score1){
  
  printf("\t\t-------------------------------------------------------------\n");
    printf("\t\t\t\t\tSCORE\n");
    printf("\t\t-------------------------------------------------------------\n\n");

    printf("\t\t\tYou have obtained a score of %d points\n\n",score1);
    printf("\t\t\tPress any key to return to main screen\n");
    getch();
    system("cls");
}