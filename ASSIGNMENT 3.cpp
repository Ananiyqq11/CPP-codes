#include <iostream>
#include <cstring>
#include <ctime>
#include <cstdlib>
using namespace std;

void menu(char [][8],char [][40],char [],char [][11],char [][80],char [][8],char [][8],char [][80],char [][20],char [][11],char [][100],int&,int&);
int mainmenu();
bool artistManager(char [][8],char [][40],char [],char [][11],char [][80],char [][8],char [][8],char [][80],char [][20],char [][11],char [][100],int&,int&);
int artistmenu();
int viewArtistMenu();
bool artistViewer(const char [][8], const char [][40],  const char[], const char [][11], const char [][80], int );
void displayAllArtist(const char [][8], const char names[][40], const char [], const char [][11], const char [][80], int );
void viewArtistBySearch(const char [][8], const char [][40], const char [], const char[][11], const char [][80], int);
void searchArtist( const char [][8],int [], const char names[][40],int &noResult, int nArtist);
void searchArtistByName(const char [][40], int nArtist, const char target[],  int result[], int  &noResult);
void searchArtistById(const char artistIds[][8], int nArtist, const char target[],  int result[], int & noResult);
void displaySearchResult(const char artistIds[][8], const char names[][40], const char genders[], const char phones[][11], const char emails[][80], int nArtist, int result[], int noResult);
bool artistEditor(char[][8], char[][40], char [], char [][11], char [][80], char [][8], char [][8], char [][80], char [][20], char [][11], char [][100], int & , int & );
int editArtistMenu();
bool addArtist(char [][8], char[][40], char[], char[][11], char[][80], int &);
void getArtistName (char []);
void getArtistInfo (char [], char & , char [], char []);
bool validateName (const char []);
void formatName (char []);
char getArtistGender ();
void editArtist(const char [][8], char [][40], char [], char [][11], char [][80], int );
void deleteArtist(char [][8], char [][40], char [], char [][11], char [][80], char [][8], char [][8], char [][80], char [][20], char [][11], char [][100], int & , int & );
void Sort(char [][8], char [][40], char [], char [][11], char [][80], int );
bool validateGender (char );
void getArtistPhone (char []);
bool validatePhone (const char []);
void getArtistEmail (char []);
bool validateEmail (const char []);
void formatEmail (char []);
void editArtist(const char [][8], char [][40], char [], char [][11], char [][80], int );
int selectArtist(const char [][8], const char [][40], const int [], int,int nArtist );
bool editArtistInfo(const char artistId[], char name[], char &gender, char phone[],char email[]);
void displayOneArtist(const char artistId[], const char name[], char  gender, const char phone[], const char email[]);
void welcome();
void loading(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], char artistIdRefs[][8], char albumIds[][8], char titles[][80], char recordFormats[][20], char datePublished[][11], char paths[][100],int & nArtist, int & nAlbum);
void loading(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], int & nArtist);
void loading(char artistIdRefs[][8], char albumIds[][8], char titles[][80], char recordFormats[][20], char datePublished[][11], char paths[][100],  int & nAlbum);
void Sort(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], int nArtist);

void welcome()
{
  cout<<"welcome to Artist and Album management system program."<<endl;
cout<<"Please ";
}
void loading(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], char artistIdRefs[][8], char albumIds[][8], char titles[][80], char recordFormats[][20], char datePublished[][11], char paths[][100],int & nArtist, int & nAlbum)
{
    loading(artistIds,names,genders,phones,emails,nArtist);
    loading(artistIdRefs,albumIds,titles,recordFormats,datePublished,paths,nAlbum);
    return;
}

void loading(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], int & nArtist)
{

}

void loading(char artistIdRefs[][8], char albumIds[][8], char titles[][80], char recordFormats[][20], char datePublished[][11], char paths[][100],  int & nAlbum)
{

}

void Sort(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], int nArtist)
{
//    char temp[80],gen;
//    for(int i=1;i<nArtist;i++)
//    {
//        for(int j=0;j<nArtist;j++)
//        {
//            if(strcmp(names[j],names[j+1])>0)
//            {
//                strcpy(temp,artistIds[j]);
//                strcpy(artistIds[j],artistIds[j+1]);
//                strcpy(artistIds[j+1],temp);
//
//
//                strcpy(temp,names[j]);
//                strcpy(names[j],names[j+1]);
//                strcpy(names[j+1],temp);
//
//                gen=genders[j];
//                genders[j]=genders[j+1];
//                genders[j+1]=gen;
//
//                 strcpy(temp,phones[j]);
//                strcpy(phones[j],phones[j+1]);
//                strcpy(phones[j+1],temp);
//
//                // strcpy(temp,emails[j]);
//                swap(emails[j],emails[j+1]);
//                //strcpy(emails[j+1],temp);
//            }
//        }
//    }
}

int mainmenu()
{
    int ch;
    cout<<"MAIN MENU"<<endl;
    cout<<"press[1].Manage Artist"<<endl;
    cout<<"press[2].Manage Album"<<endl;
    cout<<"press[3].Exit"<<endl;
    do{
    cout<<"Enter your choice: ";
    cin>>ch;
    if(ch<=0||ch>3){
        cin.clear();
        cin.ignore();
        cout<<"INVALID ENTRY Please enter a valid choice."<<endl;
       }
    }while(ch<=0||ch>3);
    return ch;
}

int artistmenu()
{
   int ch;
    cout<<"ARTIST MANAGER MENU"<<endl;
    cout<<"press[1].View Artist"<<endl;
    cout<<"press[2].Edit Artist"<<endl;
    cout<<"press[3].Back to menu"<<endl;
    cout<<"press[4].Exit"<<endl;
    do{
    cout<<"Enter your choice: ";
    cin>>ch;
    if(ch<=0||ch>4){
        cin.clear();
        cin.ignore();
        cout<<"Error!!Please enter a valid choice."<<endl;
         }
    }while(ch<=0||ch>4);
    return ch;
}

int viewArtistMenu()
{
    int ch;
     cout<<"ARTIST VIEW MENU"<<endl;
    cout<<"press[1].View all Artist"<<endl;
    cout<<"press[2].View by search"<<endl;
    cout<<"press[3].Back to menu"<<endl;
    cout<<"press[4].Exit"<<endl;
    do{
    cout<<"Enter your choice: ";
    cin>>ch;
    if(ch<=0||ch>4){
        cin.clear();
        cin.ignore();
        cout<<"Error!!Please enter a valid choice."<<endl;
        }
    }while(ch<=0||ch>4);
    return ch;
}

int editArtistMenu()
{
int ch;
     cout<<"ARTIST EDIT MENU"<<endl;
    cout<<"press[1].Add Artist"<<endl;
    cout<<"press[2].Edit Artist"<<endl;
    cout<<"press[3].Delete  Artist"<<endl;
    cout<<"press[4].Back to menu"<<endl;
    cout<<"press[5].Exit"<<endl;
    do{
    cout<<"Enter your choice: ";
    cin>>ch;
    if(ch<=0||ch>5){
        cin.clear();
        cin.ignore();
        cout<<"Error!!Please enter a valid choice."<<endl;
       }
    }while(ch<=0||ch>5);
    return ch;
}

bool validateEmail (const char email[])
{
   if(email[0]=='@'||email[0]=='.')
       return false;
    for(int i=1;i<strlen(email);i++){
        if(email[i]=='@')
           return true;}
    return false;
}

void formatEmail (char email[])
{
    if(email[0]>'Z')
        email[0]-=32;
   }

bool validateName (const char name[])
{
    for(int i=0;i<strlen(name);i++){
    if(isdigit(name[i])||name[0]==' ')
        return false;
        }
   return true;
}

void formatName (char name[])
{
    if(name[0]>'Z')
        name[0]-=32;
    for(int i=1;i<strlen(name);i++){
            if(name[i]<'a')
               name[i]+=32;
        if(name[i]==' ')
        {
           if(name[i+1]>'Z')
        name[i+1]-=32;
        }
    }
 }

bool validateGender (char gender)
{
    if(gender=='M'||gender=='F'||gender=='m'||gender=='f'){
       return true;}
    return false;
}

bool validatePhone (const char phone[])
{
   for(int i=0;i<strlen(phone);i++){
   if(isalpha(phone[i]))
        return false;}
   return true;
}

void getArtistName (char name[])
{
   bool valid=true;
   do{
    cout<<"Enter the Artists Full name: ";
    cin.getline(name,39);
    valid=validateName(name);
    if(valid==false){
               cin.clear();
    cin.ignore();
        cout<<"Error!!Artist name is not valid. "<<endl;
    }
   }while(valid==false);
   formatName(name);
  }

char getArtistGender ()
{
    char gender;
    bool valid;
    do{
    cout<<"Enter the gender of the Artist(M for male of F for female): ";
    cin>>gender;
   valid=validateGender(gender);
   if(valid==false){
       cin.clear();
    cin.ignore();
        cout<<"Error!!Artist gender is not valid. "<<endl;}
    }while(valid==false);
    if(gender>'Z')
            gender-=32;
    return gender;
    }
    
void getArtistPhone (char phone[])
{
    bool valid=true;
   do{
    cout<<"Enter the Artists phone(09...): ";
    cin.getline(phone,11);
    valid=validatePhone(phone);
    if(valid==false){
        cin.clear();
        cin.ignore();
        cout<<"Error!!Artist phone number is not valid. "<<endl;
    }
   }while(valid==false);
  
}

void getArtistEmail (char email[])
{
    bool valid=true;
    do{
    cout<<"Enter the Artists email: ";
    cin.getline(email,79);
    valid=validateEmail(email);
    if(valid==false){
        cin.clear();
        cin.ignore();
        cout<<"Error!!Artist email is not valid. "<<endl;
    }
   }while(valid==false);
   formatEmail (email);
  
}

void getArtistInfo (char name[], char & gender, char phone[], char email[])
{
    cin.clear();
    cin.ignore();
    getArtistName(name);
    gender=getArtistGender();
    cin.clear();
    cin.ignore();
    getArtistPhone(phone);
    getArtistEmail(email);
   
}

void menu(char artistIds[][8],char names[][40],char genders[],char phones[][11],char emails[][80],char artistIdsRefs[][8],char albumIds[][8],char titles[][80],char recordFormats[][20],char datePublished[][11],char paths[][100],int&nArtist,int&nAlbum)
{
    int ch;
    bool exit;

   do{
   ch=mainmenu();
   if(ch==1){
    system ("cls");
   exit=artistManager(artistIds,names,genders,phones,emails,artistIdsRefs,albumIds,titles,recordFormats,datePublished,paths,nArtist,nAlbum);
   }
  // else if(ch==2){
  //system ("cls");
   //exit=albumManager(artistIds,artistNames,nArtist,artistIdsRef,albumIds,titles,recordFormats,datePublisheds,paths,nAlbum);}
  else if(ch==3)
     return;
  }while (exit==true);

}

bool artistManager(char artistIds[][8],char names[][40],char genders[],char phones[][11],char emails[][80],char artistIdsRefs[][8],char albumIds[][8],char titles[][80],char recordFormats[][20],char datePublished[][11],char paths[][100],int&nArtist,int&nAlbum)
{
  int ch;
  ch=artistmenu();
  bool exit=true;
  if(ch==1){
    system ("cls");
    exit=artistViewer(artistIds,names,genders,phones,emails,nArtist);}
   else if(ch==2){
        system ("cls");
    exit=artistEditor(artistIds,names,genders,phones,emails,artistIdsRefs,albumIds,titles,recordFormats,datePublished,paths,nArtist,nAlbum);
   }
      return exit;
}

bool artistViewer(const char artistIds[][8], const char names[][40],  const char genders[], const char phones[][11], const char emails[][80], int nArtist)
{
    int ch;
   do{
    ch=viewArtistMenu();
    if(ch==1){
            system ("cls");
        displayAllArtist(artistIds,names,genders,phones,emails,nArtist);}
  else if (ch==2){
        system ("cls");
       viewArtistBySearch(artistIds,names,genders,phones,emails,nArtist);}
   else if (ch==3)
       return true;
   }while(ch<4);
   return false;
}

bool artistEditor(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], char artistIdsRefs[][8], char albumIds[][8], char titles[][80], char recordFormats[][20], char datePublished[][11], char paths[][100], int & nArtist, int & nAlbum)
{
   int ch;
   bool valid;
   do{
    ch=editArtistMenu();
    if(ch==1){
            system ("cls");
    valid=addArtist(artistIds,names,  genders,  phones,  emails,nArtist);
    if(valid==true)
        cout<<"you have saved Artist successfully."<<endl;
         system("pause");
    system ("cls");
    }
    else if (ch==2){
            system ("cls");
      editArtist(artistIds,names,genders,phones,emails,nArtist);
   }
  //  else if (ch==3){
//   system ("cls");
    //    deleteArtist(artistIds,names,genders,phones,emails,artistIdsRefs,albumIds,titles,recordFormats,datePublished,paths,nArtist,nAlbum);}
    else if (ch==4)
       return true;
   }while(ch<5);
    return false;
}

void displayAllArtist(const char artistIds[][8], const char names[][40], const char genders[], const char phones[][11], const char emails[][80], int nArtist)
{

   if(nArtist==0)
      cout<<"No artist has been saved."<<endl;
    for(int j=0;j<nArtist;j++){
        cout<<j+1<<"."<<artistIds[j]<<"  ";
        cout<<names[j]<<"  ";
        cout<<genders[j]<<"  ";
        cout<<phones[j]<<"  ";;
        cout<<emails[j]<<"  ";;
        cout<<endl;
    }
    system("pause");
    system ("cls");
 
 }

void viewArtistBySearch(const char artistIds[][8], const char names[][40], const char genders[], const char phones[][11], const char emails[][80], int nArtist)
{
 int noResult=0,result[999];
searchArtist(artistIds,result,names,noResult,nArtist);
displaySearchResult(artistIds,names,genders,phones,emails,nArtist,result,noResult);
 system("pause");
    system ("cls");

}

void searchArtist( const char artistIds[][8],int result[], const char names[][40],int &noResult, int nArtist)
{
  char target[100];
  cin.clear();
  cin.ignore();
  cout<<"Enter the first few letter of name or ID: ";
  cin.getline(target,99);
 if(isalpha(target[0]))
searchArtistByName(names,nArtist,target,result,noResult);
  else
    searchArtistById(artistIds,nArtist,target,result,noResult);
  
}

void searchArtistByName(const char names[][40], int nArtist, const char target[],  int result[], int  &noResult)
{
int x=0;
char nam[40];
bool z;
int len=strlen(target);
for(int i=0;i<nArtist;i++){
   for(int j=0;j<39;j++){
    nam[j]=names[i][j];
   }
   ////z=strnicmp(nam,target,len);
   if(z==0)
   {
    result[x]=i;
    noResult++;
    x++;
   }
}
for(int i=nArtist;i<999;i++)
{
    result[i]=0;
}

}

void searchArtistById(const char artistIds[][8], int nArtist, const char target[],  int result[], int &noResult)
{
    int x=0;
for(int i=0;i<nArtist;i++)
{
   if(target==artistIds[i])
   {result[x]==i;
    noResult++;
    x++;}
}

}

void displaySearchResult(const char artistIds[][8], const char names[][40], const char genders[], const char phones[][11], const char emails[][80], int nArtist,int result[], int noResult)
{
    int p;
    if(noResult==0)
        cout<<"Nothing found with the given artist information: "<<endl;
    else{
        for(int i=0;i<noResult;i++){
            p=result[i];
            cout<<i+1<<"."<<artistIds[p]<<" "<<names[p]<<" "<<genders[p]<<" "<<phones[p]<<" "<<emails[p]<<endl;
        }
    }


}

bool addArtist(char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], int & nArtist)
{
 int x,p;
 char artistId[8];
 srand(time(0));
 char name[40],gender,phone[11],email[80];
 getArtistInfo (name,gender,phone,email);

   x=nArtist;
   nArtist++;
  for(int i=0;i<40;i++)
    names[x][i]=name[i];
    genders[x]=gender;
   for(int i=0;i<=11;i++)
        phones[x][i]=phone[i];
    for(int i=0;i<80;i++)
         emails[x][i]=email[i];

    artistId[0]='a';
    artistId[1]='r';
    artistId[2]='t';
    p=rand()%9999+1000;

//    artistId+=to_string(p);


 //Sort(artistIds,names,genders,phones,emails,nArtist);
return true;
}

void editArtist(const char artistIds[][8], char names[][40], char genders[], char phones[][11], char emails[][80], int nArtist)
{
   int noResult=0,result[999],x;
   bool valid;
   char artistId[8],name[40],gender,phone[11],email[80];
   searchArtist(artistIds,result,names,noResult,nArtist);
      displaySearchResult(artistIds,names,genders,phones,emails,nArtist,result,noResult);
      if(noResult>0){
   x=selectArtist(artistIds,names,result,noResult,nArtist);

    for(int i=0;i<8;i++)
        artistId[i]=artistIds[x][i];
     for(int i=0;i<40;i++)
    name[i]=names[x][i];
    gender=genders[x];
   for(int i=0;i<=11;i++)
        phone[i]=phones[x][i];
    for(int i=0;i<80;i++)
        email[i]=emails[x][i];

valid=editArtistInfo(artistId,name,gender,phone,email);
       for(int i=0;i<40;i++)
    names[x][i]=name[i];

    genders[x]=gender;

   for(int i=0;i<=11;i++)
        phones[x][i]=phone[i];
    for(int i=0;i<80;i++)
        emails[x][i]=email[i];

//Sort(artistIds, names, genders,phones,emails,nArtist);
   if(valid==true)
      cout<<"Artist information has been changed successfully."<<endl;
   else
    cout<<"Artist information has not been changed."<<endl;
    system("pause");
   system("cls");
      }
}

int selectArtist(const char artistIds[][8], const char names[][40], const int result[], int noResult,int nArtist)
{
    int a,x;
    if(result[0]==0&&result[1]==0)
        return 0;
    else{
    do{
    cout<<"Choose the artist name to edit(press 1 for first,2 for second,..): ";
    cin>>x;
    if(result[x-1]==0)
        cout<<"error!!enter a valid choice."<<endl;
    }while(result[x]==0);
    a=result[x-1];
    return a;
    }
}

bool editArtistInfo(const char artistId[], char name[], char &gender, char phone[],char email[])
{
    int ch,counT=0;
    char nam[40],gende,phon[11],emai[80];
    for(int i=0;i<40;i++)
    nam[i]=name[i];
    gende=gender;
   for(int i=0;i<=11;i++)
        phon[i]=phone[i];
    for(int i=0;i<80;i++)
        emai[i]=email[i];
    do{
    cout<<"press[1].name "<<endl;
    cout<<"press[2].gender "<<endl;
    cout<<"press[3].phone"<<endl;
    cout<<"press[4].email"<<endl;
    cout<<"press[5].exit"<<endl;
    do{
    cout<<"What do you want to edit:";
    cin>>ch;
    if(ch<1||ch>5)
        cout<<"Error!!Enter a valid choice ";
    }while(ch<1||ch>5);
     cin.clear();
  cin.ignore();
    if(ch==1){
        counT++;
       getArtistName(name);}
    else if(ch==2){
            counT++;
        gender=getArtistGender();
        }
     else if(ch==3){
            counT++;
          getArtistPhone(phone);}
       else if(ch==4){
            counT++;
    getArtistEmail(email);}
    }while (ch<5);
   if(counT>0){
       displayOneArtist(artistId,name,gender,phone,email);
       return true;}

    return false;
}

void displayOneArtist(const char artistId[], const char name[], char  gender, const char phone[], const char email[])
{
      for(int i=0;i<8;i++)
        cout<<artistId[i]<<" ";
       for(int i=0;i<strlen(name);i++)
    cout<<name[i];
    cout<<" ";
    cout<<gender;
    cout<<" ";
   for(int i=0;i<strlen(phone);i++)
        cout<<phone[i];
        cout<<" ";
    for(int i=0;i<strlen(email);i++)
        cout<<email[i];
        cout<<endl;
        
}

int main()
{
    char artistIds[1000][8],names[1000][40],genders[1000],phones[1000][11],emails[1000][80],artistIdsRefs[1000][8],albumIds[1000][8],titles[1000][80],recordFormats[1000][20],datePublished[1000][11],paths[1000][100];
    int nArtist=0,nAlbum;
    welcome();
    system("pause");
    system("cls");
    loading(artistIds,names,genders,phones,emails, artistIdsRefs,albumIds,titles,recordFormats,datePublished,paths,nArtist,nAlbum);
    menu(artistIds,names,genders,phones,emails,artistIdsRefs,albumIds,titles,recordFormats,datePublished,paths,nArtist,nAlbum);

    return 0;
}
