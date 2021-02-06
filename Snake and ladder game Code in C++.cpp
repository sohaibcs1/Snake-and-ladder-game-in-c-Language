using namespace std;
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<time.h>
#include<string>
int dice(int);
int position(int);
main()
{
			cout<<"\t\t===============instructions to play game==================\n";
			cout<<"1-press 'r' to roll dice if you press any key then interupt occurs\n  so carefully roll dice \n"<<endl;
			cout<<"2-Press enter to play game\n";
			cout<<"\n";
			cout<<"=========Design By Muhammad Sohaib=====================================\n";
			system("pause");
			system("cls");
			
				
	unsigned int player1=0,player2=0,player3=0,player4=0;
	char roll;
	char n1[30],n2[30],n3[30],n4[30];
	bool end=false;
	unsigned int players,a,counter,stop,b,c,d,p,positions=1,ps1=0,ps2=0,ps3=0,ps4=0,pre_score_p1,pre_score_p2,pre_score_p3,pre_score_p4;
	srand(time(NULL));
	cout<<"\t\t======================================"<<endl;
	cout<<"\n\t\t\tWELCOME TO LUDO SNAKE GAME "<<endl;
	cout<<"\t\t======================================"<<endl;
	cout<<"\n===========>>>>>  Game Include Minimum 2 And Maximum 4 Players <<<<<<<=========="<<endl;
	cout<<"\nEnter The Number Of Players :  ";
	cin>>players;
	
		while(players==1||players>=5)
	{
		cout<<"\tYou Have Entered Invalid Numbers Of Players "<<endl;
		cout<<"\n\tEnter The number between 2-4: "<<endl;
		cin>>players;
	}
	stop=players;
    if(players==2)
    {
    	cout<<"Enter The Name Of First Player: "<<endl;
    	cin>>n1;
    	cout<<"Enter The Name Of Second Player: "<<endl;
    	cin>>n2;

	}
	if(players==3)
    {
    	cout<<"Enter The Name Of First Player: "<<endl;
    	cin>>n1;
    	cout<<"Enter The Name Of Second Player: "<<endl;
    	cin>>n2;
    	cout<<"Enter The Name Of Third Player: "<<endl;
    	cin>>n3;
	}
	if(players==4)
    {
    	cout<<"Enter The Name Of First Player: "<<endl;
    	cin>>n1;
    	cout<<"Enter The Name Of Second Player: "<<endl;
    	cin>>n2;
    	cout<<"Enter The Name Of Third Player: "<<endl;
    	cin>>n3;
    	cout<<"Enter The Name Of Forth Player: "<<endl;
    	cin>>n4;
	}
	
	if(players<=4 && players!=1)
	{
	while(!end)
		{
			counter=1;
			while(counter<=players)
			{
			
			if(counter==1 && player1!=100)
			{
			for(int i=0;i<1;i++)
			{
			cout<<n1<<" Turn Press ( r ) Key To Roll The Dice"<<endl;
			roll=getch();
			if(roll=='r')
			{
				a=1+rand()%6;
				
				cout<<"Your dice turn is "<<a<<endl;
				dice(a);
				pre_score_p1=player1;
				player1=player1+a;
				p=position(player1);
				player1=p;
				if(player1==100)
				{
					cout<<"\n\tPrevious Position of "<<n1<<" is :"<<pre_score_p1<<"\n\tCurrent Positon of "<<n1<<" is : 100 "<<endl;
					cout<<"\nplayer has completed His score.Now  He is out of this Game"<<endl;
					
					ps1=positions;
					positions++;
					stop=stop-1;
					break;
				}
				else if(player1>100)
				{
					player1=pre_score_p1;
				}
				p=0;
				cout<<"\n\tPrevious Positon of "<<n1<<" is :"<<pre_score_p1<<endl;
				cout<<"\n\tCurrent Position Of "<<n1<<" is : "<<player1<<endl;
				
				system("pause");
		        system("cls");
			}
			
			}
		    }
		    counter++;
		    if(stop==1)
			{
				end=true;
				break;
			}
		    if((counter-1)==players)
		    {
		    	break;
			}
			
		    if(counter==2&&player2!=100)
		    {
			for(int i=0;i<1;i++)
			{
				cout<<"\n"<<n2<<" turn press ( r ) Key To Roll: "<<endl;
			    roll=getch();;
			if(roll=='r')
			{
				b=1+rand()%6;
				cout<<"Your Dice Turn is :"<<endl;
				dice(b);
				pre_score_p2=player2;
				player2=player2+b;
				p=position(player2);
				player2=p;
				p=0;
				if(player2==100)
				{
					cout<<"\n\tPrevious Position of "<<n2<<" is :"<<pre_score_p2<<"\n\tCurrent Position Of "<<n2<<" is : 100 "<<endl;
					cout<<"\nplayer has completed His score.Now  He is out of this Game"<<endl;
					
                    ps2=positions;
                    positions++;
                    stop=stop-1;
					break;
				}
				else if(player2>100)
				{
					player2=pre_score_p2;
				}
				cout<<"\n\tPrevious Positon of "<<n2<<" is: "<<pre_score_p2<<endl;
				cout<<"\n\tCurrent Position Of "<<n2<<" is  : "<<player2<<endl;
				
				system("pause");
		        system("cls");
				
		    }
			}
		    }
		    
		    counter++;
		    
		    if(stop==1)
			{
				end=true;
				break;
			}
		    if((counter-1)==players)
		    {
		    	break;
			}
			
			
		    if(counter==3&&player3!=100)
		    {
			for(int i=0;i<1;i++)
			{
				cout<<"\n"<<n3<<" turn press ( r ) Key To Roll: "<<endl;
			    roll=getch();;
			if(roll=='r')
			{
				c=1+rand()%6;
				cout<<"Your Dice Turn is :"<<endl;
				dice(c);
				pre_score_p3=player3;
				player3=player3+c;
				p=position(player3);
				player3=p;
				p=0;
				if(player3==100)
				{
					cout<<"\n\tPrevious Position of "<<n3<<" is :"<<pre_score_p3<<"\n\tCurrent Positon Of "<<n3<<" is : 100 "<<endl;
					cout<<"\nplayer has completed His score.Now  He is out of this Game"<<endl;
					ps3=positions;
					positions++;
					stop=stop-1;
					break;
				}
				else if(player3>100)
				{
					player3=pre_score_p3;
				}
				cout<<"\n\tPrevious Position of "<<n3<<" is: "<<pre_score_p3<<endl;
				cout<<"\n\tCurrent Position Of "<<n3<<" is : "<<player3<<endl;
				
				system("pause");
				system("cls");
		    }
}
            }
            counter++;
            
            if((counter-1)==players)
		    {
		    	break;
			}
			if(stop==1)
			{
				end=true;
				break;
			}
			if(counter==4&&player4!=100)
			{
				for(int i=0;i<1;i++)
			{
				cout<<"\n"<<n4<<" turn press ( r ) Key To Roll: "<<endl;
			    roll=getch();;
			if(roll=='r')
			{
				d=1+rand()%6;
				cout<<"Your Dice Turn is :"<<endl;
				dice(d);
				pre_score_p4=player4;
				player4=player4+d;
				p=position(player4);
				player4=p;
				p=0;
				if(player4==100)
				{
					cout<<"\n\tPrevious Position of "<<n4<<" is :"<<pre_score_p4<<"\n\tCurrent Position Of "<<n4<<" is : 100 "<<endl;
					cout<<"\nPlayer Has Completed His Score.Now  He Is Out Of This Game"<<endl;
					ps4=positions;
					positions++;
					stop=stop-1;
					break;
				}
				else if(player4>100)
				{
					player4=pre_score_p4;
				}
				cout<<"\n\tPrevious Position of "<<n4<<" is: "<<pre_score_p4<<endl;
				cout<<"\n\tCurrent Position Of "<<n4<<" is : "<<player4<<endl;
				counter++;
				system("pause");
				system("cls");
		    }
}
				
			}
			counter++;
			if(stop==1)
			{
				end=true;
				break;
			}
			if((counter-1)==players)
		    {
		    	break;
			}
			
}
}
cout<<"\n\t<======RESULTS=======>\n\n"<<endl;
if(players==2)
    {
    cout<<"\t"<<n1<<" Got :"<<ps1<<" Position"<<endl;
    cout<<"\t"<<n2<<" Got :"<<ps2<<" Position"<<endl;
    cout<<"\t\t============================="<<endl;
	cout<<"\t\t||       GAME OVER!!!      ||"<<endl;
	cout<<"\t\t============================="<<endl;
	}
	if(players==3)
    {
    	cout<<"\t"<<n1<<" Got :"<<ps1<<" Position"<<endl;
    	cout<<"\t"<<n2<<" Got :"<<ps2<<" Position"<<endl;
        cout<<"\t"<<n3<<" Got :"<<ps3<<" Position"<<endl;
    
        cout<<"\t\t============================="<<endl;
        cout<<"\t\t||       GAME OVER!!!      ||"<<endl;
		cout<<"\t\t============================="<<endl;
	}
	if(players==4)
    {
    	cout<<"\t"<<n1<<" Got :"<<ps1<<" Position"<<endl;
    	cout<<"\t"<<n2<<" Got :"<<ps2<<" Position"<<endl;
        cout<<"\t"<<n3<<" Got :"<<ps3<<" Position"<<endl;
        cout<<"\t"<<n4<<" Got :"<<ps4<<" Position"<<endl;
        cout<<"\t\t============================="<<endl;
        cout<<"\t\t||       GAME OVER!!!      ||"<<endl;
        cout<<"\t\t============================="<<endl;
	}

}



getch();

}
int dice(int a)
{
if(a==1)
{
cout << " ----- " << endl;
cout << "|     |" << endl;
cout << "|  O  |" << endl;
cout << "|     |" << endl;
cout <<  " -----" << endl;
}
else if(a==2)
{
cout << " -----" << endl;
cout << "|    O|" << endl;
cout << "|     |" << endl;
cout << "|O    |" << endl;
cout <<  " -----" << endl;
}
else if(a==3)
{
cout << " -----" << endl;
cout << "|    O|" << endl;
cout << "|  O  |" << endl;
cout << "|O    |" << endl;
cout <<  " -----" << endl;
}
else if(a==4)
{
cout << " -----" << endl;
cout << "|O   O|" << endl;
cout << "|     |" << endl;
cout << "|O   O|" << endl;
cout <<  " -----" << endl;
}
else if(a==5)
{
cout << " -----" << endl;
cout << "|O   O|" << endl;
cout << "|  O  |" << endl;
cout << "|O   O|" << endl;
cout <<  " -----" << endl;
}
else if(a==6)
{
cout << " -----" << endl;
cout << "|O   O|" << endl;
cout << "|O   O|" << endl;
cout << "|O   O|" << endl;
cout <<  "-----" << endl;
}

}
int position(int a)
{
	switch(a)
	{
		case 6:
		{
		cout<<"You Got Ladder And promoted to 16\n"<<endl;
		cout<<  "   16   "<<endl;
		cout << "  |__|  "<< endl;
        cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout<<  "  |  |  "<<endl;
		cout<<  "    6   "<<endl;
		return 16;
		break;
    	}
		case 9:
		{
		cout<<"You Got Ladder And promoted to 31\n"<<endl;
		cout<<  "   31   "<<endl;
		cout << "  |__|  "<< endl;
        cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout<<  "  |  |  "<<endl;
		cout<<  "    9   "<<endl;		
		return 31;
		break;
	    }
		case 28:
		{
		cout<<"You Got Ladder And promoted to 84\n"<<endl;
		cout<<  "   84   "<<endl;
		cout << "  |__|  "<< endl;
        cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout<<  "  |  |  "<<endl;
		cout<<  "   28   "<<endl;	
		return 84;
		break;
	    }
		case 19:
		{
		cout<<"You Got Ladder And promoted to 38\n"<<endl;
		cout<<  "   38   "<<endl;
		cout << "  |__|  "<< endl;
        cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout<<  "  |  |  "<<endl;
		cout<<  "   19   "<<endl;	
		return 38;
		break;
	   }
		case 49:
		{
		cout<<"You Got Snake And demoted to 33\n"<<endl;
		cout << "              **    **    **        " << endl;
		cout << "    49 <<*  *   *  *  *  *  *  *>>  33" << endl;
		cout << "          **     **    **    **     " << endl;	
		return 33;
		break;
	    }
		case 43:
		{
		cout<<"You Got Snake And demoted to 23\n"<<endl;
		cout << "              **    **    **        " << endl;
		cout << "    43 <<*  *   *  *  *  *  *  *>>  23" << endl;
		cout << "          **     **    **    **     " << endl;
		return 23;
		break;
	    }
		case 51:
		{
		cout<<"You Got Ladder And promoted to 67\n"<<endl;
		cout<<  "   38   "<<endl;
		cout << "  |__|  "<< endl;
        cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout<<  "  |  |  "<<endl;
		cout<<  "   19   "<<endl;
		return 67;
		break;
	    }
		case 65:
		{
		cout<<"You Got Snake And demoted to 44\n"<<endl;
		cout << "              **    **    **      " << endl;
		cout << "    65 <<*  *   *  *  *  *  *  *>>  44" << endl;
		cout << "          **     **    **    **   " << endl;	
		return 44;
		break;
	    }
		case 80:
		{
		cout<<"You Got Ladder And promoted to 100\n"<<endl;
		cout<<  "  100   "<<endl;
		cout << "  |__|  "<< endl;
        cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout<<  "  |  |  "<<endl;
		cout<<  "   80   "<<endl;	
		return 100;
		break;
	    }
		case 88:
	   {
	   	cout<<"You Got Snake And demoted to 53\n"<<endl;
	   	cout << "              **    **    **      " << endl;
		cout << "   88 << *  *   *  *  *  *  *  *>>  53" << endl;
		cout << "          **     **    **    **   " << endl;
		return 53;
		break;
	   }
		case 92:
		{
		cout<<"You Got Snake And demoted to 71\n"<<endl;
		cout << "              **    **    **      " << endl;
		cout << "    92 <<*  *   *  *  *  *  *  * >> 71" << endl;
		cout << "          **     **    **    **   " << endl;	
		return 71;
		break;
	    }
		case 99:
		{
		cout<<"You Got Snake And demoted to 35\n"<<endl;
		cout << "              **    **    **      " << endl;
		cout << "    99 <<*  *   *  *  *  *  *  *>>  35" << endl;
		cout << "          **     **    **    **   " << endl;	
		return 35;
		break;
	     }
		case 72:
		{
		cout<<"You Got Ladder And promoted to 93\n"<<endl;
		cout<<  "   93   "<<endl;
		cout << "  |__|  "<< endl;
        cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout<<  "  |  |  "<<endl;
		cout<<"     72   "<<endl;	
		return 93;
		break;
	    }
		case 21:
		{
		cout<<"You Got Ladder And promoted to 79\n"<<endl;
		cout<<  "   79   "<<endl;
		cout << "  |__|  "<< endl;
        cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout << "  |__|  "<< endl;
		cout<<  "  |  |  "<<endl;
		cout<<  "   21   "<<endl;	
		return 79;
		break;
	    }
		default:
		{
		 return a;
	    }
		
		
	}
	

}




