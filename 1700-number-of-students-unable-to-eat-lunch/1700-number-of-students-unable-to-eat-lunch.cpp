class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int preferenceCount[]={0,0};
    int eaten=0;
    for(int student:students) preferenceCount[student]++;
    for(int sandwich:sandwiches)
    {
        if(preferenceCount[sandwich]>0)
        {
            eaten++;
            preferenceCount[sandwich]--;
        }
        else break;
    }
    return (students.size()-eaten);
    }
    
};