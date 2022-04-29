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


void valab(int x, int y,char q[],int len)
{ 
  char alf [27]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','@','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  //int len = sizeof(*q)-1;
  int n;
  int aux;
  int cif;
  int r;
  int inv;
  for(int k(0); k < 1;k++) //M; i =3
  {
    for(int h(0);h < 27; h++) //j=12
    {
      if(q[k] == alf[h])
      {
        n=h;
        break;
      }
    }
  }
  
  for (int i=0;i<27;i++)
  {
    for(int j=1;j<27 && mcd(j,27)==1;j++)
    {
        inv = (28/j);
        aux = (inv*(n-i))%27;
        if(aux<0)
        {
          r = 27+aux;
          cif=((j*r)+i)%27;
          if (q[0]==alf[cif])
          {
            x=j;
            y=i;
          }
        }
        else
        {
          r=aux;
          cif=((j*r)+i)%27;
          if (q[0]==alf[r])
          {
            x=j;
            y=i;
          }
        }
        
    }
  }
  
  cout<<"valor a: "<<x<<endl;
  cout<<"valor b: "<<y<<endl;
  decifrado(x,y,q,len);
}


int main() 
{
  int a;
  int b;
  
  char palabra4[]="SLBCMVRBSHZBT@SRQVVMSZBVH@BVRQVLALHZBT@SRQVWQAXLZW@AQFQV";
  int tam4 = sizeof(palabra4)-1;
  valab(a,b,palabra4,tam4);
  cout<<endl;
  
  //decifrado(2,26,palabra4,tam4);
  
}



