#include<stdio.h>
#include<conio.h>
void main(){
	printf("\tConfession Poster and Viewer Time_Waster!!\n\n\n");
	int read_time;
	int write_time;
	int total_time;
	printf("\tAp confession post ko pahrne men kitna time lagate ho(in minutes):");
	scanf("%d", &read_time);
	
	printf("\taur ap confession post ko likhne men kitna time laga te ho(in minutes):");
	scanf("%d" , &write_time);
	total_time = read_time + write_time;
	
	if(total_time > 120)
	{
	
		printf("\nOoh! 2 ghante se zyada confession mein lga diye? Itna waqt barbad! Socho ager ye 2 ghante parhai ya skill sekhne men lagate to kidhar pohanch gai hote! zindgi men ager kuch bara krna he to ye confession wgera choro ur apne goal per dhyan do! ");
	}
	else if(total_time > 60 && total_time < 120){
		printf("\nAry yar! 1 se 2 ghante confession pe kuch zyada ho gya he na?Dekho,thora socho kya yeh waqt waqayi men tumhe agay leke ja rha he?Zindagi men aise activities ko balance rakhna seekho,wrna regret ho ga baad mein!");
	}
	else if(total_time <= 120){
		printf("\nWah bhai kamal kr rhe ho! Sirf thori der mein confession check kar lai, aur phir waps lag gaye Isi tarah focus rakho,tum buhat agay jao ge.Parhai ur apne goals pe dhyan rakho,shabash!");
	}
	getch();
}
