#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	
	int nota = 0;
	
	cout<<"ingrese la nota que obtuvo:";
	cin>>nota;
	
	if (nota > 100 || nota < 0){
		cout<<"ingrese una nota entre 0 - 100";
		return 0;
	}
	
	if (nota >= 96 && nota <= 100){
		cout<<"obtuviste una A++";
	    }
	   if (nota >= 94 && nota <= 95){
		cout <<"obtuviste una A+";
	    }
	    if (nota >= 86 && nota <= 90){
		cout<<"obtuviste una A";
		}
	     if (nota >= 81 && nota <= 85){
		 cout<<"obtuviste una A-";
		 }
	      if (nota >= 76 && nota <= 80){
		  cout<<"obtuviste una B+";
		  }
	       if (nota >= 71 && nota <= 75){
		   cout<<"obtuviste una B";
		   }
	        if (nota >= 66 && nota <= 70){
		    cout<<"obtuviste una B-";
			}
	         if (nota >= 61 && nota <= 65){
		     cout<<"obtuviste una C+";
			 }
	          if (nota >= 56 && nota <= 60){
		      cout<<"obtuviste una C";
			  }
	           if (nota >= 51 && nota <= 55){
		       cout<<"obtuviste una C-";
			   }
	            if (nota >= 46 && nota <= 50){
		        cout<<"obtuviste una D+";
				}
	             if (nota >= 41 && nota <= 45){
		         cout<<"obtuviste una D";
				 }
	              if (nota >= 36 && nota <= 40){
		          cout<<"obtuviste una D-";
				  }
	               if (nota >= 31 && nota <= 35){
		           cout<<"obtuviste una E+";
				   }
	                if (nota >= 26 && nota <= 30){
		            cout<<"obtuviste una E";
					}
	                 if (nota >= 21 && nota <= 25){
		             cout<<"obtuviste una E-";
					 }
	                  if (nota >= 16 && nota <= 20){
		              cout<<"obtuviste una F+";
					  }
	                   if (nota >= 11 && nota <= 15){
		               cout<<"obtuviste una F";
					   }
	                    if (nota >= 6 && nota <= 10){
		                cout<<"obtuviste una F";
						}
	                     if (nota >= 2 && nota <= 5){
		                 cout<<"obtuviste una F-";
						 }
		                   if (nota >= 0  && nota <= 1){
		                   cout<<"obtuviste una F--";
						   }
	
	
	return 0;
}
