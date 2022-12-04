#include <iostream>
#include <iomanip>
#include <string.h>
#include <string>


using namespace std;
// album variables
// char artistIdRefs[][8] ,char albumIds[][8]
// char titles[][80],char recordFormats[][20],char datePublished[][11],char paths[][100],int&nAlbum



void loading(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][80],int&nArtist);//calls sort

void Sort(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][80],int nArtist);
//handles main menu choice between artist or album
void mainHandler(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][80],int&nArtist);//calls main menu
int mainMenu();//returns user selection to main handler
//one of the options in main handler the other is album manager
bool artistManager(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][80],int&nArtist);//check if user exits or not
//displays artist menu
int artistMenu();//returns user selection to artist manager
//one of the two options in artist manager the other is artist editor
bool artistViewer(const char artistids[][8],const char names[][40],const char genders[],const char phones[][11],const char emails[][80],int nArtist);//handles the view artist choice calls view menu,all,specific
//display artist view menu
int viewArtistMenu();//returns user selection to artist viewer
//one of the two options in artist viewer
void displayAllArtist(const char artistids[][8],const char names[][40],const char genders[],const char phones[][11],const char emails[][80],int nArtist);//display all artists
//the other option in artist viewer
void viewArtistBySearch(const char artistids[][8],const char names[][40],const char genders[],const char phones[][11],const char emails[][80],int nArtist);//calls search artist and display search result in order
//the first of the two functions executed under view artist by search
void searchArtistByName(const char names[][40],int nArtist,const char targetName[],int result[],int*noResult);//searches artist by name
//the second of the two functions executed under view artist by search
void displaySearchResult(const char artistids[][8],const char names[][40],const char genders[],const char phones[][11],const char emails[][80],int nArtist,const int result[],int noResult);//displays artist by name search
//the other option in artist manager
bool artistEditor(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][80],int&nArtist);//handles the edit artist choice calls add,edit,delete artist
//display artist edit menu
int editArtistMenu();//returns user selection to artist Editor
//one of the three options in edit artist menu
  //calls get artist info, get artist name, get artist gender, get artist phone, get artist email,validate and format name
bool addartist(char ids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],int & nArtist);
bool validatename(const char[]);
void formatname(char []);
void getname(char name[]);
bool validategender( char);
char getgender();
void getphone(char phone[]);
int validatephone(const char phone[]);
void getemail(char email[]);
bool validateemail(const char email[]);
void getartist(char name[],char &gender,char phone[],char email[]);
int lastArtistId;















































//one of the three options in artist Editor
void editArtist();//calls select artist, edit artist info, display one artist
//one of the three options in artist Editor
void deleteArtist();//calls remove artist

void welcome(){
    cout<<"\n";
	cout<<"\n                          *o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*     ";
	cout<<"\n                          *                                                 *     ";
	cout<<"\n                          *                                                 *     ";
	cout<<"\n                          *                   WELCOME TO                    *     ";
	cout<<"\n                          *                                                 *     ";
	cout<<"\n                          *              | ALBUM MANAGEMENT |               *     ";
	cout<<"\n                          *                                                 *     ";
	cout<<"\n                          *                                                 *     ";
	cout<<"\n                          *                                                 *     ";
	cout<<"\n                          *                                                 *     ";
	cout<<"\n                          *                                                 *     ";
	cout<<"\n                          *o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*     ";

}



























int main()
{
     welcome();
     //mainhandler
     char ids[1000][8];
char names[1000][40];
char genders[1000];
char phones[1000][11];
char emails[1000][60];
int n=0;
addartist(ids,names,genders,phones,emails,n);


















    cout << "Hello world!" << endl;
    return 0;
}
bool addartist(char ids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],int & n){
char name[40];
char gender;
char phone[11];
char email[60];
    getartist(name,gender,phone,email);
    ids[n][8]=n;
    names[n][40]=*name;
    genders[n]=gender;
    phones[n][11]=*phone;
    emails[n][60]=*email;

    return true;


}
void getartist(char name[],char &gender,char phone[],char email[]){
    getname(name);
    getgender();
    getphone(phone);
    getemail(email);


}
void getemail(char email[]){
    bool isvalid;
    do{
        cout<<"\nEnter the email: ";
        cin.ignore();
        cin.getline(email,50);
        isvalid=validateemail(email);
        if(!isvalid){
            cout<<"Incorrect email !!"<<endl;
        }
    }while(!isvalid);

}
bool validateemail(const char email[]){
    int atsign=-1, dotsign=-1;
    if(!isalpha(email[0])){
        return false;
    }
    else{
        for(int i=0;i<strlen(email);i++){
                if(email[i]=='@'){
                    atsign=i;
                }
                else if(email[i]=='.'){
                    dotsign=i;
                }

        }
        if(atsign == -1 || dotsign == -1){
            return false;
        }
        else{
            return true;
        }
    }
}
int validatephone(const char phone[]){
    if(strlen(phone)==10){
    for(int i=0;i<10;i++){
        if(isalpha(phone[i])){
           return 0;
        }

        }
        return 1;
    }
    else{
        return 0;
    }
}
void getphone(char phone[]){
    int isvalid;
do{
 cout<<"\nEnter (10 digits) phone: ";
 cin.ignore();
 cin.getline(phone,13);
 isvalid=validatephone(phone);
 if(isvalid==0){
    cout<<"Error! Invalid Phone, re-enter!"<<endl;
 }
 }while(isvalid==0);
}
char getgender(){
    char gender;
    bool isvalid;
    do{
    cout<<"\nEnter gender: ";
    cin>>gender;
    isvalid=validategender(gender);
    if(!isvalid)
        cout<<"Error gender not valid!"<<endl;
    }while(!isvalid);
        if(gender=='m'||gender=='M')
            return 'M';
        else
            return 'F';
    }

bool validategender(char gender){
if(gender=='M'||gender=='m'||gender=='f'||gender=='F'){
    return true;
}
 else{
    return false;
 }
}
void getname(char name[]){
    cout<<"Enter the name of the artist: ";
    //cin.ignore();
    cin.getline(name,39);
    int isvalid;
    isvalid=validatename(name);
    if(isvalid==0){
      cout<<"Error artist name not valid!"<<endl;
    }
    else
        formatname(name);

    }
void formatname(char name[]){
for (int i=0; i<strlen(name);i++)
	{
		if (i==0)
		{
			name[i]=toupper(name[i]);
		}
		else if (name[i-1] == ' ')
		{
			name[i]=toupper(name[i]);
		}
	}
	//cout<<name;

}
bool validatename( const char name[]){
 if( strlen(name) == 0 || name[0] == ' '){
  return false;
 }
 else{

  return true;
 }
}










































































































































































































































































































