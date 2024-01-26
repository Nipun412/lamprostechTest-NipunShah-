/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;

struct Job {
    int deadline, duration,idx;

    bool operator<(Job jo) const {
        return deadline < jo.deadline;
    }
};

vector<int> compute_schedule(vector<Job> jobs) {
    // sort the jobs
    sort(jobs.begin(), jobs.end());
    
    vector<int> schedule;
    int n=jobs.size();
    for(int i=0;i<n;i++){
      schedule.push_back(jobs[i].idx);
    }
    return schedule;
}

int main()
{
      int n;
    //   taking input n
    
      cin>>n;
      vector<Job> jobs(n);
      for(int i=0;i<n;i++) {
          cin>>jobs[i].duration>>jobs[i].deadline;
      }
      
      for(int i=0;i<n;i++) {
          jobs[i].idx=i;
      }
      
      vector<int> schedule = compute_schedule(jobs);

      for(auto i:schedule)
      cout<<i+1<<" ";
      cout<<endl;
      return 0;
}