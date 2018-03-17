#include "SM59R16G6.h"
void delay(int);
	 void abc(void);
	 void key1(void);
	  int k=0,s=0;
		char LED [2]={0xc6,0x39};
		char LED1 [3]={0x0b,0x54,0xf4};
		int key;
main()
{
	
	 while(1)
	 {		 
		 key1();
		 abc();
   }
}

void abc(void)
{
	int i;
	if(k==0)
	
	{
								P1=~LED[s];
									delay(300); //¬ù0.45¬í
							    s++;	
									if(s>1)
									{
										s=0;
									}		
	}
	else if(k==1)
	{
						P1=~LED1[s];
									delay(300); //¬ù0.45¬í
							    s++;
							if(s>2)
									{
										s=0;
									}
					
	}
	
	else if(k==2)
	{
				k=0;					
	}
}

void key1(void)
{
	if (P2_0 == 0)
			{
				if(key==1)
					{ k++;
							s=0;
							key=key+1;			
					}
				else if (key==2)
					{;}						
				else if(key!=1&&key!=2)
					{
						key++;
					}							
									}
		 else if(P2_0 == 1)
					{
					key=0;
					}
}

void delay(int count)
{
	int i,j;
	for(i=0; i<count; i++)
		{
			for(j=0; j<count; j++);
		}
}

		