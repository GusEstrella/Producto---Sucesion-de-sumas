#include <iostream>

int main() 
{	
	int a,b,p,i;
	
	
	std::cout<< "ingrese a:\n";
	std::cin>>a;
	std::cout<< "ingrese b:\n";
	std::cin>>b;
		
	if (a==0 ) {	 std:: cout<< "El producto es igual a: 0 ";    	}
	 
	else if (b==0) {	 std:: cout<< "El producto es igual a: 0 ";    	}
	
		else  	{p=0;	i=0;
					
			 		 do
					{
 					p=p+a;
					i=i+1;
		
  					} while (i != b);  
	
		   
    			std::cout<<"el producto es:";
				std::cout<<p;
		}
}
	

