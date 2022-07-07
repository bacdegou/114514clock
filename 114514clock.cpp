#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
using namespace std;
int main(){
	unsigned long long s,m,h;
	cout<<"请输入秒数\n";
	cin>>s;
	cout<<"请输入分钟数\n";
	cin>>m;
	cout<<"请输入小时数\n";
	cin>>h;
	unsigned long long sc=s+m*60+h*3600;
	while(sc!=0){
		system("cls");
		if(h!=0){
			cout<<h<<":";
		}
		if(m!=0){
			cout<<h<<":";
		}
		cout<<s;
		sc--;
		s--;
		if(s==0&&m!=0){
				s=59;
				m--;
		}
		if(m==0&&h!=0){
			m=59;
			h--;
		}
		Sleep(1000);
	}
	system("cls");
	cout<<"伞兵,闹钟时间到了";
	PlaySound(TEXT("homo.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
	fflush(stdin);
	getchar();
	return 0;
} 
