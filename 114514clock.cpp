#include <iostream>
#include <stdlib.h>
#include <Windows.h>
#include <mmsystem.h>
#pragma comment(lib,"winmm.lib")
using namespace std;
int main(){
	unsigned long long s,m,h;
	cout<<"����������\n";
	cin>>s;
	cout<<"�����������\n";
	cin>>m;
	cout<<"������Сʱ��\n";
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
	cout<<"ɡ��,����ʱ�䵽��";
	PlaySound(TEXT("homo.wav"),NULL,SND_FILENAME|SND_ASYNC|SND_LOOP);
	fflush(stdin);
	getchar();
	return 0;
} 
