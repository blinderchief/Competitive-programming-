class Solution {
public:
    int maximumLengthSubstring(string s) {
        int res=0;
        for(int i =0;i<s.size();i++){
            int cnta=0,cntb=0,cntc=0,cntd=0,cnte=0,cntf=0,cntg=0,;
            int cnth=0,cnti=0,cntj=0,cntk=0,cntl=0,cntm=0,cntn=0,;
            int cnto=0,cntp=0,cntq=0,cntr=0,cnts=0,cntt=0,cntu=0,;
            int cntv=0,cntw=0,cntx=0,cnty=0,cntz=0;
            int ans =0;
            for(int j =i;j<s.size();j++){
                if(s[j]=='a' && cnta<2){
                    ans++;
                    cnta++;
                }
                else if(s[j]=='b' && cntb<2){
                    ans++;
                    cntb++;
                }
                else if(s[j]=='c' && cntc<2){
                    ans++;
                    cntc++;
                }
                else if(s[j]=='d' && cntd<2){
                    ans++;
                    cntd++;
                }
                else if(s[j]=='e' && cnte<2){
                    ans++;
                    cnte++;
                }
                else if(s[j]=='f' && cntf<2){
                    ans++;
                    cntf++;
                }
                else if(s[j]=='g' && cntg<2){
                    ans++;
                    cntg++;
                }
                else if(s[j]=='h' && cnth<2){
                    ans++;
                    cnth++;
                }
                else if(s[j]=='i' && cnti<2){
                    ans++;
                    cnti++;
                }
                else if(s[j]=='j' && cntj<2){
                    ans++;
                    cntj++;
                }
                else if(s[j]=='k' && cntk<2){
                    ans++;
                    cntk++;
                }
                else if(s[j]=='l' && cntl<2){
                    ans++;
                    cntl++;
                }
                else if(s[j]=='m' && cntm<2){
                    ans++;
                    cntm++;
                }
    
                else if(s[j]=='n' && cntn<2){
                    ans++;
                    cntn++;
                }
                else if(s[j]=='o' && cnto<2){
                    ans++;
                    cnto++;
                }
                else if(s[j]=='p' && cntp<2){
                    ans++;
                    cntp++;
                }
                else if(s[j]=='q' && cntq<2){
                    ans++;
                    cntq++;
                }
                else if(s[j]=='r' && cntr<2){
                    ans++;
                    cntr++;
                }
                else if(s[j]=='s' && cnts<2){
                    ans++;
                    cnts++;
                }
                else if(s[j]=='t' && cntt<2){
                    ans++;
                    cntt++;
                }
                else if(s[j]=='u' && cntu<2){
                    ans++;
                    cntu++;
                }
                else if(s[j]=='v' && cntv<2){
                    ans++;
                    cntv++;
                }
                else if(s[j]=='w' && cntw<2){
                    ans++;
                    cntw++;
                }
                else if(s[j]=='x' && cntx<2){
                    ans++;
                    cntx++;
                }
                else if(s[j]=='y' && cnty<2){
                    ans++;
                    cnty++;
                }
                else if(s[j]=='z' && cntz<2){
                    ans++;
                    cntz++;
                }
                else{
                    break;
                }
            }
            res = max(res,ans);

        }
        return res;
        
    }
};