#include<iostream>
#include<windows.h>
#include<bits/stdc++.h>
#include<mmsystem.h>
#include<string.h>
#include<stdio.h>
#include<dirent.h>
#include<ctime>

using namespace std;

void Loading_Bar()
{
	char psw[100];
	
	system("Color 0B");
	cout<<"\n\n\n\n\n\n\n";
	cout<<"\t\t\t\t\tLOADING\t";
	
	char x = 219;
	for(int i = 0;i<=35;i++)
	{
		cout<<x;
		if(i<10)
		Sleep(300);
		if(i>=10 && i<20)
		Sleep(100);
		if(i>=10)
		Sleep(25);
	}
	system("cls");
	cout<<"\n\n";
	cout<<"\t\t\t\t\t\tWelcome MR KALDRI!";
	PlaySound(TEXT("C:\\Users\\Rwamagana\\Desktop\\Limitify\\RAVEN\\Audio\\Welcome.wav"),NULL,SND_SYNC);
	PlaySound(TEXT("C:\\Users\\Rwamagana\\Desktop\\Limitify\\RAVEN\\Audio\\Authentication.wav"),NULL,SND_SYNC);
	
	cout<<endl;
	cout<<"Enter your password: ";
	
	cin>>psw;

	while(strcmp(psw,"I_code_123") != 0)
	{
		cout<<"Incorrect password!"<<endl;
		cout<<"Re-enter password: ";
		cin>>psw;
	}
	
	if(strcmp(psw,"I_code_123") == 0)
	{
		PlaySound(TEXT("C:\\Users\\Rwamagana\\Desktop\\Limitify\\RAVEN\\Audio\\check.wav"),NULL,SND_SYNC);
	}	
}

void Operation()
{

	char user[100];
	cout<<"\n\n";
	
	for(int i = 0;i<=INFINITY;i++)
	{
		std::string youtube = "start https://www.youtube.com/";
		std::string google = "start https://www.google.com/";
		std::string instagram = "start https://www.instagram.com/";
		std::string crazy_games = "start https://www.crazygames.com/";
		
		cout<<"KALDRI --> ";
		gets(user);
		Sleep(5);
		//Browsing
		if(strcmp(user,"Open-youtube") == 0)
		{
			system(youtube.c_str());
		}
		else if(strcmp(user,"Open-google") == 0)
		{
			system(google.c_str());
		}
		else if(strcmp(user,"Open-instagram") == 0)
		{
			system(instagram.c_str());
		}
		else if(strcmp(user,"Open-crazygames") == 0)
		{
			system(crazy_games.c_str());
		}
	
		//Music & Videos
		else if(strcmp(user,"play-video") == 0)
		{
			chdir("C:\\Program Files (x86)\\VideoLAN\\VLC");
			system("D:\\Rwamagana\\Videos\\Limitify.mp4");
		}
		//Date and Time
		else if(strcmp(user,"What-is-the-time?")== 0)
		{
			time_t current = time(0);
			char *date = ctime(&current);
			
			cout<<"It is "<<date<<endl;
		}
		//Conversation
		else if((strcmp(user,"RAVEN?") == 0) || strcmp(user,"Wake-up") == 0)
		{
			cout<<"RAVEN ..."<<endl;
			PlaySound(TEXT("C:\\Users\\Rwamagana\\Desktop\\Limitify\\RAVEN\\Audio\\At your service.wav"),NULL,SND_SYNC);
		}
		
		else if(strcmp(user,"Who-are-you?") == 0 || strcmp(user,"What-is-your-name?") == 0)
		{
			cout<<"RAVEN ..."<<endl;
			PlaySound(TEXT("C:\\Users\\Rwamagana\\Desktop\\Limitify\\RAVEN\\Audio\\Whoami.wav"),NULL,SND_SYNC);
		}
		else if(strcmp(user,"Goodbye!") == 0 || strcmp(user,"Bye") == 0 || strcmp(user,"bye") == 0)
		{
				cout<<"RAVEN ..."<<endl;
				PlaySound(TEXT("C:\\Users\\Rwamagana\\Desktop\\Limitify\\RAVEN\\Audio\\Bye.wav"),NULL,SND_SYNC);
				exit(0);
		}
		else
		{
			cout<<"Run-Time Error....."<<endl;
		}
	}
}

int main()
{
	Loading_Bar();
   	Sleep(2);
	Operation();
	   	
    return 0;
}
