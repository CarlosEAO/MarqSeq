#include <bits/stdc++.h>
using namespace std;

int main(){
    long long N = 2805907 ;

    long long total0 = 100000;
    long long total1 = total0+10000*26;
    long long total2 = total1+1000*26*26;
    long long total3 = total2+100*26*26*26;
    long long total4 = total3+10*26*26*26*26;
    long long total5 = total4+26*26*26*26*26;
    N = total5;

    if(N>total5) cout <<"OJO";
    cout<<"N: "<<N<<endl;
    long long totalNumbersPerLetterPortion = 1;
    long long letterPortionSize;

    if(N<=total0){
        totalNumbersPerLetterPortion = 100000;
        letterPortionSize = 0;
    }
    else if(N<=total1){
        N-=total0;
        totalNumbersPerLetterPortion = 10000;
        letterPortionSize = 1;
    }
    else if(N<=total2){
        N-=total1;
        totalNumbersPerLetterPortion = 1000;
        letterPortionSize = 2;

    }
    else if(N<=total3){
        N-=total2;
        totalNumbersPerLetterPortion = 100;
        letterPortionSize = 3;

    }
    else if(N<=total4){
        N-=total3;
        totalNumbersPerLetterPortion = 10;
        letterPortionSize = 4;
    }
    else {
        N-=total4;
        letterPortionSize = 5;
    }

    long long letterPatternInt = (N-1)/totalNumbersPerLetterPortion; 
    long long numberPortion =  (N-1)%totalNumbersPerLetterPortion;
    
    string letterPortion;
    
    for(int i=0; i<letterPortionSize; i++){
        letterPortion+= (letterPatternInt%26)+'A';
        letterPatternInt/=26;
    }
    cout<<numberPortion<<letterPortion;
    
  
  return 0;
}
