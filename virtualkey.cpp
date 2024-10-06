#include<iostream.h>
#include<conio.h>
class a
{
public:
int b,c;
 void sum()
{
cout<<"enter the two numbers\n";
cin>>b>>c;
cout<<"\nsum="<<b+c;
}
};

 class b:public virtual a
{
int s;
virtual void show()
{
cout<<"\nclass b";
}
};

  class c:public virtual a
{
int q;
virtual void show()
{
cout<<"\nclass c";
}
};

 class d: public b, public c
{
public:
int t;
/*void show()
{
cout<<"\nclass b";
} */
};
int main()
{
clrscr();
d a;
a.show();
getch();
return 0;
}
