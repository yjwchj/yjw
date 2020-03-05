#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	struct province
	{int Cumulativediagnosis;
	 int Cumulativecure;
     int Cumulativedeath ;
     int Newlydiagnosed;
     int Newseverecases;
     int Cumulativeseveredisease;
     int Newcure;
     int Newdeath;
     int Severereduction;
     int Existingsuspecte;
     int Suspectedreduction;
     int Suspectedincrease;

	};
	
	void input(struct province *p);
	void output(struct province *p);

	
	return 0;
	} 
