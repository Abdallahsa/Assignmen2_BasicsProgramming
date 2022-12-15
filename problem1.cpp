//20200302
//S9
//abdallah saleh
#include <iostream>
#include <iomanip>   
#include <string>


using namespace std;

double Sin(double x);
double power(double x, double y);
double Factorial(double Number);
double Convert(double Degree);
double Cos(double x );
double tan (double arr[], double size);

int main()
{
	//the conast numbeer
    double arr [15] = {1/6,-1/30,1/42,-1/30,5/66,691/2730,7/6,-3617/510,43867/798,-174611/330,854513/138,-86580.25,1425517.16,-27298231.06,601580873.90};

   double angle,rad,z , sum;

   cout <<"Please enter the angle in degrees : ";

   cin >> angle;

   cout<< setprecision (2) <<fixed;

   cout << "The angle in rad is : " << Convert(angle) << endl;

   cout << "Sine the angle in rad is : " << Sin(Convert(angle)) << endl;

   cout << "Cos the angle in rad is : " << Cos(Convert(angle))<< endl;

   cout << "tan the angle in rad is : " << tan(arr, 15) << endl;


}
//thee tow function
double Factorial(double Number)
{
    double sum=1, counter=1 ;
    while(counter<=Number)
    {
      sum=sum*counter;
      counter=counter+1;
    }
    return sum;
}
//thee thie function
   double power(double x, double y)
    {
        double count=1;
      double  res = 1 ;
	  //the degree
      while(count<=y)
      {
        res = res*x;
        count=count+1;
      }
      return res;
    }
   //the 4 function
double Convert(double Degree)
    {
        double Rad;
       Rad=(3.14* Degree)/180;
       return Rad;
    }

 double Sin(double x)
{
     double n = 0 , h = 0;
     while (n<=14)
    {
        h+=(power(-1,n)*power(x,2*n+1))/Factorial(2*n+1);
        n=n+1;
    }
    return h;
}
double Cos(double x)
{
    double n=0 , a=0 ;
    while (n<=14)
    {
       a+=(power(-1,n)/Factorial(2*n))*power(x,2*n);
       n+=1;
    }
    return a;
}
// the 5 function

double tan (double arr[], double size)
{
    double sum =0 ,x;


        for(int n=1;n<15;n++)
        {
            sum+=(power(-1,n)*(power(2,2*n+2)-1))* arr [n]*power(x,2*n+1)/Factorial(2*n+2);
            return sum ;
        }

}
