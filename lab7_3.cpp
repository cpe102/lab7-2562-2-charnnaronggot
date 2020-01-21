#include<iostream>
 using namespace std;
 #include<string>

 int main()
 {
     int N;
     cout << "Enter your age : ";
     cin  >> N;
     if(N <=20)
     {
             int H;
             cout << "Enter your Height:";
             cin  >> H;

             { 
                 if(H<=160)
                     {
                         cout <<"Status: =  UNFRIEND";
                     }   
                 else
                     {
                         if(H < 175)
                             {
                                 cout <<"Status: =  FRIEND";  
                             }
                         else
                         {
                             int M;
                             cout <<"Enter your  Money:";
                             cin  >> M;
                             if(M>=69000000)
                             {
                                 cout <<"Status: = MARRIED";
                             }else
                             {
                                 cout <<"Status: = ONE-NIGHT-STAND";
                             }


                         }




                     }           
             }

     }else
     {
         if(N <30)
         {
            int L;
            cout <<"Enter Legacy:";
            cin  >>L;
            {if(L>10000000)
            {
             cout <<"Status: = BEST FRIEND";
            }else
            {
             cout <<"Status: = UNFRIEND";
            }
            }
         }else
         {
             cout << "Status: = UNFRIEND";
         }

     }

     return 0;
 }