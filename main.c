#include <stdio.h>
#include <stdlib.h>

 
char Teams[8][5];
int i;
char team1[10];
char team2[10];
char team3[10];
char team4[10];
char q1[10];
char q2[10];
char q3[10];
char q4[10];
char q5[10];
char q6[10];
//global variables
int matrix[8][8] = { 0 };


int ta = -1, tb = -1;

//checks if it's a valid matchmaking
// 1. Makes sure that teams won't play the next match
// 2. Makes sure that team only plays one match against each in home ground.
  int
checkMatching (int *A, int *B, int as, int bs) 
{
  
int ta1 = A[as];
  
int tb1 = B[bs];
  
if (tb == ta1 || ta == ta1 || tb1 == tb || ta == tb1)
    
return 0;			// function 4
  if (matrix[ta1][tb1] == 0)
    
    {
      
matrix[ta1][tb1]++;
      
return 1;
    
}
  
  else
    
return 1;

}


int total (int);

int
total (int n) 
{
  
int q, *y;
  
q = (n * n - n);
  
y = &q;
  
return q;			// function 1
}


int each (int);

int
each (int n) 
{
  
int p, *z;
  
p = ((n * n - n) / n) * 2;	//function 2
  z = &p;
  
return p;

}


float nrr (int, int);

float
nrr (int r, int s) 
{
  
float d;
  
printf ("Number of Runs Scored : ");
  
scanf ("%d", &r);
  
printf ("Number of Overs : ");	// function 3
  scanf ("%d", &s);
  
d = r / s;
  
return d;

}


int main() 
{
  
int n, p, q, m, h;
  
char Teams[8][5];
  
int day = 0;
  
float d, r, s;
  
int match_no = 1;
  
int a1[8], b1[8];
  
printf
    (">>>>>>>>>> WELCOME TO THE IPL TOURNAMNENT SCHEDULING <<<<<<<<<<<<<\n \n");
  
printf ("Enter the number of teams participating in the tournament : ");
  
scanf ("%d", &n);
  
printf ("The total Number of matches conducted = %d \n", total (n));	// FUNCTION 1 CALLING
  printf ("The total number of matches played by each team = %d \n", each (n));	// FUNCTION 2 CALLING
  for (m = 0; m < n; m++)
    
    {
      
printf ("\nEnter the name of team %d:", m + 1);
      
scanf ("%s", &Teams[m][h]);	// For Loop // array
      Teams[8][5] == Teams[m][h];
    
}
  
for (int i = 0; i < 8; i++)
    {
      
a1[i] = i;
      
b1[i] = (i + 2) % 8;
    
} 
int a1s = 0;
  
int b1s = 0;
  
int a1l = 7;
  
int b1l = 7;
  
for (int i = 0; i < (n * n - n); i++)
    
    {
      
while (!checkMatching (b1, b1, a1s, b1s))	// FUNCTION 4 CALLING
	{			//increment the index of Array a1
//a1s means starting index and a1l means last index
	  a1s = (a1s + 1) % 8;
	  
a1l = (a1l + 1) % 8;
	  
// b1 = next(b1);
	}
      
if (a1[a1s] == b1[b1s])
	
	{
	  
//increment the index of Array b1
	    b1s = (b1s + 1) % 8;
	  
b1l = (b1l + 1) % 8;	//b1s means starting index and b1l means last index
	}
      
int ta = a1[a1s];
      
int tb = b1[b1s];
      
day++;
      
if (day % 7 == 5 || day % 7 == 6)
	
	{
	  
printf ("Match %d: %s vs %s on afternoon \n", i + 1, Teams[ta],
		   Teams[tb]);
	  
i += 1;
	
}
      
printf ("Match %d: %s vs %s on the night \n", i + 1, Teams[ta], Teams[tb]);	//increment the index of Array a1
//a1s means starting index and a1l means last index
      a1s = (a1s + 1) % 8;
      
a1l = (a1l + 1) % 8;
      
b1s = (b1s + 1) % 8;
      
b1l = (b1l + 1) % 8;	//increment the index of Array b1
//b1s means starting index and b1l means last index
    }
  
printf ("Calculating net run rate\n\n");
  
printf ("The Required RunRate is =%f\n\n", nrr (r, s));	// FUNCTION 3 CALLING
printf
    ("A team's net run rate is calculated by deducting from the average runs per over scored by that team throughout the competition\n");



if(n==3)
{
    return 0;
}
else
{
    printf("enter the top four teams in points table\n");
    
    printf("Enter 1st team :\t");
    scanf("%s",team1);
    printf("Enter 2nd team :\t");
    scanf("%s",team2);
    
    printf("Enter 3rd team :\t");
    scanf("%s",team3);
    
    printf("Enter 4th team :\t");
    scanf("%s",team4);
    
    




}




printf("----------------->>>>>>>>>> QUALIFIER -1<<<<<<<<<<<<<<<<<<<<<<-----------------------\n ");
printf("%s vs %s\n",team1,team2);
printf("Enter the team that won in Qualifier-1 :\t");
scanf("%s",q1);
printf("Enter the team that Lost in Qualifier-1  :\t");
scanf("%s",q2);





printf("----------------->>>>>>>>>> ELIMINATOR<<<<<<<<<<<<<<<<<<<<<<-----------------------\n");
printf("%s vs %s\n",team3,team4);
printf("Enter the team that won in ELIMINATOR  :\t");
scanf("%s",q3);
printf("Enter the team that Lost in ELIMINATOR:\t");
scanf("%s",q4);





printf("----------------->>>>>>>>>> QUALIFIER -2 <<<<<<<<<<<<<<<<<<<<<<----------------------- \n");
printf("%s vs %s\n",q2,q3);
printf("Enter the team that won in Qualifier-2:\t");
scanf("%s",q4);





printf("----------------->>>>>>>>>> FINALS <<<<<<<<<<<<<<<<<<<<<<-----------------------\n");
printf("%s vs %s\n",q1,q4);
printf("Enter the team that won in FINALS :\t");
scanf("%s",q5);





printf("The winner of this IPL Season is %s",q5);




return 0;




}
