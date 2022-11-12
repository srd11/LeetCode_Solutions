class MedianFinder {
public:
    priority_queue<int> maxheap;
    priority_queue<int,vector<int>,greater<int>> minheap;
    
    MedianFinder() {
        //as we don't have to initialize anything we don't write anything in this
    }
    
    void addNum(int num) {
        int lsize = maxheap.size();
        int rsize = minheap.size();
        
        if(lsize == 0){
            maxheap.push(num);
        }
        
        else if(lsize ==  rsize){
            if(num < minheap.top()){
                maxheap.push(num);
            }
            else{
                int temp = minheap.top();
                minheap.pop();
                minheap.push(num);
                maxheap.push(temp);
            }
        }
        
        else{ //maxheap size is 1 greater than minheap size
            if(num <= maxheap.top()){
                int temp = maxheap.top();
                maxheap.pop();
                maxheap.push(num);
                minheap.push(temp);
            }
            else{
                minheap.push(num);
            }
        }
    }
    
    double findMedian() {
        int lsize = maxheap.size();
        int rsize =  minheap.size();
        
        if(lsize > rsize ) return maxheap.top();
        else{
            return (double)(maxheap.top()+minheap.top())/2;
        }
    }
};