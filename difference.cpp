#include <iostream>
#define MAX 100
using namespace std;

int create(int *setA,int &a)
{
   cout << "Enter the number of elements: ";
   cin >> a;
   cout << "Enter the elements of set: " << endl;
   for (int i=0;i<a;i++)
   {
      cin >> setA[i];
   }
}

int print(int *setA,int &a)
{
   int i;
   cout << "{";
   for (i=0;i<a-1;i++)
   {
      cout << setA[i] << ",";
   }
   cout << setA[i] << "}";
}

int main()
{
   int setA[MAX],setB[MAX],setC[MAX],a,b,c=0,i,j;

   cout << "Set A" << endl;
   create(setA,a);
   cout << "\nSet B" << endl;
   create(setB,b);

   cout << "\nA: ";
   print(setA,a);
   cout << "\nB: ";
   print(setB,b);

   //DIFFERENCE OPERATION
   for (i=0;i<a;i++)
   {
      for (j=0;j<b;j++)
      {
         if (setA[i] == setB[j])
         {
            break;
         }
      }
      if (setA[i] != setB[j])
      {
         setC[c] = setA[i];
         c++;
      }
   }

   cout << "\nDifference: ";
   print(setC,c);
   return 0;
}
