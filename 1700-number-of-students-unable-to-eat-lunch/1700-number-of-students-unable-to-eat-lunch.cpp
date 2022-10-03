void distribute(vector<int>& students,vector<int>& sandwiches){
    for(int i=0;i<students.size();i++){
        if(students[i]==sandwiches[0]){
            students.erase(students.begin()+i);
            sandwiches.erase(sandwiches.begin());
            return;
        }
    }
    return;
}


class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        
         while(students.size()!=0){
             int flag=0;
             for(int i=0;i<students.size();i++){
                 if(students[i]==sandwiches[0]){     
                 flag=1;
                 distribute(students,sandwiches);
                 break;
                 }
             }
             if(flag==0){
                 return students.size();
             }
             flag=0;
         } 
        return students.size();
    }
};