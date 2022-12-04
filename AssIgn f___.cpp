#include <iostream>
#include <iomanip>
#include <string.h>
#include <cstring>
#include <string>
#include <cstdlib>
using namespace std;
void farewell();
void welcome();

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
bool addartist(char ids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],int & nArtist);

int mainmenu();
int artistmenu();
void artistmanager(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],char idsrefs[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datapublished[][11],char paths[][100],int & nartist,int & nalbum);
void mainmanager(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],char idsrefs[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublished[][11],char paths[][100],int & nartist,int & nalbum);

void artistviewer(const char artistids[][8],const char names[][40],const char genders[],const char phones[][11],const char emails[][60],int & nartist);
int viewartistmenu();
void displayallartist(const char artistids[][8],const char names[][40],const char genders[],const char phones[][11],const char emails[][60],int & nartist);
void viewartistbysearch(const char artistids[][8], const char names[][40], const char genders[], const char phones[][11], const char emails[][60], int nartist);
void searchartist(const char artistids[][8], const char names[][40], int nartist, int result[], int & noResult);
void displaysearchartist(const char artistids[][8], const char names[][40], const char genders[], const char phones[][11], const char emails[][60], int nartist, const int result[], int noresult);
void searchartistbyid(const char artistids[][8], int nartist, const char targetid[],  int result[], int & noresult);
void searchartistbyname(const char names[][40], int nartist, const char targetname[],  int result[], int & noresult);
int selectartist(const char artistids[][8], const char names[][40], const int result[], int noresult, int forwhat );
void sortartist(char artistids[][8], char names[][40], char genders[], char phones[][11], char emails[][60], int nArtist);

void editartist(char artistids[][8], char names[][40], char genders[], char phones[][11], char emails[][60], int nartist);
bool editArtistInfo(const char artistid[], char name[], char & gender, char phone[],char email[]);
void displayOneArtist(const char artistid[], const char name[], char  gender, const char phone[], const char email[]);

void deleteartist(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],char idsRefs[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublished[][11],char paths[][100],int & nartist,int & nalbum);
void removeArtist(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],int index,int & nartist);
void removeArtistAllAlbums(const char artistids[][8], char idsrefs[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublished[][11],char paths[][100],  int & nAlbum);

void gettitle(char title[]);
bool validatetitle(const char title[]);
void formattitle(char title[]);
void getformat(char recordformat[]);
bool validateformat(const char recordformat[]);
void formatrecordformat(char recordformat[]);
void getdate(char date[]);
bool validatedate(unsigned int dd, unsigned int mm, unsigned int yy);
void formatdate(char date[], unsigned int day, unsigned int month, unsigned int year);
void getpath(char path[]);
bool validatepath(const char path[]);
void formatpath(char path[]);

void getalbuminfo(char title[],char recordformat[], char date[], char path[]);
void addalbum(const char artistids[][8],const char names[][40],char idsref[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublisheds[][11], char paths[][100],int nartist, int & nAlbum);
void albummanager(const char artistids[][8], const char names[][40],char idsrefs[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublished[][11],char paths[][100],int nartist,int & nalbum);
int albummenu();


void loadartist(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][60], int & nArtist);
void loadalbum(char artistIdRefs[][8], char albumIds[][10], char titles[][80], char recordFormats[][20], char datePublished[][11], char paths[][100],  int & nAlbum);
void loading(char artistids[][8], char names[][40], char genders[], char phones[][11], char emails[][60], char artistidsefs[][8], char albumids[][10], char titles[][80], char recordformats[][20], char datepublished[][11], char paths[][100],int & nArtist, int & nAlbum);

int lastArtistId;
int lastAlbumId;


int main(){
char artistids[1000][8]={"art-mkz","art-lbs","art-nwz","art-nzk","art-kgs","art-ndg","art-ttk","art-dma","art-rda"};
char names[1000][40]={"Melaku Kirubel Zelalem ","Libana Biruk Samuel", "Neway Wendmu Zekios",
                "Nigist Zerihun Kidane", "Kaleb Girum Samuel", "Nahom Degfe Geremew",
                "Tesnim Teleha Kemal", "Debebe Markos Abel", "Rediet Dagim Alemu"};
char genders[1000]={'M','F','M','F','M','M','F','M','F'};
char phones[1000][11]={"0975865767","0956784534","0945753636","0924368648","0946834579",
                        "0986996756","0907656707","0986989786","0976567636"};
char emails[1000][60]={"melaku@gmail.com","Libana@gmail.com","Neway@gmail.com","Nigist@gmail.com",
                        "Kaleb@gmail.com","Nahom@gmail.com","Tesnim@gmail.com","Debebe@gmail.com","Rediet@gmail.com"};
char idrefs[1000][8];
char albumids[1000][10];
char titles[1000][80];
char recordformats[1000][20];
char datepublished[1000][11];
char paths[1000][100];
char date[11];
int nartist=9,nalbum;
welcome();
loading(artistids,names,genders,phones,emails,idrefs,albumids,titles,recordformats,datepublished,paths,nartist,nalbum);
mainmanager(artistids,names,genders,phones,emails,idrefs,albumids,titles,recordformats,datepublished,paths,nartist,nalbum);
farewell();



return 0;
}
void mainmanager(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],char idsrefs[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublished[][11],char paths[][100],int & nartist,int & nalbum){
int choice;
here:
choice=mainmenu();
switch(choice){
    case 1:{
        artistmanager(artistids,names,genders,phones,emails,idsrefs,albumids,titles,recordformats,datepublished,paths,nartist,nalbum);
        mainmanager(artistids,names,genders,phones,emails,idsrefs,albumids,titles,recordformats,datepublished,paths,nartist,nalbum);
        break;
    }
    case 2:{
       albummanager(artistids,names,idsrefs,albumids,titles,recordformats,datepublished,paths,nartist,nalbum);
       mainmanager(artistids,names,genders,phones,emails,idsrefs,albumids,titles,recordformats,datepublished,paths,nartist,nalbum);
        break;
    }
    case 3:{

        break;
    }
    default:{
        cout<<"Error!! Invalid Choice"<<endl;
        goto here;

    }
}
       // mainmanager(artistids,names,genders,phones,emails,idrefs,albumids,titles,recordformats,datepublished,paths,nartist,nalbum);
}
void artistmanager(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],char idsrefs[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublished[][11],char paths[][100],int & nartist,int & nalbum){
int choice;
choice=artistmenu();
switch(choice){
    case 1:{
        artistviewer(artistids,names,genders,phones,emails,nartist);
        break;
    }
    case 2:{
        editartist(artistids,names,genders,phones,emails,nartist);
        break;
    }
    case 3:{

        addartist(artistids,names,genders,phones,emails,nartist);
        break;
    }
    case 4:{
        deleteartist(artistids,names,genders,phones,emails,idsrefs,albumids,titles,recordformats,datepublished,paths,nartist,nalbum);
        break;
    }
    case 5:{
        break;
    }
}
cout<<endl;
system("pause");
system("cls");
    //artistmanager(artistids,names,genders,phones,emails,idsrefs,albumids,titles,recordformats,datepublished,paths,nartist,nalbum);
}
int artistmenu(){
    char c;
    cout<<"1. View Artist"<<endl;
    cout<<"2. Edit Artist"<<endl;
    cout<<"3. Add Artist"<<endl;
    cout<<"4. Delete Artist"<<endl;
    cout<<"5. Exit"<<endl;

    cout<<"Enter your choice: ";
    cin>>c;
     switch(c){
    case '1':{

        return 1;
        break;
    }
    case '2':{

        return 2;
        break;
    }
    case '3':{

        return 3;
        break;
    }
    case '4':{

        return 4;
        break;
    }
    case '5':{
        return 5;
        break;
    }
    default:{
        cout<<"Error!! Re-enter!!"<<endl;
        artistmenu();
        break;
    }
    }

}
void albummanager(const char artistids[][8], const char names[][40],char idsrefs[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublished[][11],char paths[][100],int nartist,int & nalbum){
int choice;
choice=albummenu();
switch(choice){
    case 1:{
        //albumviewer(artistids,names,genders,phones,emails,nartist);
        break;
    }
    case 2:{

        break;
    }
    case 3:{

        addalbum(artistids,names,idsrefs,albumids,titles,recordformats,datepublished,paths,nartist,nalbum);
        break;
    }
    case 4:{

        break;
    }
    case 5:{

    break;
    }
    case 6:{

    break;
    }
}
}
int albummenu(){
     char c;
    cout<<"1. View Album"<<endl;
    cout<<"2. Edit Album"<<endl;
    cout<<"3. Add Album"<<endl;
    cout<<"4. Delete Album"<<endl;
    cout<<"5. Back to Main Menu"<<endl;
    cout<<"6. Exit"<<endl;

    cout<<"Enter your choice: ";
    cin>>c;
     switch(c){
    case '1':{

        return 1;
        break;
    }
    case '2':{

        return 2;
        break;
    }
    case '3':{

        return 3;
        break;
    }
    case '4':{

        return 4;
        break;
    }
    case '5':{
        return 5;
        break;
    }
    case '6':{
        return 6;
        break;
    }
    default:{
        cout<<"Error!! Re-enter!!"<<endl;
        artistmenu();
        break;
    }
    }


}
int mainmenu(){
    char c;
    cout<<"1. Manage Artist"<<endl;
    cout<<"2. Manage Album"<<endl;
    cout<<"3. Exit"<<endl<<endl;
    cout<<"Enter your choice: ";
    cin>>c;
    switch(c){
    case '1':{
        return 1;
    }
    case '2':{
        return 2;
    }
    case '3':{
        return 3;
    }
    default:{
        cout<<"Error!! Re-enter!!"<<endl;
        mainmenu();
    }
    }

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void loading(char artistids[][8], char names[][40], char genders[], char phones[][11],char emails[][60], char idsrefs[][8], char albumids[][10], char titles[][80],char recordformats[][20], char datepublished[][11], char paths[][100],int & nArtist, int & nAlbum){

    loadartist(artistids, names, genders, phones, emails, nArtist);
    loadalbum(idsrefs, albumids, titles, recordformats, datepublished, paths, nAlbum);
    }
void loadartist(char artistids[][8], char names[][40], char genders[], char phones[][11], char emails[][60], int & nArtist){
    sortartist(artistids,names,genders,phones,emails,nArtist);
}
void loadalbum(char idsrefs[][8], char albumids[][10], char titles[][80], char recordformats[][20], char datepublished[][11], char paths[][100],  int & nAlbum){

}
void sortalbum(){

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void deleteartist(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],char idsrefs[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublished[][11],char paths[][100],int & nartist,int & nalbum){
int n,result[100],noresult,forwhat;
char artistid[8],name[40],gender,phone[11],email[60];
searchartist(artistids,names,nartist,result,noresult);
n=selectartist(artistids,names,result,noresult,3);
removeArtistAllAlbums(artistids,idsrefs,albumids,titles,recordformats,datepublished,paths,nalbum);
removeArtist(artistids,names,genders,phones,emails,n,nartist);
sortartist(artistids,names,genders,phones,emails,nartist);
}
void removeArtist(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],int index,int & nartist){
               // for(int i=index;i<nartist;i++){
                    //if(index==index[i+1]){
                    for(int j=index;j<nartist;j++){
                        for(int i=0;i<8;i++){
                        artistids[j][i]=artistids[j+1][i];
                        }
                        for(int i=0;i<40;i++){
                        names[j][i]=names[j+1][i];
                        }
                        genders[j]=genders[j+1];
                        for(int i=0;i<11;i++){
                        phones[j][i]=phones[j+1][i];
                        }
                        for(int i=0;i<60;i++){
                            emails[j][i]=emails[j+1][i];
                        }
                    }

}
void removeArtistAllAlbums(const char artistids[][8], char idsrefs[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublished[][11],char paths[][100],  int & nAlbum){

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

int viewartistmenu(){
     char c;
    cout<<"1. Display All Artist"<<endl;
    cout<<"2. View Artist by Search"<<endl;
    cout<<"3. Back to Main Menu"<<endl;
    cout<<"4. Exit"<<endl<<endl;

    cout<<"Enter your choice: ";
    cin>>c;
     switch(c){
    case '1':{

        return 1;
        break;
    }
    case '2':{

        return 2;
        break;
    }
    case '3':{

        return 3;
        break;
    }
    case '4':{
        return 4;
        break;
    }
    default:{
        cout<<"Error Invalid Choice!!"<<endl;
        viewartistmenu();
    }
}
}
void displayallartist(const char artistids[][8],const char names[][40],const char genders[],const char phones[][11],const char emails[][60],int & nartist){
cout<<endl<<"   ID               Name                                Gender     Phone             Email"<<endl;
cout<<      "______________________________________________________________________________________________________________"<<endl;
//cout<<*artistids[0]<<*names[0]<<endl;
for(int i=0;i<nartist;i++){
std::cout<<setw(10)<<left<<artistids[i]<<"|  "<<setw(40)<<left<<names[i]<<"  | "<<setw(6)<<left<<genders[i]<<"|  "<<setw(16)<<left<<phones[i]<<"|  "<<setw(60)<<left<<emails[i]<<setw(15)<<left<<endl;
}

}
void viewartistbysearch(const char artistids[][8], const char names[][40], const char genders[], const char phones[][11], const char emails[][60], int nartist){
int result[1000],noresult;
searchartist(artistids,names,nartist,result,noresult);
 if(noresult>0){
displaysearchartist(artistids,names,genders,phones,emails,nartist,result,noresult);
}
}
void searchartist(const char artistids[][8], const char names[][40], int nartist, int result[], int & noresult){
int c;
char targetid[8],targetname[40];
cout<<"1. Search artist by ID"<<endl;
cout<<"2. Search artist by NAME"<<endl<<endl;
cout<<"Enter your choice: ";
cin>>c;
switch(c){
    case 1:{
    cout<<"Enter target ID: ";
    cin.ignore();
    cin.getline(targetid,8);
    searchartistbyid(artistids,nartist,targetid,result,noresult);
    break;
    }
    case 2:{
    cout<<"Enter target NAME: ";
    cin.ignore();
    cin.getline(targetname,40);
    searchartistbyname(names,nartist,targetname,result,noresult);
    break;

    }
    default:{
    cout<<"Error!! Invalid Choice"<<endl;
    }
}

}
void displaysearchartist(const char artistids[][8], const char names[][40], const char genders[], const char phones[][11], const char emails[][60], int nartist, const int result[], int noresult){
    cout<<" ID      Name        Gender      Phone           Email"<<endl;
    for(int i=0;i<noresult;i++){
    cout<<setw(15)<<left<<artistids[result[i]]<<setw(15)<<left<<names[result[i]]<<setw(15)<<left<<genders[result[i]]<<setw(15)<<left<<phones[result[i]]<<setw(15)<<left<<emails[result[i]]<<setw(15)<<left<<endl;
}
}
void searchartistbyid(const char artistids[][8], int nartist, const char targetid[],  int result[], int & noresult){
    int k;
    for(int i=0;i<nartist;i++){
            int tcount=0;
        for(int j=0;j<strlen(targetid);j++){
            if(artistids[i][j]==targetid[j]){
                tcount++;
            }
        }
    if(tcount>=5){
        result[k]=i;
        noresult++;
        k++;
    }
    }
    if(noresult==0){
        cout<<"Artist not found!"<<endl;
    }
}
void searchartistbyname(const char names[][40], int nartist, const char targetname[],  int result[], int & noresult){
    int k;
    for(int i=0;i<nartist;i++){
            int tcount=0;
        for(int j=0;j<strlen(targetname);j++){
            if(names[i][j]==targetname[j]){
                tcount++;
            }
        }
    if(tcount>=3){
        noresult++;
        result[k]=i;
        k++;
    }
    }
     if(noresult==0){
        cout<<"Artist not found!"<<endl;
    }
}
void artistviewer(const char artistids[][8],const char names[][40],const char genders[],const char phones[][11],const char emails[][60],int & nartist){
int choice;
choice=viewartistmenu();
switch(choice){
    case 1:{
        displayallartist(artistids,names,genders,phones,emails,nartist);
        break;
    }
    case 2:{
        viewartistbysearch(artistids,names,genders,phones,emails,nartist);
        break;
    }
    case 3:{
        break;
    }
    case 4:{
        break;
    }
}
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void editartist( char artistids[][8], char names[][40], char genders[], char phones[][11], char emails[][60], int nartist){
int n,result[100],noresult,forwhat;
char artistid[8],name[40],gender,phone[11],email[60];
searchartist(artistids,names,nartist,result,noresult);
if(noresult>0){
n=selectartist(artistids,names,result,noresult,2);
editArtistInfo(artistid,name,gender,phone,email);
    for(int i=0;i<strlen(names[n]);i++){
    names[n][i]=' ';
    }
    for(int i=0;i<strlen(name);i++){
    names[n][i]=name[i];
    }
    genders[n]=gender;
    for(int i=0;i<strlen(phone);i++){
    phones[n][i]=phone[i];
    }

   for(int i=0;i<strlen(emails[n]);i++){
    emails[n][i]=' ';
   }
   for(int i=0;i<strlen(email);i++){
    emails[n][i]=email[i];
   }
   sortartist(artistids,names,genders,phones,emails,nartist);
   displayOneArtist(artistid,name,gender,phone,email);
}
    }
int selectartist(const char artistids[][8], const char names[][40], const int result[], int noresult, int forwhat ){
   int c;

    for(int i=0;i<noresult;i++){
        cout<<"Artist ID        Name"<<endl;
        cout<<i<<'.'<<artistids[result[i]]<<"        "<<names[result[i]]<<endl<<endl;
}
cout<<"Select the artist: ";
cin>>c;
return result[c];

}
bool editArtistInfo(const char artistid[], char name[], char & gender, char phone[],char email[]){
    getname(name);
    gender=getgender();
    getphone(phone);
    getemail(email);
    return true;
}
void displayOneArtist(const char artistid[], const char name[],const char  gender, const char phone[], const char email[]){
   cout<<"Artist Id  "<<artistid<<endl;
   cout<<"Name:      "<<name<<endl;
   cout<<"Gender:    "<<gender<<endl;
   cout<<"Phone:     "<<phone<<endl;
   cout<<"Email:     "<<email<<endl;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

bool addartist(char artistids[][8],char names[][40],char genders[],char phones[][11],char emails[][60],int & n){
char name[40];
char gender;

char phone[11];
char email[60];
    getartist(name,gender,phone,email);
    cout<<name<<gender<<phone<<email;
   * artistids[n]=n;
    for(int i=0;i<strlen(name);i++){
    names[n][i]=name[i];
    }
    genders[n]=gender;
    for(int i=0;i<strlen(phone);i++){
    phones[n][i]=phone[i];
    }
   for(int i=0;i<strlen(email);i++){
    emails[n][i]=email[i];
   }
    n++;
    sortartist(artistids,names,genders,phones,emails,n);

    return true;


}
void getartist(char name[],char &gender,char phone[],char email[]){
    getname(name);
    gender=getgender();
    getphone(phone);
    getemail(email);


}
void sortartist(char artistids[][8], char names[][40], char genders[], char phones[][11], char emails[][60], int nArtist) {
     char tempname[40], tempId[8], tempPhone[11], tempEmail[60], tempGender;

        for (int i = 0; i < nArtist - 1; i++){
            for (int j = i + 1; j <= nArtist - 1; j++) {
              if (strcmp(names[i], names[j]) > 0)
              {

                strcpy(tempname, names[i]);
                 strcpy(names[i], names[j]);
                 strcpy(names[j], tempname);
                 strcpy(tempId, artistids[i]);
                 strcpy(artistids[i], artistids[j]);
                 strcpy(artistids[j], tempId);
                 strcpy(tempPhone, phones[i]);
                 strcpy(phones[i], phones[j]);
                 strcpy(phones[j], tempPhone);
                 strcpy(tempEmail, emails[i]);
                 strcpy(emails[i], emails[j]);
                 strcpy(emails[j], tempEmail);
                 tempGender = genders[i];
                 genders[i] = genders[j];
                 genders[j] = tempGender;
               }
            }
         }

}
void getemail(char email[]){
    bool isvalid;
    do{
        cout<<endl<<"Enter the email: ";
        cin.getline(email,60);
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
    cin.ignore();
do{
 cout<<"\nEnter (10 digits) phone: ";
 cin.getline(phone,11);
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
    cin.ignore();
     int isvalid;
    do{
    cout<<"Enter the name of the artist: ";
    cin.getline(name,39);
    isvalid=validatename(name);
    if(isvalid==0){
      cout<<"Error artist name not valid!"<<endl;
    }
    }while(isvalid==0);
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

///////////////////////////////////////////////////////////////////////////////////////////////////////////

void addalbum(const char artistids[][8],const char names[][40],char idsref[][8],char albumids[][10],char titles[][80],char recordformats[][20],char datepublisheds[][11], char paths[][100],int nartist, int & nAlbum){
char title[80],recordformat[20],date[11],path[100];
    int n,x,result[100],noresult,forwhat;
    n=nAlbum;
    searchartist(artistids,names,nartist,result,noresult);
    x=selectartist(artistids,names,result,noresult,forwhat);
    getalbuminfo(title,recordformat,date,path);
    cout<<title<<recordformat<<path<<endl;
    for(int i=0;i<strlen(title);i++){
    titles[n][i]=title[i];
    }
    for(int i=0;i<strlen(recordformat);i++){
    recordformats[n][i]=recordformat[i];
    }
   for(int i=0;i<strlen(date);i++){
    datepublisheds[n][i]=date[i];
   }
   for(int i=0;i<strlen(path);i++){
    paths[n][i]=path[i];
   }
    n++;


}
void getalbuminfo(char title[],char recordformat[], char date[], char path[]){
    gettitle(title);
    getformat(recordformat);
   // getdate(date);
    getpath(path);
}
void gettitle(char title[]){
    bool isvalid;
    do{
    cout<<"Enter the title of the album: ";
    cin.ignore();
    cin.getline(title,80);
    isvalid=validatetitle(title);
    if(!isvalid){
      cout<<"Error album title not valid!"<<endl;
    }
    }while(!isvalid);
        formattitle(title);

    }
bool validatetitle(const char title[]){
    if( strlen(title) == 0 || title[0] == ' '){
  return false;
 }
 else{

  return true;
 }
}
void formattitle(char title[]){
    for (int i=0; i<strlen(title);i++)
	{
		if (i==0)
		{
title[i]=toupper(title[i]);
		}
		else if (title[i-1] == ' ')
		{
			title[i]=toupper(title[i]);
		}
	}

}
void getformat(char recordformat[]){
    bool isvalid;
    //cin.ignore();
    do{
    cout<<"Enter the record format: ";
    cin.getline(recordformat,20);
    isvalid=validateformat(recordformat);
    if(!isvalid){
      cout<<"Error record format not valid!"<<endl;
    }
    }while(!isvalid);

        formatrecordformat(recordformat);


}
bool validateformat(const char recordformat[]){
    if( strlen(recordformat) == 0 || recordformat[0] == ' '){
        return false;
        }
    else{

    return true;
    }
}
void formatrecordformat(char recordformat[]){
    for(int i=0;i<strlen(recordformat);i++){
        recordformat[i]=toupper(recordformat[i]);
    }


}

void getdate(char date[]){
    bool isvalid;
    unsigned int day,month,year;
    do{
    cout<<"Enter date separated by space(DD/MM/YYYY): ";
    cin>>day>>month>>year;
    isvalid=validatedate(day,month,year);
    if(!isvalid){
        cout<<"Invalid Date!!"<<endl;
    }
    }while(!isvalid);
    formatdate(date,day,month,year);

}
bool validatedate(unsigned int dd, unsigned int mm, unsigned int yy){
    if(yy>0)
       {
         if(mm==1 || mm==3 || mm==5|| mm==7|| mm==8||mm==10||mm==12 && dd>0 && dd<=31)
         return true;
         else

          if(mm==4 || mm==6 || mm==9|| mm==11 && dd>0 && dd<=30)
            return true;
         else
            if(mm==2)
               {
               if((yy%400==0 || (yy%100!=0 && yy%4==0)) && dd>0 && dd<=29)
                 return true;
               else if(dd>0 && dd<=28)
                  return true;
               else
                  return false;
               }
         else
               return false;
      }
    else
          return false;
  }

void formatdate(char date[], unsigned int day, unsigned int month, unsigned int year){

    date[0]=day/10+'0';
    date[1]=day%10+'0';
    date[2]='/';
    date[3]=month/10+'0';
    date[4]=month%10+'0';
    date[5]='/';
    date[6]=year/1000+'0';
    date[7]=year%1000/100+'0';
    date[8]=year%1000%100/10+'0';
    date[9]=year%1000%100%10+'0';

}
void getpath(char path[]){
     bool isvalid;
    // cin.ignore();
    do{
    cout<<"Enter the path of the album: ";
    cin.getline(path,80);
    isvalid=validatepath(path);
    if(!isvalid){
      cout<<"Error album path not valid!"<<endl;
    }
    }while(!isvalid);
        formatpath(path);

}
bool validatepath(const char path[]){
     if( strlen(path) == 0 || path[0] == ' '){
  return false;
 }
 else{

  return true;
 }

}
void formatpath(char path[]){
    for (int i=0; i<strlen(path);i++)
	{
		if (i==0)
		{
			path[i]=toupper(path[i]);
		}
		else if (path[i-1] == ' ')
		{
			path[i]=toupper(path[i]);
		}
	}

}

///////////////////////////////////////////////////////////////////////////////////////////////////////////



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
	cout<<"\n                          *o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*o*     "<<endl;
	system("pause");
	system("cls");

}
void farewell(){
    cout<<endl<<"#######################################################################"<<endl;
    cout<<"#                Thank you for using our service.                     #"<<endl;
    cout<<"#                          Good Bye                                   #"<<endl;
    cout<<"#######################################################################"<<endl;
}

