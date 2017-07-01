#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>

#define LENGTH_ALLIANCE 4

using namespace std;




	/* pour se déplacer dans les dossiers :
		en avant : cd TonDosssier
		en arriere : cd ..
		voir les dossiers et fichiers de la ou on est : ls
		prédire le nom du Dossier/Fichier : couper	
	 g++ -Wall untitled.cpp -o test1
	*/

int main()

  {
   srand(time(NULL));
   string alliance[LENGTH_ALLIANCE]  =  {"promesse","mariage","terre","service"};

   srand(time(NULL));

   int ALLIANCE = rand()%(LENGTH_ALLIANCE);

   int A = rand()%(9)+1;
   int O = rand()%(9)+1;
   int M = rand()%(9)+1;
   int T = rand()%(9)+1;


    cout << A << endl;
    cout << O << endl;
    cout << M << endl;
    cout << T << endl;
    cout << alliance[ALLIANCE] << endl;


       /*
       ETAPE = ETAPE + 1;
       MIN = rand()%(5)+1;
       cout << etape[ETAPE] << ") " << MAJajouter[AJMAJ] << " the " << ingrsolnb[INGSOLNB1] << " in a " << verrerie[VERR] << " half filled with water " << temperature[TEMPER] << " for " << MIN <<  "0 minutes.";
       cout << bold_on << endl << endl << "       •Your potion should now ";
       if (TESTEX == 0){cout << turn[TUR] << " " << texture[TEX] << "." << endl << endl << bold_off;}
       if (TESTEX == 1){cout << turn[TUR] << " " << texture[TEX] << " and " << precision[PREC] << " " << couleurs[COUL] << " colored." << endl << endl << bold_off;}
       if (TESTEX == 2){cout << turn[TUR] << " " << couleurs[COUL] << " and " << texture[TEX] << "." << endl << endl << bold_off;}
       if (TESTEX == 3){cout << turn[TUR] << " " << precision[PREC] << "er." << endl << endl << bold_off;}
       if (TESTEX == 4 || TESTEX == 5){cout << "smell like " << smell[SMELL] << "." << endl << endl << bold_off;}

       MEL = rand()%(LENGTH_MELANGER);
       MAN = rand()%(LENGTH_MANIERE);
       ETAPE = ETAPE + 1;
       cout << etape[ETAPE] << ") Shed " << maniere[MAN] << " the " << ingrsolnb[INGSOLNB1] << " mixture into the cauldron " << melanger[MEL] << "ing " << maniere[rand()%(LENGTH_MANIERE)] << "." << endl << endl;

       TESTEX = rand()%(6);
       SMELL = rand()%(LENGTH_SMELL);
       TEX = rand()%(LENGTH_TEXTURE);
       PREC = rand()%(LENGTH_PRECISION);
       COUL = rand()%(LENGTH_COULEURS);
       MIN = rand()%(5)+1;
       MEL = rand()%(LENGTH_MELANGER);
       SEN = rand()%(LENGTH_SENS);
       NB = rand()%(LENGTH_NOMBRE);
       MAN = rand()%(LENGTH_MANIERE);

       ETAPE = ETAPE + 1;
       cout << etape[ETAPE] << ") " << MAJmaniere[MANMAJ] << " stir " << nombre[NB] << " " << sens[SEN] << " and let decant for " << MIN <<  "0 minutes." << endl << endl;

       ETAPE = ETAPE + 1;
       HOURS = rand()%(23)+1;
       FRAC = rand()%(LENGTH_FRAC);
       if (CHILL == 1){cout << etape[ETAPE] << ") Leave the concoction to settle for " << MIN << " minutes." << endl << endl;}
       if (CHILL == 2){cout << etape[ETAPE] << ") Leave the concoction to rest for " << HOURS << " hours." << endl << endl;}
       if (CHILL == 3){cout << etape[ETAPE] << ") Leave the concoction to settle for " << DAY << " days." << endl << endl; }
       if (CHILL == 4){cout << etape[ETAPE] << ") Leave the concoction to rest for " << DAY << " days and " << HOURS << " hours." << endl << endl;}
       if (CHILL == 5){cout << etape[ETAPE] << ") Leave the concoction to settle for " << MIN << " minutes." << endl << endl;}
       if (CHILL == 6){cout << etape[ETAPE] << ") Leave the concoction to settle for " << rand()%(2)+1 << frac[FRAC] << " hours." << endl << endl;}
       if (CHILL == 7){cout << etape[ETAPE] << ") Leave the concoction to rest for " << rand()%(4)+1 << frac[FRAC] << " minutes." << endl << endl;}
       if (CHILL >  7){ETAPE = ETAPE - 1;}

       TESTEX = rand()%(6);
       SMELL = rand()%(LENGTH_SMELL);
       TEX = rand()%(LENGTH_TEXTURE);
       PREC = rand()%(LENGTH_PRECISION);
       COUL = rand()%(LENGTH_COULEURS);
       MIN = rand()%(5)+1;
       MEL = rand()%(LENGTH_MELANGER);
       SEN = rand()%(LENGTH_SENS);
       NB = rand()%(LENGTH_NOMBRE);
       MAN = rand()%(LENGTH_MANIERE);
       ETAPE = ETAPE + 1;
       cout << etape[ETAPE] << ") " << MAJmaniere[MANMAJ] << " stir " << nombre[NB] << " " << sens[SEN] << " and let cool down for " << MIN <<  "0 minutes.";
       cout << bold_on << endl << endl << "       •Your potion should now ";
       if (TESTEX == 0){cout << turn[TUR] << " " << texture[TEX] << "." << endl << endl << bold_off;} 
       if (TESTEX == 1){cout << turn[TUR] << " " << texture[TEX] << ", and be " << precision[PREC] << " " << couleurs[COUL] << "." << endl << endl << bold_off;} 
       if (TESTEX == 2){cout << turn[TUR] << " " << couleurs[COUL] << " and " << texture[TEX] << "." << endl << endl << bold_off;} 
       if (TESTEX == 3){cout << turn[TUR] << " " << precision[PREC] << "er." << endl << endl << bold_off;}
       if (TESTEX == 4 || TESTEX == 5){cout << "smell like " << smell[SMELL] << "." << endl << bold_off << endl;}

       ETAPE = ETAPE + 1;
       cout << etape[ETAPE] << ") Your potion preparation is now completed." << endl << endl;

     }
     */

   }

