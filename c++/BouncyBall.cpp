//pased
//https://codeforces.com/contest/1807/problem/F
//https://codeforces.com/submissions/juancs#
#include <bits/stdc++.h>
#define ll long long
#define lli long long int
#define el "\n"

using namespace std;
struct point{
    int x,y;
    point(int x, int y):x(x),y(y){}
    point operator-(point p){return point(x-p.x,y-p.y);}
    int operator%(point p){return x*p.y-y*p.x;}
    int operator*(point p){return x*p.x+y*p.y;}
 
};
void solve()
{
    int n,m,sx,sy,ex,ey;
    cin>>n>>m>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    // d(s);
    int esquinas = 0;
    bool found = 0;
    point st(sx,sy),ed(ex,ey);
    int cont = 0;
    if(st.x == ed.x &&st.y == ed.y){
        cout<<"0\n";return;
    }
    while(esquinas <3&&cont < 2e5){
        // d(st.x),d(st.y),d(s),d(found);
            // d(esquinas);
        // bool diag = 0;
        if((st.x == 1 && st.y == m)||(st.x == 1&& st.y == 1)||(st.x == n&&st.y ==1)||(st.x == n && st.y == m)){
            esquinas++;
            // diag = 1;
        }
        if(s == "DR"){
            point p2 = st;
            if(n-st.x < m-st.y){
                s = "UR";
            }else if(n-st.x> m-st.y){
                s = "DL";
            }else s = "UL";
            int dxx = min(n-st.x,m-st.y);
 
            p2 = point(st.x + dxx,st.y + dxx);
            point ab = ed - st, bc = p2-ed;
if((st.x!=p2.x||st.y!=p2.y)&&ab % bc == 0&&ab*bc>=0){
                found = 1;
                break;
            }
            st = p2;
        }else if(s == "DL"){
            point p2 = st;
            if(n-st.x< st.y-1){
                s = "UL";
            }else if(n-st.x> st.y-1){
                s = "DR";
            }else s = "UR";
            int dxx = min(n-st.x,st.y-1);
 
            p2 = point(st.x + dxx,st.y - dxx);
            point ab = ed - st, bc = p2-ed;
if((st.x!=p2.x||st.y!=p2.y)&&ab % bc == 0&&ab*bc>=0){
                found = 1;
                break;
            }
            st = p2;
        }else if(s == "UR"){
            point p2 = st;
            if(st.x-1< m-st.y){
                s = "DR";
            }else if(st.x-1 > m-st.y){
                s = "UL";
            }else s = "DL";
            int dxx = min(st.x-1,m-st.y);
 
            p2 = point(st.x - dxx,st.y + dxx);
            point ab = ed - st, bc = p2-ed;
if((st.x!=p2.x||st.y!=p2.y)&&ab % bc == 0&&ab*bc>=0){
                found = 1;
                break;
            }
            st = p2;
 
        }else if(s == "UL"){
            point p2 = st;
            if(st.x-1< st.y-1){
                s = "DL";
            }else if(st.x-1 > st.y-1){
                s = "UR";
            }else s = "DR";
            int dxx = min(st.x-1,st.y-1);
 
            p2 = point(st.x - dxx,st.y - dxx);
            point ab = ed - st, bc = p2-ed;
if((st.x!=p2.x||st.y!=p2.y)&&ab % bc == 0&&ab*bc>=0){
                found = 1;
                break;
            }
            st = p2;
 
        }
        cont++;
    }
    if(found){cout<<cont<<el;}
    else cout<<"-1\n";
}
int main(){
    int t;cin>>t;
    while(t--)
        solve();
}
