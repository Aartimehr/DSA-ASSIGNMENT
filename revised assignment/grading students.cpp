vector<int> gradingStudents(vector<int> grades) {
    vector<int>output;
    for(auto i: grades)
    {
        if(i<38 || 5-i%5>=3)
        {
        output.push_back(i);
        }
        else
        {
            output.push_back(i+5-i%5);
        }
      }
      return output;
}
