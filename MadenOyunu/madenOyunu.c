#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <unistd.h>

int arraybass(int matris[12][12])
{
	int v,b;
	for(v = 1; v < 11 ;v++ )
	{
		printf("\n");
		for (b = 1; b < 11; b++)
		{	
			printf("%d ",matris[v][b]);
		}
	}	
	printf("\n\n");
}

int main(){
	int i=3,j=5;
	int c;
	char w,a,s,d;
	int can=3;
	int t=0;
	int k,l;
	int d1;
	int m;
	int dizii[5];
	int dizij[5];
	int rasti,rastj,rastm;
	int goster[12][12]={ {9,9,9,9,9,9,9,9,9,9,9,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,1,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
 	                    {9,9,9,9,9,9,9,9,9,9,9,9}	};
 	                                      
	int array[12][12]={  {9,9,9,9,9,9,9,9,9,9,9,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,1,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
	                    {9,0,0,0,0,0,0,0,0,0,0,9},
 	                    {9,9,9,9,9,9,9,9,9,9,9,9}	};
 	                    
	srand(time(NULL));
	system("color 6");
	for(d1=0,m=0;d1<5;d1++,m++){
		falsee:
		rasti =  ((rand()%10) + 1);
		rastj =  ((rand()%10) + 1);
		rastm =  ((rand()%8) + 1);
		
			if(rastm==1 && array[rasti][rastj]==0 && array[rasti-1][rastj]==0){
				array[rasti-1][rastj]=4;
			    array[rasti][rastj]=3;
			    dizii[m]=rasti;
			    dizij[m]=rastj;			    
			}
			else if(rastm==2 && array[rasti][rastj]==0 && array[rasti][rastj-1]==0){
				array[rasti][rastj-1]=4;
				array[rasti][rastj]=3;
			    dizii[m]=rasti;
			    dizij[m]=rastj;		    
			}	
			else if( rastm==3 && array[rasti][rastj]==0 && array[rasti][rastj+1]==0){
				array[rasti][rastj+1]=4;
				array[rasti][rastj]=3;
			    dizii[m]=rasti;
			    dizij[m]=rastj;				
			}						
			else if(rastm==4 && array[rasti][rastj]==0 && array[rasti+1][rastj]==0){
				array[rasti+1][rastj]=4;
				array[rasti][rastj]=3;
			    dizii[m]=rasti;
			    dizij[m]=rastj;		    
			}	
			else if(rastm==5 && array[rasti][rastj]==0 &&  array[rasti-1][rastj-1]==0){
				array[rasti-1][rastj-1]=4;
				array[rasti][rastj]=3;
			    dizii[m]=rasti;
			    dizij[m]=rastj;	    
			}
			else if(rastm==6 && array[rasti][rastj]==0 && array[rasti-1][rastj+1]==0){
				array[rasti-1][rastj+1]=4;
				array[rasti][rastj]=3;
			    dizii[m]=rasti;
			    dizij[m]=rastj;				
			}	
			else if(rastm==7 && array[rasti][rastj]==0 && array[rasti+1][rastj-1]==0){
				array[rasti+1][rastj-1]=4;
				array[rasti][rastj]=3;
			    dizii[m]=rasti;
			    dizij[m]=rastj;		    
			}	
			else if(rastm==8 && array[rasti][rastj]==0 &&  array[rasti+1][rastj+1]==0){
				array[rasti+1][rastj+1]=4;
				array[rasti][rastj]=3;
			    dizii[m]=rasti;
			    dizij[m]=rastj;		    
			}																																
			else{
				goto falsee;
			}
	}
	
	printf("oyuna hosgeldiniz, oyunda 5 adet elmasimiz var ve her elmasin etrafinda bir adet muhafizi vardir\nmuhafiza yakalanirsaniz caniniz azalir ve can hakkiniz 3\ntum elmaslari toplamaya calisin\nw:uste git  a:sola git  s:alta git   d:saga git");
	
	arraybass(goster);
	printf("\n");
	printf("toplanan elmas: %d  can: %d\n",t,can);
	printf("1.elmasa uzakliginiz: %d\n",abs(dizii[0]-i)+abs(dizij[0]-j));
	printf("2.elmasa uzakliginiz: %d\n",abs(dizii[1]-i)+abs(dizij[1]-j));
	printf("3.elmasa uzakliginiz: %d\n",abs(dizii[2]-i)+abs(dizij[2]-j));
	printf("4.elmasa uzakliginiz: %d\n",abs(dizii[3]-i)+abs(dizij[3]-j));
	printf("5.elmasa uzakliginiz: %d\n",abs(dizii[4]-i)+abs(dizij[4]-j));
    
	for(t,can;t!=5 && can!=0;t,can){
		
		c = getche();
		printf("\n");
		switch(c){
			case 'd':
				if(array[i][j+1]==9){
					printf("buraya ilerleyemezsiniz\n");
					sleep(1);
				
				}
				else if(array[i][j+1]==3){
					t++;
					goster[i][j]=0;
				    goster[i][j+1]=1;
					array[i][j]=0;
					array[i][j+1]=1;
					printf("elmas topladiniz\n");	
					j++;
					sleep(1);	
				}
				else if(array[i][j+1]==4){
					can--;
					printf("muhafiza yakalandiniz\n");
					goster[i][j]=0;
					array[i][j]=0;
					i=3;
					j=5;
					goster[i][j]=1;
					array[i][j]=1;
					sleep(1);
				}
				else{
					goster[i][j]=0;
					goster[i][j+1]=1;
					array[i][j]=0;
					array[i][j+1]=1;
					j++;
				}
					           
				 system("cls");
				arraybass(goster);
				break;
			
			
			case 'a':
				if(array[i][j-1]==9){
					printf("buraya ilerleyemezsiniz\n");
					sleep(1);
				}
				else if(array[i][j-1]==3){
					goster[i][j]=0;
					goster[i][j-1]=1;
					array[i][j]=0;
					array[i][j-1]=1;
					t++;
					printf("elmas topladiniz\n");
					j--;
					sleep(1);	
				}
				else if(array[i][j-1]==4){
					can--;
					goster[i][j]=0;
					array[i][j]=0;
					i=3;
					j=5;
					goster[i][j]=1;
					array[i][j]=1;
					printf("muhafiza yakalandiniz\n");
					sleep(1);
				}
				else{
					goster[i][j]=0;
					goster[i][j-1]=1;
					array[i][j]=0;
					array[i][j-1]=1;
					j--;
				}
				system("cls");
				arraybass(goster);
				break;			
			
			case 'w':
				if(array[i-1][j]==9){
					printf("buraya ilerleyemezsiniz\n");
					sleep(1);
				}
				else if(array[i-1][j]==3){
					goster[i][j]=0;
					goster[i-1][j]=1;
					array[i][j]=0;
					array[i-1][j]=1;
					t++;
					i--;
					printf("elmas topladiniz\n");	
					sleep(1);
				}
				else if(array[i-1][j]==4){
					can--;
					goster[i][j]=0;
					array[i][j]=0;
					i=3;
					j=5;
					goster[i][j]=1;
					array[i][j]=1;
					printf("muhafiza yakalandiniz\n");
					sleep(1);
				}
				else{
					goster[i][j]=0;
					goster[i-1][j]=1;
					array[i][j]=0;
					array[i-1][j]=1;
					i--;
				}
				system("cls");
				arraybass(goster);
				break;						
		
			case 's':
				if(array[i+1][j]==9){
					printf("buraya ilerleyemezsiniz\n");
					sleep(1);
				}
				else if(array[i+1][j]==3){
					goster[i][j]=0;
					goster[i+1][j]=1;
					array[i][j]=0;
					array[i+1][j]=1;
					t++;
					i++;
					printf("elmas topladiniz\n");
					sleep(1);	
				}
				else if(array[i+1][j]==4){
					can--;
					goster[i][j]=0;
					array[i][j]=0;
					i=3;
					j=5;
					goster[i][j]=1;
					array[i][j]=1;
					printf("muhafiza yakalandiniz\n");
					sleep(1);
				}
				else{
					goster[i][j]=0;
					goster[i+1][j]=1;
					array[i][j]=0;
					array[i+1][j]=1;
					i++;
				}
			    system("cls");
			    arraybass(goster);
				break;	
									
		        default:
		        printf("bilinmeyen islem");	
		        break;						
		}
		
		printf("\n");
		if(can==0 || t==5){

			goto kir;
		}
		else{
			printf("toplanan elmas: %d  can: %d\n",t,can);
			if(array[(dizii[0])][(dizij[0])]==3){
				printf("1.elmasa uzakliginiz: %d\n",abs(dizii[0]-i)+abs(dizij[0]-j));
			}
			if(array[(dizii[1])][(dizij[1])]==3){
				printf("2.elmasa uzakliginiz: %d\n",abs(dizii[1]-i)+abs(dizij[1]-j));
			}
			if(array[(dizii[2])][(dizij[2])]==3){
				printf("3.elmasa uzakliginiz: %d\n",abs(dizii[2]-i)+abs(dizij[2]-j));
			}
			if(array[(dizii[3])][(dizij[3])]==3){
				printf("4.elmasa uzakliginiz: %d\n",abs(dizii[3]-i)+abs(dizij[3]-j));
			}
			if(array[(dizii[4])][(dizij[4])]==3){
				printf("5.elmasa uzakliginiz: %d\n",abs(dizii[4]-i)+abs(dizij[4]-j));
			}
		
		}
	
	}
	kir:
	if(t==5){
		printf("tebrikler ederim, oyunu kazndiniz");
	}
	if(can==0){
		printf("-----malesef oyunu kaybettiniz-----");
	}
	
	return 0;
}
