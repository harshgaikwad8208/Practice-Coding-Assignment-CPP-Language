#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<iostream>
#include<iomanip>
using namespace std;
struct Player
{
    int jn;
    char name[100];
    int matches_played;
    int runs;
    int wickets_taken;

    Player()
    {
        this->jn=0;
        strcpy(this->name,"Not Given");
        this->matches_played=0;
        this->runs=0;
        this->wickets_taken=0;
    }
    Player(int jn,char* name,int matches_played,int runs,int wickets_taken)
    {
        this->jn=jn;
        strcpy(this->name,name);
        this->matches_played=matches_played;
        this->runs=runs;
        this->wickets_taken=wickets_taken;
    }

    void setJn(int jn)
    {
        this->jn=jn;
    }
    void setName(char* name)
    {
        strcpy(this->name,name);
    }
    void setMatches_Played(int matches_played)
    {
        this->matches_played=matches_played;
    }
    void setRuns(int runs)
    {
        this->runs=runs;
    }
    void setWickets_Taken(int wickets_taken)
    {
        this->wickets_taken=wickets_taken;
    }

    int getJn()
    {
        return this->jn;
    }
    char* getName()
    {
        return this->name;
    }
    int getMatches_Played()
    {
        return this->matches_played=matches_played;
    }
    int getRuns()
    {
        return this->runs=runs;
    }
    int getWickets_Taken()
    {
        return this->wickets_taken=wickets_taken;
    }
    void display(Player* players,int size)
    {
        cout<<"Player Information\n";
        cout<<"+--------------------------------------------------------------------------+\n";
        cout<<"| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n";
        cout<<"+--------------------------------------------------------------------------+\n";

        for (int i=0;i<size;++i)
        {
        
        cout<< "| "<< setw(13)<<players[i].getJn()<<"|"<<setw(13)<<players[i].getName()<<"|"<<setw(12)<<players[i].getMatches_Played()<<"|"<<setw(10)<<players[i].getRuns()<<" | "<<setw(10)<<players[i].getWickets_Taken()<<"|\n";

        }
    }

   
};

void addPlayer(struct Player*players, int* sizeptr)
{
    if (*sizeptr<100) 
    {
        Player newPlayer;
        cout<<"Enter Jersey Number: ";
        cin>>newPlayer.jn;
        cout<<"Enter Player Name: ";
        cin.ignore();
        cin.getline(newPlayer.name, sizeof(newPlayer.name));
        cout<<"Enter Runs: ";
        cin>>newPlayer.runs;
        cout<<"Enter Wickets: ";
        cin>>newPlayer.wickets_taken;
        cout<<"Enter Matches Played: ";
        cin>>newPlayer.matches_played;

        players[*sizeptr]=newPlayer;
        (*sizeptr)++;
        cout<<"Player added successfully!\n";
    } 
    else 
    {
        cout<<"Maximum player limit reached!\n";
    }
}

void removeplayer(Player* players,int* size)
{
    int found=0;
    char name[20];
    cout<<"Enter the Name of the player you want to remove: ";
    cin.ignore();
    cin.getline(name, sizeof(name));
    for (int i=0;i<*size;i++) 
    {
        if(strcmp(name, players[i].getName())== 0) 
        {
            for (int j=i;j<((*size)-1);j++) 
            {
                players[j]=players[j+1];
            }
            (*size)--; 
            found =1;
            break;
        }
    }        
    if(found) 
    {
        cout<<"Player"<<name<<" has been removed successfully.\n";
    }
    else 
    {
        cout<<"Player"<<name<<"not found. No player removed.\n";
    }
}

void searchPlayer(Player* players, int size, int jn)
{
    int choice;
    cout<<"Choices 1: Name\n2: Jersey Number\n";
    cout<<"\nEnter your Choice: ";
    cin>>choice;

    if (choice==1)
    {
        char name[100];
        cout<<"Enter the name of player that you want to search his record: ";
        cin.ignore();
        cin.getline(name, sizeof(name));
        int flag = 0;
        for(int i = 0;i<size;i++)
        {
            if (strcmp(name, players[i].getName()) == 0)
            {
                cout<<"Player Information\n";
                cout<< "+--------------------------------------------------------------------------+\n";
                cout<< "| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n";
                cout<< "+--------------------------------------------------------------------------+\n";

                cout<< "| "<<setw(13)<<players[i].getJn()<<" | "<<setw(13)<<players[i].getName()<<" | "<<setw(12)<<players[i].getMatches_Played()<<" | "<<setw(10)<<players[i].getRuns()<<" | " <<setw(10)<<players[i].getWickets_Taken()<<" |\n";

                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout<<"There is no record for this "<<name<<" name";
        }
    }
    else if (choice==2)
    {
        int jersyno;
        cout<<"Enter the jersey number of the player you want to search for: ";
        cin>>jersyno;
        int flag = 0;

        for (int i = 0; i < size; i++)
        {
            if (jersyno == players[i].getJn())
            {
                cout << "Player Information\n";
                cout << "+--------------------------------------------------------------------------+\n";
                cout << "| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n";
                cout << "+--------------------------------------------------------------------------+\n";

                cout << "| " << setw(13) << players[i].getJn() << " | " << setw(13) << players[i].getName() << " | " << setw(12) << players[i].getMatches_Played() << " | " << setw(10) << players[i].getRuns() << " | " << setw(10) << players[i].getWickets_Taken() << " |\n";
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout << "The Record is Not Found";
        }
    }
}
void update(Player* players, int size)
{
    char uname[20];
    cout << "Enter the name of the player you want to update: ";
    cin.ignore();
    cin.getline(uname, sizeof(uname));

    int found = 0;

    for (int i = 0; i < size; i++)
    {
        if (strcmp(uname, players[i].name) == 0)
        {
            cout << "Enter the updated runs: ";
            cin >> players[i].runs;

            cout << "Enter the updated wickets: ";
            cin >> players[i].wickets_taken;

            cout << "Enter updated Total Matches Played by Player: ";
            cin >> players[i].matches_played;

            cout << "Player record updated successfully.\n";
            found = 1;
            break;
        }
    }

    if (!found)
    {
        cout << "Player with the name " << uname << " was not found.\n";
    }
}
void displayTopPlayers(Player* players, int size) 
{
    cout<<"1) Runs\n2) Witckets\n\n";
    int choice;
    cout<<"Enter Your Choice You Want to see those player maked maximum run or maximum wickets :";
    cin>> choice;
    Player sortedPlayers[100];

    if(choice == 1)
    {
        for (int i = 0; i < size; i++) 
        {
            sortedPlayers[i] = players[i];
        }

        for (int i = 0; i < size - 1; i++) 
        {
            for (int j = i + 1; j < size; j++) 
            {
                if (sortedPlayers[i].runs < sortedPlayers[j].runs) 
                {   
                    Player temp = sortedPlayers[i];
                    sortedPlayers[i] = sortedPlayers[j];
                    sortedPlayers[j] = temp;
                }
            }
        }

        cout<<"Top 3 Players by Runs:\n";
        cout << "Player Information\n";
        cout << "+--------------------------------------------------------------------------+\n";
        cout << "| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n";
        cout << "+--------------------------------------------------------------------------+\n";
     for(int i = 0; i < size && i < 3; i++) 
        {
            cout << "| " << setw(13) << sortedPlayers[i].getJn() << " | " << setw(13) << sortedPlayers[i].getName() << " | " << setw(12) << sortedPlayers[i].getMatches_Played() << " | " << setw(10) << sortedPlayers[i].getRuns() << " | " << setw(10) << sortedPlayers[i].getWickets_Taken() << " |\n";
        }
    }

    else if(choice == 2)
    {
        for (int i = 0; i < size - 1; i++) 
        {
            for (int j = i + 1; j < size; j++) 
            {
                if (sortedPlayers[i].wickets_taken < sortedPlayers[j].wickets_taken) 
                {
                Player temp = sortedPlayers[i];
                sortedPlayers[i] = sortedPlayers[j];
                sortedPlayers[j] = temp;
                }
            }
        }

        cout<<"Top 3 Players by Wickets:\n";
        cout << "Player Information\n";
        cout << "+--------------------------------------------------------------------------+\n";
        cout << "| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n";
        cout << "+--------------------------------------------------------------------------+\n";

        for (int i = 0; i < size && i < 3; i++) 
        {
            cout << "| " << setw(13) << sortedPlayers[i].getJn() << " | " << setw(13) << sortedPlayers[i].getName() << " | " << setw(12) << sortedPlayers[i].getMatches_Played() << " | " << setw(10) << sortedPlayers[i].getRuns() << " | " << setw(10) << sortedPlayers[i].getWickets_Taken() << " |\n";
        }   
    }
    
}

void displayAllPlayers(Player* players,int size) 
{
    cout << size;
    if (size == 0) 
    {
        cout << "No players in the database.\n";
    } 
    else 
    {
        cout << "List of all Player Information\n";
        cout << "+--------------------------------------------------------------------------+\n";
        cout << "| Jersey Number |     Name     | Matches Played |   Runs   | Wickets Taken |\n";
        cout << "+--------------------------------------------------------------------------+\n";

        for (int i = 0; i < size; i++) 
		{
            cout << "| " << setw(13) << players[i].getJn() << " | " << setw(13) << players[i].getName() << " | " << setw(12) << players[i].getMatches_Played() << " | " << setw(10) << players[i].getRuns() << " | " << setw(10) << players[i].getWickets_Taken() << " |\n";

        }
    }
}


void display_max_runs_and_wickets(Player* players,int size) 
{
    int max_runs = 0;
    int max_wickets = 0;

    Player *max_runs_player = NULL;
    Player *max_wickets_player = NULL;

    for (int i = 0; i < size; i++) 
    {
        if (players[i].runs > max_runs) 
        {
            max_runs = players[i].getRuns();
            max_runs_player = &players[i];
        }

        if (players[i].wickets_taken > max_wickets) 
        {
            max_wickets = players[i].getWickets_Taken();
            max_wickets_player = &players[i];
        }
    }

    cout<< "Player who scored maximum runs:\n";
    cout<< max_runs_player->getName() << endl;

    cout<<"Player who took maximum wickets:\n";
    cout<<max_wickets_player->getName() << endl;
}
int main()
{
    int size =0;    
    int jn,i;
    Player players[]=
    {
        Player(1,"Sachin",999,999,999),
        Player(2,"Dhoni",888,888,888),
        Player(3, "Virat Kohli", 514, 35, 45678),
        Player(4, "Kapil Dev", 58, 687, 6776),
        Player(5, "Gambhir", 242, 24, 45675),
        Player(6,"Pandya",545,854,984),
        Player(7,"Harsh",999,999,999),
        Player(8,"Maddy",789,987,546),
        Player(9,"Rusha",852,963,741),
        Player(10,"Rohit",1000,1000,1000)
    };

    size=sizeof(players)/sizeof(players[0]);
    // cout<<"Enter the number of players: ";
    // cin>>size;

    // for(int i = 0; i < size; i++)
    // {
    //     cout << "Enter details for Player " << i + 1 << ":" << endl;

    //     cout << "Jersey Number: ";
    //     cin >> players[i].jn;

    //     cout << "Name: ";
    //     cin.ignore(); 
    //     cin.getline(players[i].name, sizeof(players[i].name));

    //     cout << "Matches Played: ";
    //     cin >> players[i].matches_played;

    //     cout << "Runs: ";
    //     cin >> players[i].runs;

    //     cout << "Wickets Taken: ";
    //     cin >> players[i].wickets_taken;

    //     cout << endl;
    // }

    int choice;
    do 
    {
        cout<< "\nPlayer Management System\n";
        cout<< "1. Display Players\n";
        cout<< "2. Add Player\n";
        cout<< "3. Remove Player\n";
        cout<< "4. Search Player\n";
        cout<< "5. Update Player Data\n";
        cout<< "6. Display Top 3 Players\n";
        cout<< "7. Display All Players\n";
        cout<< "8. Display Player who maximun score and run\n";
        cout<< "9. Exit\n";
        cout<< "Enter your choice: ";
        cin >>choice;

        switch(choice) 
		{
            case 1:
                Player().display(players,size);
                break;
            case 2:
                addPlayer(players, &size);
                Player().display(players,size);
                break;
            case 3:
                removeplayer(players,&size);
                Player().display(players,size);
                break;
            case 4:
                searchPlayer(players,size,jn);
                break;
            case 5:
                update(players,size);
                Player().display(players,size);
                break;
            case 6:
                displayTopPlayers(players,size);
                break;
            case 7:
                displayAllPlayers(players,size);
                break;
            case 8:
                display_max_runs_and_wickets(players,size);  
                break;           
            case 9:
                return 0;
            default:
                cout<< "Invalid choice. Please try again.\n";
        }
    } while(1);
}
