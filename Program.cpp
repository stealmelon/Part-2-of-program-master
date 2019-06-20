#include <iostream>
#include <fstream>
using namespace std;

struct Competitors{
    char Number[3];
    char Name[10];
    char Sex[6];
    char Class[1];
    char Phonenumber[11];
}Competitors[5];
struct Referees{
    char Name[8];
    float Score[2];
}Referees[7];

int main()
{
    ifstream Competitor("/Users/s20181106115/Desktop/competitor.txt");
    ifstream Referee("/Users/s20181106115/Desktop/referee.txt");
    ofstream ops("/Users/s20181106115/Desktop/ops.txt");

    if(Referee.is_open())
    {
        cout << "Succeeded!" << endl;
        for(int i = 0; i < 7; i++)
        {
            Referee >> Referees[i].Name;
            for(int j = 0; j < 2; j++)
            {
                Referee >> Referees[i].Score[j];
            }
            
        }
        Referee.close();
    }
    if(Competitor.is_open())
    {
        
        cout << "Also Succeeded!" << endl;
        for(int i = 0; i < 5; i++)
        {
            Competitor >> Competitors[i].Number
                       >> Competitors[i].Name
                       >> Competitors[i].Sex
                       >> Competitors[i].Class
                       >> Competitors[i].Phonenumber;
        }
        
        Competitor.close();
    }
    if(ops.is_open())
    {
        for(int i = 0; i < 5; i++)
        ops << Competitors[i].Name << endl;
        ops.close();
    }
    
    
    return 0;
}
