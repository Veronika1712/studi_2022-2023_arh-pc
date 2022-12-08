//Sherbakova Veronika,RUDN,NBIbd-03-22,05.10.2022
#include <iostream>
 using namespace std;
 //Нахождение факториала с помощью цикла
 long double fact(int N)
 {
     if (N<0)
     return 0;
     if (N==0)
     return 1;
     else 
     return N*fact(N-1);
 }
 int main()
 {
     int N;
     setlocale(LC_ALL,"rus");
     cout<<"Программа находит факториал заданного числа\n";
     cout<<"Введите N:";
     cin>>N;
     cout<<"Факториал для числа "<<N<<" = "<<fact(N)<<endl<<endl;
     return 0;
 }