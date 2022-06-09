class Solution {

public:

    int mostWordsFound(vector<string>& sentences) {

        int count = 0;

        int space = 0;

        for(int i = 0; i < sentences.size(); i++){

            for(int j = 0; j < sentences[i].size(); j++){

                if(sentences[i][j] == ' '){

                    space++;

                }

            }

            if(space > count){

                count = space;

            }

            space = 0;

        }

        return count+1;

    }

};