#include <iostream>
using namespace std;

int q=1;
void F(int x,int y,int A[12][12],int m,int n){
	
	if (A[m+x][n+y]==0){
		cout<<q<<".("<<m+x-1<<','<<n+y-1<<')'<<endl;
		A[m+x][n+y]=q;
		q++;
		
	}	
}

int main() {
		
	int A[12][12];
	int m,n;	
	m++;
	n++;
	
	cout<< "enter cordinates of the horse (separated by space) : "; 
	cin>>m>>n;
	
	
	while (true) {
		
	m++;
	n++;
	
	q=1;	
	
	for(int i=0;i<12;i++){
		for(int j=0;j<12;j++){
			A[i][j]=1;
		}
	}	
	for(int i=2;i<10;i++){
		for(int j=2;j<10;j++){
			A[i][j]=0;	
		}
	}
	
	A[m][n]=9;


//	if (A[m+1][n+2]==0){
//		cout<<q<<".("<<m<<','<<n+1<<')'<<endl;
//		A[m+1][n+2]=q;
//		q++;	
//	}
//	if (A[m+2][n+1]==0){
//		cout<<q<<".("<<m+1<<','<<n<<')'<<endl;
//		A[m+2][n+1]=q;
//		q++;
//	}
//	if (A[m+2][n-1]==0){
//		cout<<q<<".("<<m+1<<','<<n-2<<')'<<endl;
//		A[m+2][n-1]=q;
//		q++;
//	}
//	if (A[m+1][n-2]==0){
//		cout<<q<<".("<<m<<','<<n-3<<')'<<endl;
//		A[m+1][n-2]=q;
//		q++;
//	}
//	if (A[m-1][n-2]==0){
//		cout<<q<<".("<<m-2<<','<<n-3<<')'<<endl;
//		A[m-1][n-2]=q;
//		q++;
//	}
//	if (A[m-2][n-1]==0){
//		cout<<q<<".("<<m-3<<','<<n-2<<')'<<endl;
//		A[m-2][n-1]=q;
//		q++;
//	}
//	if (A[m-2][n+1]==0){
//		cout<<q<<".("<<m-3<<','<<n<<')'<<endl;
//		A[m-2][n+1]=q;
//		q++;
//	}
//	if (A[m-1][n+2]==0){
//		cout<<q<<".("<<m-2<<','<<n+1<<')'<<endl;
//		A[m-1][n+2]=q;
//		q++;
//	}
//	--------------------------------------------------------------
	F(1,2,A,m,n);
	F(2,1,A,m,n);
	F(2,-1,A,m,n);
	F(1,-2,A,m,n);
	F(-1,-2,A,m,n);
	F(-2,-1,A,m,n);
	F(-2,1,A,m,n);
	F(-1,2,A,m,n);
	
	
	
	
	for(int j=9;j>=2;j--){
		for(int i=2;i<10;i++){
			if (A[i][j]==0){
//				cout<<A[i][j];
				cout<<'*';
			}
			else if(i==m && j==n){
//				cout<<A[i][j];
				cout<<'#';
			}
			else{
				cout<<A[i][j];
			}
		}
		cout<<endl;
	}
	
	cout<<"enter new cordinates (choose one of the items, separated by space ) : ";
//	cin>>m>>n;
	
	while (true){
		cin>>m>>n;
		m++;
		n++;
		if (A[m][n]==0 || m<2 || m>9 || n<2 || n>9){
			cout<<"try again: ";
		}
		else{
			m--;
			n--;
			break;
		}
	}
	
	
	
}
	
	return 0;
}