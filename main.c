#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int Fibo(int n){
  double phi= 1.618034;
  int answer = ((pow(phi,n)-pow(1-phi,n))/sqrt(5));
  return answer;
}

int Combination(int n,int r){
  int i,facn = 1,facr = 1,facnr=1,answer;
  for (i = 1; i <= n; i++) {
    facn *= i;
  }
  for (i = 1; i <= r; i++) {
    facr *= i;
  }
  for (i = 1; i <= (n-r); i++) {
    facnr *= i;
  }
  answer = facn/(facnr*facr);
  return answer;
}

int GCD(int x,int y){
  int answer;
  while(x!=y){
    if(x > y){
      x-=y;
    }
    else{
      y-=x;
    }
  }
  answer = x;
  return answer;
}

int Random(){
  int answer = rand() % 100 + 1;
  srand(time(NULL));
  return answer;
}
int menu(){
  int chose;
  printf("\n************************************\n");
  printf("************** -MENU- **************\n");
  printf("************************************\n");
  printf("1. Fibonacci\n");
  printf("2. Combination number\n");
  printf("3. Find GCD(x,y)\n");
  printf("4. Random Guess Number\n");
  printf("0. exit\n");
  printf("************************************\n");
  printf("select menu\n");
  chose = get_int(0,4);
  return chose;
}

int get_int(int min,int max){
  int num;
  do{
    printf("Please input only %d to %d : ",min,max);
    scanf("%d",&num);
  }while(num>= max+1||num<=min-1);
  return num;
}

int main() {
  int chose,answer,n,r,x,y;
  do{
    chose = menu();
    if(chose==1){
      char back;
      do{
        printf("************************************\n");
        printf("------------------------------------\n");
        printf("************************************\n");
        printf("*********** -Fibonacci- ************\n");
        printf("************************************\n");
        printf("your number\n");
        n = get_int(0,100);
        answer = Fibo(n);
        printf("Your Fibonacci : %d\n",answer);
        printf("************************************\n");
        do{
          printf("want to back(y/n) : ");
          scanf("%s",& back);
        }while(back!='y'&&back!='n');
      }while(back!='y');
      printf("************************************\n");
    }
    if(chose==2){
      char back;
      do{
        printf("************************************\n");
        printf("------------------------------------\n");
        printf("************************************\n");
        printf("******* -Combination number- *******\n");
        printf("************************************\n");
        printf("Enter your n\n");
        n = get_int(0,10);
        printf("Enter your r\n");
        r = get_int(0,10);
        answer = Combination(n,r);
        printf("Your answer : %d\n",answer);
        printf("************************************\n");
        do{
          printf("want to back(y/n) : ");
          scanf("%s",& back);
        }while(back!='y'&&back!='n');
      }while(back!='y');
      printf("************************************\n");
    }if(chose==3){
      char back;
      do{
        printf("************************************\n");
        printf("------------------------------------\n");
        printf("************************************\n");
        printf("************** -GCD- ***************\n");
        printf("************************************\n");
        printf("Enter your x\n");
        x = get_int(0,100);
        printf("Enter your y\n");
        y = get_int(0,100);
        answer = GCD(x,y);
        printf("Your GCD : %d\n",answer);
        printf("************************************\n");
        do{
          printf("want to back(y/n) : ");
          scanf("%s",& back);
        }while(back!='y'&&back!='n');
      }while(back!='y');
      printf("************************************\n");
    }if(chose==4){
      
      char back;
      do{
        printf("************************************\n");
        printf("------------------------------------\n");
        printf("************************************\n");
        printf("********* -Random Number- **********\n");
        printf("************************************\n");
        answer = Random();
        printf("Random number : %d\n",answer);
        printf("************************************\n");
        do{
          printf("want to back(y/n) : ");
          scanf("%s",& back);
        }while(back!='y'&&back!='n');
      }while(back!='y');
      printf("************************************\n");
    }
  }while(chose!=0);
  printf("************************************\n");
  printf("********** -END PROGRAM- ***********\n");
  printf("************************************\n");
}
