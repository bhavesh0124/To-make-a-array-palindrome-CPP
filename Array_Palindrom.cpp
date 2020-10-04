#include <iostream>
using namespace std;

int main() {
    int a[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	}
	for(int i=0,j=n-1;i<=j;)
	{
	       if(a[i]==a[j])
    	    {
    	        i++;
    	        j--;
    	         
    	    }
    	    else if(a[i]>a[j])
    	    {
    	        
    	        
    	        a[j]+=a[j-1];
    	        
    	        
    	        for(int k=j-1;k<n;k++)
    	        {    
    	           a[k]=a[k+1];
    	        }
    	        
    	        n--;
    	        j--;
    
               
    	    }
    	    else if(a[i]<a[j])
    	    {
    	       if(i==j-1)
    	        {a[i]=a[i+1];
    	         break;
    	        }
    	        
    	  
    	       else{
    	       a[i]+=a[i+1];
    	       
    	       for(int k=i+1;k<n;k++)
    	       {    
    	           a[k]=a[k+1];
    	       }}
    	        n--;
    	        j--;
    	  
    	    }
	    
	    
	    
	for(int w=0;w<n;w++)
	{
	    cout<<a[w]<<" ";
	}
	cout<<"\n";
	}

	
	return 0;
}

