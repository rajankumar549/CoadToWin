#include <iostream>

using namespace std;

int main() {
     int r,l;
     string x;
     bool head;
     bool out[500];
     bool inv[500];
     
     cin>>r;
     
     if(r>=1&&r<=500)
     { for(int k=1;k<=r;k++)
     	{ cin>>l;
     	  cin>>x;
     	  head=true;
		 if(l>=1&&l<=500&&l==x.length())
     	{ inv[k]=false;
     	 for(int i =0;i<l;i++)	
     	 {  
     	 	
     	 	if(x[i]=='H')
     	 	   { if(head)
     	 	      {
     	 	      	head=false;
				  }
				  else{
				  	break;
				  }
     	 	   	
				 }
     	 	else if (x[i]=='T')
     	 	     {
     	 	     	if(head)
     	 	      {
     	 	      	break;
				  }
				  else{
				  	head=true;
				  }
     	 	   	
				 }
			 else if(x[i]=='.')
			   continue;
			 else{
			 	head=false;
			 	break;
			 }
     	 	     	
	     }
			   
     	 out[k]=head;
		}
		else{
	 		out[k]=false;
		 	}
     }
     
     for(int y=1;y<=r;y++)
     {
	 
      if(out[y])
    	cout<<"Valid\n";
	  else
	   	cout<<"Invalid\n";
	 }
}
	 return 0;
}
