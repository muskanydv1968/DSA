class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
      vector<int>st;
      for(int asteroidss:asteroids){
        while(!st.empty()&&st.back()>0&&  asteroidss<0 && st.back()<abs(asteroidss)){
            st.pop_back();
        }
        if(!st.empty()&&st.back()>0&&asteroidss<0&&st.back()==abs(asteroidss)){
            st.pop_back();
        }else if(st.empty()||st.back()<0||asteroidss>0){
            st.push_back(asteroidss);
        }
      }
      return st;  
    }
};