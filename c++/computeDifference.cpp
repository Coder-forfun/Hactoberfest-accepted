#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
	// Add your code here
    Difference(vector<int> &arr_ele){ 
        this->elements=arr_ele;

    }

    int computeDifference(){
        int n=elements.size();
        int max=elements[0],min=elements[0] ;
        for(int j=0;j<n;j++){
            if(elements[j]<min){
                min=elements[j];
            }
            if(elements[j]>max){
                max=elements[j];
            }
        }
        maximumDifference=abs(max-min); 
        return maximumDifference;
    }
}; // End of Difference class

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
