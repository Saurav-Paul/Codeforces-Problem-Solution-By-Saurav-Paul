				/*Saurav Paul*/
#pragma GCC optimize("O3")
#include<bits/stdc++.h>
#define endl '\n'
#define loop(i,a,b)           for(ll i=a;i<=b;++i)
#define boost		          ios_base::sync_with_stdio(0);
#define eb                    emplace_back
#define mp                    make_pair
#define clr(x)                x.clear()
#define itoc(c)               ((char)(((int)'0')+c))
#define ctoi(c)               ((int)(((int)c)-'0'))
#define all(p)                p.begin(),p.end()

using ll = long long int ;
using namespace std;

int n,fx,fy,sx,sy;

int find_left(int x , int y){
	if(x==sx && y==sy)
		return 0;
	
	if(x==0 && y != n)
		y++;
	else if(y==n && x != n)
		x++;
	else if(y==0 && x > 0)
		x--;
	else if(x==n && y >0)
		y--;
	else
		assert(false);
	
	
	return 1 + find_left(x,y);
	
}

int find_right(int x , int y){
	
	if(x == sx && y == sy)
		return 0;
	if( y== 0 && x < n)
		x ++ ;
	else if(x == n && y < n)
		y ++ ;
	else if(x > 0 && y==n)
		x --;
	else if(x==0 && y > 0)
		y --;
	else
		assert(false);
	
	return 1 + find_right(x,y);
}


int main()
{
	/**
	 * 2 0 1 2 1
	 * 
	 * **/
	
	
	scanf("%d%d%d%d%d",&n,&fx,&fy,&sx,&sy);
	
	printf("%d",(int)min(find_left(fx,fy),find_right(fx,fy)));
	
	
    return 0;
}
