#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void inputArray();                                                  //for input numbers
void displayArray(float y[]);                                      
void sortArray(float z[]);                                           //for sort categorized array and display it

float array[12];//for input numbers
int c[9];//for store the number of values in ranges
int m;//find the max of c array to make multidimensial array

void main()
{
	 //input and display selected numbers
	inputArray();
	printf("Input the flaoting values\n");
	displayArray(array); 
	
	 
	printf("\n orderded floating values\n");                                //display the orderded set of numbers
	sortArray(array);
	
	
	
}

void inputArray()
{
	srand(time(NULL));
	int i;
	for(i=0;i<12;i++)
	{
		array[i]=(float)rand()/RAND_MAX;
		
	}
}

void displayArray(float y[])
{
	int i;
	for(i=0;i<12;i++)
	{
		printf("%f ",y[i]);
	}
}


void sortArray(float z[])
{
	
	int i;
	
	//finding frequncies in ranges
	
	for(i=0;i<12;i++)
	{
		if(z[i]<0.2)c[0]++;
		else if(z[i]<0.3)c[1]++;
		else if(z[i]<0.4)c[2]++;
		else if(z[i]<0.5)c[3]++;
		else if(z[i]<0.6)c[4]++;
		else if(z[i]<0.7)c[5]++;
		else if(z[i]<0.8)c[6]++;
		else if(z[i]<0.9)c[7]++;
		else if(z[i]<1)c[8]++;
		
	}
	
	//finding the most frequency to create arrayNxt(multidimensial array)
	
	m=c[0];
	for(i=1;i<9;i++)
	{
		if(c[i]>m)m=c[i];
	}
	
	 float x[9][m];
	
	// filling the arrayNxt by categorizing array z
	
	
	int d1=0; int d2=0; int d3=0;int d4=0; int d5=0; int d6=0;int d7=0; int d8=0; int d9=0;
	for(i=0;i<12;i++)
	{
		if	   (z[i]<0.2){ x[1][d1]=z[i];d1++;}
		else if(z[i]<0.3){ x[2][d2]=z[i];d2++;}
		else if(z[i]<0.4){ x[3][d3]=z[i];d3++;}
		else if(z[i]<0.5){ x[4][d4]=z[i];d4++;}
		else if(z[i]<0.6){ x[5][d5]=z[i];d5++;}
		else if(z[i]<0.7){ x[6][d6]=z[i];d6++;}
		else if(z[i]<0.8){ x[7][d7]=z[i];d7++;}
		else if(z[i]<0.9){ x[8][d8]=z[i];d8++;}
		else if(z[i]<1)	 {x[9][d9]=z[i];d9++;}
		
	}
	
		printf("\n");
		
	//start sorting the array
	int j;	
	int k;
	for(k=1;k<10;k++)
	{
		
		float temp;
		switch(k)
		{
			case 1 :
		
			for(i=0;i<(c[0]-1);i++)
			{
				
				for(j=(i+1);j<c[0];j++)
				{
					
					if(x[1][i]> x[1][j])
					{
						temp=x[1][i];
						x[1][i]=x[1][j];
						x[1][j]=temp;
					}
				}				
			}
			break;
		 //2
			case 2 :
		
			for(i=0;i<(c[1]-1);i++)
			{
				
				for(j=(i+1);j<c[1];j++)
				{
					
					if(x[2][i]> x[2][j])
					{
						temp=x[2][i];
						x[2][i]=x[2][j];
						x[2][j]=temp;
					}
				}				
			}
			break;
		 //3
			case 3 :
		
			for(i=0;i<(c[2]-1);i++)
			{
				
				for(j=(i+1);j<c[2];j++)
				{
					
					if(x[3][i]> x[3][j])
					{
						temp=x[3][i];
						x[3][i]=x[3][j];
						x[3][j]=temp;
					}
				}				
			}
			break;
		 //4
			case 4 :
		
			for(i=0;i<(c[3]-1);i++)
			{
				
				for(j=(i+1);j<c[3];j++)
				{
					
					if(x[4][i]> x[4][j])
					{
						temp=x[4][i];
						x[4][i]=x[4][j];
						x[4][j]=temp;
					}
				}				
			}
			break;
		 //5
			case 5 :
		
			for(i=0;i<(c[4]-1);i++)
			{
				
				for(j=(i+1);j<c[4];j++)
				{
					
					if(x[5][i]> x[5][j])
					{
						temp=x[5][i];
						x[5][i]=x[5][j];
						x[5][j]=temp;
					}
				}				
			}
			break;
		 //6
			case 6 :
		
			for(i=0;i<(c[5]-1);i++)
			{
				
				for(j=(i+1);j<c[5];j++)
				{
					
					if(x[6][i]> x[6][j])
					{
						temp=x[6][i];
						x[6][i]=x[6][j];
						x[6][j]=temp;
					}
				}				
			}
			break;
		 
		 //7
			case 7 :
			
			for(i=0;i<(c[6]-1);i++)
			{
				
				for(j=(i+1);j<c[6];j++)
				{
					
					if(x[8][i]> x[8][j])
					{
						temp=x[8][i];
						x[8][i]=x[8][j];
						x[8][j]=temp;
					}
				}				
			}
			break;
		 //8
			case 8 :
		
			for(i=0;i<(c[7]-1);i++)
			{
				
				for(j=(i+1);j<c[7];j++)
				{
					
					if(x[9][i]> x[9][j])
					{
						temp=x[9][i];
						x[9][i]=x[9][j];
						x[9][j]=temp;
					}
				}				
			}
			break;
		 //9
			case 9 :
		
			for(i=0;i<c[8];i++)
			{
				for(j=1;j<c[8];j++)
				{
					if(x[9][i]<= x[9][j])
					{
						temp=x[9][i];
						x[9][i]=x[9][j];
						x[9][j]=temp;
					}
				}				
			}
			break;
			default : printf("end");
		}
	}
	
	//start printing sorted array
		
	
	for(i=1;i<10;i++)
	{
		switch(i)
		{
			case 1 : 
			 for(j=0;j<c[0];j++)
			 {
				 printf("%f,",x[i][j]);
			 }
			 break;
			 case 2 : 
			 for(j=0;j<c[1];j++)
			 {
				 printf("%f,",x[i][j]);
			 }
			 break;
			 
			 case 3 : 
			 for(j=0;j<c[2];j++)
			 {
				 printf("%f,",x[i][j]);
			 }
			 break;
			 
			 case 4 : 
			 for(j=0;j<c[3];j++)
			 {
				 printf("%f,",x[i][j]);
			 }
			 break;
			 
			 case 5 : 
			 for(j=0;j<c[4];j++)
			 {
				 printf("%f,",x[i][j]);
			 }
			 break;
			 
			 case 6 : 
			 for(j=0;j<c[5];j++)
			 {
				 printf("%f,",x[i][j]);
			 }
			 break;
			 
			 case 7 : 
			 for(j=0;j<c[6];j++)
			 {
				 printf("%f,",x[i][j]);
			 }
			 break;
			 
			 case 8 : 
			 for(j=0;j<c[7];j++)
			 {
				 printf("%f,",x[i][j]);
			 }
			 break;
			 
			 case 9 : 
			 for(j=0;j<c[8];j++)
			 {
				 printf("%f,",x[i][j]);
			 }
			 break;
			 
			 default : printf("end");
		}
		
	}
	
	
}

/*
changes 
	meeketh oya comments wenas krnn
	i,j,... ee wage variable names change krnn.
	z[] eke z wenuwat wena ekk daann
	d1,d2.. tika wena mnw hari daann
	pluwn tram program eke nam anam manm wnas krl ghann.
	
	meeka tikk digai ... man ghapu program ek dik krla meek tyenne ..
	meeken output ek enw...run krl blann... aulk aawoth mata kynn...
*/
	
	
	









