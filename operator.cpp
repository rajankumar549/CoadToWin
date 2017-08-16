#include<bits/stdc++.h>
#include<string>

using namespace std;

class box {
 
 
 public:
      void seta(int a){
      	this->a=a;
	  }
	  void setb(int b){
      	this->b=b;
	  }
	  
	  int product()
	  {
	  	return this->a*this->b;
	  }
	  void show()
	  {
	  	cout<<this->a<<"  "<<this->b<<"\n";
	  }
	 box operator +(const box &b)
	 {
	 	box t;
	 	t.a=this->a+b.b;
	 	t.b=this->b+b.b;
	 	return t;
	 }
      
	  
	  
	  	
	
private:
   int a;
   int b;	
	
};



int operator +(const int &b)
	 {
	 	 this.
	 	return t;
	 }

main()
{
	 box a1,b1,c1;
	  a1.seta(20);
	  a1.setb(10);
	b1.seta(20);
	  b1.setb(10);
	  cout<<a1.product()<<endl;
	  b1.show();
	  c1=b1+a1;
	  c1.show();
	  
	  
}
