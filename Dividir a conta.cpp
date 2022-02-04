#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
   double a;

   cout<<"Qual o seu salario? ";

   cin>>a;

   if (a<=600){

         cout<<"Voce sera isento desse imposto";

   }

   else if (600<a && a<=1200){

         a=(a*20)/100;
      
        cout<<"O valor que devera ser pago eh: "<<a;
   }

   else if (1200<a && a<=2000){

      a=(a*25)/100;

      cout<<"O valor que devera ser pago eh: "<<a;
   }
   else {

      a=(a*30)/100;

      cout<<"O valor que devera ser pago eh: "<<a;
   }

return 0;
}
