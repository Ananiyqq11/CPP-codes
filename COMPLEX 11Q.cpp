



#include<iostream>
#include<math.h>
using namespace std;

struct complex
{
float r=0,i=0;
};
enum functions
{
    REAL=1,IMAGINARY,CONJUGATE,ADD,SUBTRACT,MULTIPLY,DIVIDE,MODULUS,EXIT
};
void input(complex &c);
void input(complex &c1,complex &c2);
float Real();
float Imaginary();
complex Conjugate();
complex Add();
complex Subtract();
complex Multiply();
complex Divide();
float Modulus();
void Display(complex c);
void Display(complex c1, complex c2);
int menu();

int main()
{
   for(;;)
  {
   int choice;
    choice=menu();
    complex con, sum, difference, product,quotient;
    float imaginary, real, modulus;
    if( choice == REAL )
    real=Real();
    else if( choice == IMAGINARY )
    imaginary=Imaginary();
    else if( choice == CONJUGATE )
    con = Conjugate();
    else if( choice == ADD )
    sum = Add();
    else if( choice == SUBTRACT )
    difference=Subtract();
    else if( choice == MULTIPLY )
    product=Multiply();
    else if( choice == DIVIDE )
    quotient = Divide();
    else if( choice == MODULUS )
    modulus = Modulus();
    else if( choice == EXIT )
    break;
    else if( choice >EXIT || choice < REAL)
    { 
        cout<<"***************************************************"<<endl;
        cout<<"                 Error "<<endl;
        cout<<"      please enter correct choice from the menu"<<endl;
         cout<<"***************************************************"<<endl;
    }
    else
    {
    break;
    }
  }
    return 0;
}
int menu()
{
    int choice;
    cout<<"Enter -1- to Display Real number"<<endl;
    cout<<"Enter -2- to Display Imaginary number"<<endl;
    cout<<"Enter -3- to Display Conjugate of complex number"<<endl;
    cout<<"Enter -4- to Add two complex numbers"<<endl;
    cout<<"Enter -5- to Subtract two complex numbers"<<endl;
    cout<<"Enter -6- to Multiply two complex numbers"<<endl;
    cout<<"Enter -7- to Divide two complex numbers"<<endl;
    cout<<"Enter -8- to Display Modulus of complex number"<<endl;
    cout<<"Enter -9- to Exit the program"<<endl;
    cin>>choice;
    return choice;
}

//inputs one comlex number
void input( complex &c )
{
    cout<<"********************"<<endl;
    cout<<"Enter complex number"<<endl;
    cout<<"********************"<<endl;
    cout<<"Enter imaginary part"<<endl;
    cin>>c.i;
    cout<<"Enter real part"<<endl;
    cin>>c.r;
 
}



//inputs two complex numbers
void input(complex &c1,complex &c2)
{
    cout<<"********************"<<endl;
    cout<<"First complex number"<<endl;
    cout<<"********************"<<endl;
    cout<<"Enter real part"<<endl;
    cin>>c1.r;
    cout<<"Enter imaginary part"<<endl;
    cin>>c1.i;
    cout<<"*********************"<<endl;
    cout<<"Second complex number"<<endl;
    cout<<"*********************"<<endl;
    cout<<"Enter real part"<<endl;
    cin>>c2.r;
    cout<<"Enter imaginary part"<<endl;
    cin>>c2.i;

}

float Real()
{
    cout<<"***************************************************"<<endl;
    cout<<"                  Real number"<<endl;
    cout<<"***************************************************"<<endl;
    complex c;
    input(c);
    cout<<"*********"<<endl;
    cout<<"real part "<<c.r<<endl;
    return c.r;
    cout<<"***************************************************"<<endl;
    cout<<"***************************************************"<<endl;
}

float Imaginary()
{
     cout<<"***************************************************"<<endl;
    cout<<"                  Imaginary number"<<endl;
    cout<<"***************************************************"<<endl;
    complex c;
    input(c);
    cout<<"**************"<<endl;
    cout<<"imaginary part "<<c.i<<endl;
    return c.i;
    cout<<"***************************************************"<<endl;
    cout<<"***************************************************"<<endl;
}
complex Conjugate()
{   
    cout<<endl;
    cout<<endl;
    cout<<"***************************************************"<<endl;
    cout<<"                    Conjugate     "<<endl;
    cout<<"***************************************************"<<endl;

    complex c;
    input(c);
    complex conjugate;
    conjugate.i=c.i;
    conjugate.r=c.r;
    if(c.i!=0)
    {
        conjugate.i=(conjugate.i * -1);
    }
    cout<<"Conjugate is equal to : "<<endl;
    Display(conjugate);
    return conjugate;
}

complex Add()
{
    cout<<endl;
    cout<<endl;
    cout<<"***************************************************"<<endl;
    cout<<"                     Addition"<<endl;
    cout<<"***************************************************"<<endl;
    complex c1,c2,sum;
    input(c1,c2);
    sum.r=c1.r + c2.r;
    sum.i=c1.i + (c2.i);
    cout<<"Sum is equal to : "<<endl;
    Display(sum);
    cout<<"***************************************************"<<endl;
    cout<<"***************************************************"<<endl;
    return sum;

}

complex Subtract()
{
    cout<<endl;
    cout<<endl;
    cout<<"***************************************************"<<endl;
    cout<<"                      Subtraction"<<endl;
    cout<<"***************************************************"<<endl;
    complex c1,c2,difference;
    input(c1,c2);
    difference.r=c1.r - c2.r;
    difference.i=c1.i - (c2.i);
    cout<<"Difference is equal to : "<<endl;
    Display(difference);
    cout<<"***************************************************"<<endl;
    cout<<"***************************************************"<<endl;
    return difference;
}



complex Multiply()
{
    cout<<endl;
    cout<<endl;
    cout<<"***************************************************"<<endl;
    cout<<"                         Multiplication"<<endl;
    cout<<"***************************************************"<<endl;
    complex c1,c2,product;
    input(c1,c2);
    product.r=( c1.r * c2.r ) - ( c1.i * c2.i );
    product.i=( c1.i * c2.r ) + ( c1.r * c2.i );
    cout<<product.r<<" + "<<product.i<<"i "<<endl;
    cout<<"Product is equal to : "<<endl;
    Display(product);
    cout<<"***************************************************"<<endl;
    cout<<"***************************************************"<<endl;
    return product;
}

//Divides two comlex numbers
complex Divide()
{
    cout<<endl;
    cout<<endl;
    cout<<"***************************************************"<<endl;
    cout<<"                         Division"<<endl;
    cout<<"***************************************************"<<endl;complex c1,c2, Quotient;
    float r,i,square;
    input(c1,c2);
    r = ( c1.r * c2.r ) - ( c1.i * c2.i ) ;
    i = ( c1.i * c2.r ) - ( c1.r * c2.i ) ;
    square = ( c2.r * c2.r ) + ( c2.i * c2.i ) ;
    Quotient.r = r / square ;
    Quotient.i= i / square ;
    cout<<"Quotient is equal to : "<<endl;
    Display(Quotient);   
    cout<<"***************************************************"<<endl;
    cout<<"***************************************************"<<endl;
    return  Quotient;
}


float Modulus()
{

    cout<<"***************************************************"<<endl;
    cout<<"                         Modulus"<<endl;
    cout<<"***************************************************"<<endl;
    complex c,square;
    float modulus,sum;
    input(c);
    square.i =c.i * c.i;    
    square.r =c.r * c.r;    
    sum=square.i + square.r;
    modulus=sqrt(sum);
    cout<<"modulus is equal to "<<modulus<<endl;
    cout<<"***************************************************"<<endl;
    cout<<"***************************************************"<<endl;
    cout<<endl;
    return modulus;
}


//displays one functions
void Display(complex c)
{
    
if(c.r != 0 )
    {
        cout<<c.r;
        if(c.i != 0)
        {
            cout<<" + ( "<< c.i<<" )i";
        }
    }
else if(c.r = 0 && c.i != 0)
    {
        cout<<c.i<<"i";
    }    
    else
    cout<<" 0 + 0i ";
    cout<<endl;
 }