#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    int character,choice2,choice3,choice4,choice5,choice6;
    cout<<"Enter 1 to play as Kassandra, 2 to play as Bayek or 3 to play as Eivor.\n"<<endl;
    cin>>character;
    if(character==1   /*Kassandra*/ ){
        cout<<"You chose Kassandra."<<endl;
        cout<<"You're facing a spearman. press 1 to ATTACK, 2 to DEFEND or 3 to use SPARTA KICK"<<endl;
        cin>>choice2;
        if(choice2==1){
            cout<<"You ATTACKED the spearman. He is dead!."<<endl;
            exit(0);

        }else if (choice2==2)
        {
            cout<<"You DEFENDED the spearman's hit, but he broke through and stabbed you in the eye. You're DEAD."<<endl;
            exit(0);
        }else if (choice2==3)
        {
            cout<<"You used SPARTA KICK and dealt 300% damage. Spearman is now toast. THIS IS SPARTA!"<<endl;
            exit(0);
        }
        
    }else if (character==2 /* Bayek */)
    {
        cout<<"You chose BAYEK. Ancient Egypt huh? Let's do this."<<endl;
        cout<<"You are facing a PHYLAKE who may grant you a legendary weapon on dying."<<endl;
        cout<<"Press 1 to ATTACK, 2 for HEAVY ATTACK and 3 to SNEAK UP on the Phylake and ASSASSINATE him. "<<endl;
        cin>>choice3;
        if(choice3==1){
            cout<<"You ATTACKED the spearman and dealt 50 damage, leaving him free to attack you and he does so. It's a 1 hit death."<<endl;
            exit(0);
        }else if (choice3==2)
        {
            cout<<"Bayek dealt devastating damage using HEAVY ATTACK and the Phylake is dead. But the legendary loot is damaged and useless. You fail the quest."<<endl;
            exit(0);
        }else if (choice3==3)
        {
           cout<<"ASSASSINATION successful. Loot is yours for the taking."<<endl;
           exit(0);
        }

    }else if (character==3 /*Eivor*/)
    {
       cout<<"The spearman in Ravensthorpe glitched so hard, he spawned beneath a floor and you couldn't deal damage to him, thus failing the quest."<<endl;
    }
    return 0;
}