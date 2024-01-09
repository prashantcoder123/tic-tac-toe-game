#include<iostream>
using namespace std;
 char board[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
  void displayBoard();
  int checkwin();
  char sign ='X';
int main()
{
	int player=1,option,turn;
	
	do{
		displayBoard();
		
		if(player % 2==1)
		{
			player=1;
		}
        else
        {
        	player=2;
		}
      cout<<"player"<<player<< "  Enter your turn: "<<endl;
    
	   if(player==1)
       {
       	 sign='X';
       	cin>>option;
	   }
	   if(player==2)
	   {
	   	 sign='O';
	   	cin>>option;
	   }
        if(option==1 && board[0][0]=='1')
        {
		
		board[0][0]=sign;
        }
		else if(option==2 && board[0][1]=='2')
       {
	   
	    board[0][1]=sign;
       }
       else if(option==3 && board[0][2]=='3')
       {
	   
	    board[0][2]=sign;
       }
	   else if(option==4 && board[1][0]=='4')
       
	   {
		 board[1][0]=sign;
       }
		else if(option==5 && board[1][1]=='5')
       {
	   
	    board[1][1]=sign;
       }
       else if(option==6 && board[1][2]=='6')
       {
	   
	    board[1][2]=sign;
       }
	   else if(option==7 && board[2][0]=='7')
        {
		
		board[2][0]=sign;
        }
		else if(option==8 && board[2][1]=='8')
        
		{
		board[2][1]=sign;
        }
		else if(option==9 && board[2][2]=='9')
       {
	   
	    board[2][2]=sign;
        }
		else{
        	 cout<<"invalid"<<endl;
        	player--;
		} 
  
        turn=checkwin();
        player++;
    }
  while(turn==-1);
  displayBoard();
  if(turn==1)
  {
    cout<<"player "<< --player<<" won the game "<<endl;
  }
  else
  {
  	cout<<"game draw"<<endl;
  }
   return 0;
}
 
 int checkwin()
 {
 	if(board[0][0]==board[0][1]&&board[0][1]==board[0][2] ||board[1][0]==board[1][1]&&board[1][1]==board[1][2] ||board[2][0]==board[2][1]&&board[2][1]==board[2][2] ||board[0][0]==board[1][0]&&board[1][0]==board[2][0] ||board[0][1]==board[1][1]&&board [1][1]==board[2][1] ||board[0][2]==board[1][2]&&board[1][2]==board[2][2] ||board[0][0]==board[1][1]&&board[1][1]==board[2][2] ||board[0][2]==board[1][1]&&board[1][1]==board[2][0])
    {
	
	return true;
    }
    else if(board[0][0]!='1'&& board[0][1]!='2'&& board[0][2]!='3'&& board[1][0]!='4'&& board[1][1]!='5'&& board[1][2]!='6'&& board[2][0]!='7'&& board[2][1]!='8'&& board[2][2]!='9')
    {
	
	return false;
    }
    else
    {
    	return -1;
	}
 
 
  }    
void displayBoard()
{
    system("cls");
    
    cout<<"  WELCOME TO TIC TAC TOE  "<<endl;
    cout<<"  **********************  "<<endl;
    cout<<"    "<<"  |   "<<"  |   "<<endl;
    cout<<"    "<<board[0][0]<<" |  "<<board[0][1]<<"  |  "<<board[0][2]<<endl;
     cout<<" ____________________ "<<endl;
     cout<<"    "<<"  |   "<<"  |   "<<endl;
    cout<<"    "<<board[1][0]<<" |  "<<board[1][1]<<"  |  "<<board[1][2]<<endl;
     cout<<" ____________________ "<<endl;
     cout<<"    "<<"  |   "<<"  |   "<<endl;
    cout<<"    "<<board[2][0]<<" |  "<<board [2][1]<<"  |  "<<board[2][2]<<endl;
    }