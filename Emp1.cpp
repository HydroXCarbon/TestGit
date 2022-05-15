#include<stdio.h>

#include<stdlib.h>

 int Login,logintest,returnlobby,switchcase1(),Login1(),Register1(),password[2],username[2];
 int main(void) 
 {
 	logintest = 0;
 	username[2] = 123;
 	password[2] = 123;
 	do{
 	returnlobby=0;
	printf("1.Login\n2.Register\n3.Quit");
	scanf("%d",&Login);
	switchcase1();
	if(logintest == 1)
	{
 	 Login1();
 	 logintest = 0;
	}
	}
	while(returnlobby == 1);
	return 0;

 }
 
 int switchcase1()
 {
 	switch(Login){
 		case 1 :
 			Login1();
			break;
		case 2 :
		 	Register1();
			break;
		case 3 :
		 	printf("Thank You");
			break;	
	    default :
	    	printf("Please try again\n");
	    	returnlobby=1;
	    	break;
	 }
	 return Login;
 }
 
int Login1()
 {
 	printf("Please enter username and password\nUsername :");
 	scanf("%d", &username[1]);
 	printf("Password :");
 	scanf("%d", &password[1]);
 	if(((username[1]==username[0])&&(password[1]=password[0]))||((username[1]==username[2])&&(password[1]=password[2])))
	 {
	 printf("Login Sucess");
	 } 
	else{
	 printf("Username or Password Wrong !!\nPlease try again\n");	
	 returnlobby = 1;
	 }
	 return returnlobby;
 }
 
 int Register1(){
 	printf("Please create username and password\nUsername :");
 	scanf("%d", &username[0]);
 	printf("Password :");
 	scanf("%d", &password[0]);
 	printf("Create ID successfully !!\n");
 	logintest = 1;
 	return username[0],password[0],logintest;
 } 
