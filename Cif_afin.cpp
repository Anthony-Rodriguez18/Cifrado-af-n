#include <iostream>
using namespace std;


//alf [27][2]= [['A',0],['B',1],['C',2],['D',3],['E',4],['F',5],['G',6],['H',7],['I',8],['J',9],['K',10],['L',11],['M',12],['N',13],['Ñ',14],['O',15],['P',16],['Q',17],['R',18],['S',19],['T',20],['U',21],['V',22],['W',23],['X',24],['Y',25],['Z',26]];

int mcd(int a,int b)
{
  if (b == 0)
    return a;
  else
    return mcd(b, a%b);
}

void cifrado(int a, int b,char p[], int len)
{
  char alf [27]=     {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','@','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  if(mcd(a,27)!= 1 ||b<0 || b>27)
  {cout<<"clave no válida xd"<<endl;}

  else
  {
    char pdc[len];
    char let;
    int n;
    int aux; 
    for(int i(0); i < len;i++)
    {
      for(int j(0);j < 27; j++)
        {
          if(p[i] == alf[j])
          {
            n = j;
            aux = ((a*n)+b)%27;
            let = alf[aux];
            pdc[i]= let;
            break;
          }
        }
    }
  
    cout << "PALABRA cifrada: "<< endl;
    for(int i(0); i<len; i++)
    {
      cout << pdc[i]; 
    }
  }
  cout<<endl;
}

void decifrado(int a, int b,char p[], int len)
{
  char alf [27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','@','O','P','Q','R','S','T','U','V','W','X','Y','Z'};

  if(mcd(a,27)!= 1 ||b<0 || b>27)
  {cout<<"clave no válida xd"<<endl;}

  else
  {
    char pdc[len];
    char let;
    int aux;
    int n;
    int inv;
    for(int i(0); i < len;i++) //M; i =3
    {
      for(int j(0);j < 27; j++) //j=12
        {
          if(p[i] == alf[j])
          {
            inv = (28/a);
            aux = (inv*(j-b))%27;
            //7 (12-7)
            if(aux<0){let = alf[27+aux];}
            else{let = alf[aux];}
            //let = alf[aux];
            pdc[i]= let;
            break;
          }
        }
    }
  
    cout <<endl << "PALABRA decifrada: "<< endl;
    for(int i(0); i<len; i++)
    {
      cout << pdc[i]; 
    }
  }
  cout<<endl;
}


int main() 
{

  char palabra[]="SOS";
  int tam = sizeof(palabra)-1;
  cifrado(7,13,palabra,tam);

  char palabra1[]="LKL";
  int tam1 = sizeof(palabra1)-1;
  decifrado(7,13,palabra1,tam1);
  
  char palabra2[]="ELEMENTALMIQUERIDOWATSON";
  int tam2 = sizeof(palabra2)-1;
  cifrado(4,7,palabra2,tam2);

  char palabra3[]="OKHFSNKFNWFCWJHSNCHQYWFSWF";
  int tam3 = sizeof(palabra3)-1;
  decifrado(4,7,palabra3,tam3);
  
}



