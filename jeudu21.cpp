#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int ordinateur21 ( int nb_alea , int total) {
    if(total<17 ) {
      srand(time(0));
     nb_alea = (rand() % 3)+1 ;
    }
    if (total==17) {
        srand(time(0));
       nb_alea=3 ;
    }
    if(total==18) {
       srand(time(0));
        nb_alea =2;
         }
    if (total==19) {
       nb_alea = 1;
         }
         if (total==20) {
          nb_alea = 1;
         }
cout<<"L'ordinateur a dit: "<<nb_alea<<endl;
 total=nb_alea+total;
  return total;
}

int main()

{ int  nb,total,nb_alea,val,nbpart,i,point;
    nb_alea=0;
    total=0;
    cout<<"Combien voulez-vous de partie(s)?"<<endl;
    cin>>nbpart;
    while (nbpart<=0) {
         cout<<"(ERREUR pour le nombre de partie)"<<endl;
         cout<<"Combien voulez-vous de partie(s)?"<<endl;
         cin>>nbpart;
    }
    for (i=1;i<=nbpart;i++) {
    cout<<"Qui commence le jeu du 21, l'ordinateur ou vous?(vous=0 et ordinateur=1)"<<endl;
    cin>>val;
    while (val !=0 && val!=1) {
        cout<<"Veuillez, ressaisir val"<<endl;
        cout<<"Qui commence le jeu du 21, l'ordinateur ou vous?(vous=0 et ordinateur=1)"<<endl;
        cin>>val;
    }
    if (val==1) {
      total=ordinateur21 ( nb_alea ,  total);
      cout<<"Le total est de: "<<total<<endl;
            }
           while (total<21){
            cout<<"Saisir un nombre entre 1 et 3"<<endl;
            cin>>nb;
            total=nb+total;
            if (total>=21 ) {
                cout<<"Vous avez perdu, DOMMAGE!"<<endl;
                 }
            else {
                if (nb > 3 || nb <= 0){
                cout<<"Tu es un tricheur, fin de la partie"<<endl;
                total=21;
                }
                else {
        total=ordinateur21 (  nb_alea ,  total);
        cout<<"Le total est de: "<<total<<endl;
       if(total==21) {
            cout<<"Vous avez gagne, VICTOIRE!"<<endl;
            point=point+1;
                     }
                 }
             }
          }
       total=0;
       }
       cout<<"vous avez gagne "<<point<<" partie(s) sur "<<nbpart<<" partie(s)"<<endl;
    }


