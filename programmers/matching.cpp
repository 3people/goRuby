#include <iostream>
#include <string>
#include <vector>

using namespace std;

void lower(string &a){
    for(int i = 0; i < a.size(); i++)
    {
        if('A' <= a[i] && a[i] <= 'Z')
        {
            a[i] = a[i]-'A'+'a';
        }
    }
}

int solution(string word, vector<string> pages){
    int b_score[25] = {0};
    double res[25] = {0};
    vector<string> my_page[25];
    vector<string> out_page[25];
    for (int i = 0; i < pages.size(); i++)
    {
        int idx = 0;
        lower(pages[i]);
        lower(word);
        idx = pages[i].find("<meta property=\"og:url\"", idx);
        idx = pages[i].find("https://", idx);
        string url = "";
        for (int j = idx; pages[i][j] != '"' ; j++)
        {
            url += pages[i][j];
        }
        my_page[i].push_back(url);
        while (pages[i].find("<a href=", idx) != string::npos)
        {
            idx = pages[i].find("<a href=", idx);
            idx = pages[i].find("https://", idx);
            string link = "";
            for (int j = idx; pages[i][j] != '"'; j++)
            {
                link += pages[i][j];
            }
            out_page[i].push_back(link);
        }

        idx = 0;
        int word_cnt = 0;
        while (pages[i].find(word, idx) != string::npos)
        {
            bool not_word = false;
            idx = pages[i].find(word, idx);
            if(0 <= idx-1 && idx-1 < pages[i].size() && 'a' <= pages[i][idx-1] && pages[i][idx-1] <= 'z')
            {
                not_word = true;
            }
            idx += word.size();
            while(0 <= idx && idx < pages[i].size() && 'a' <= pages[i][idx] && pages[i][idx] <= 'z')
            {
                not_word = true;
                idx++;   
            }         
            if(not_word == false)
            {
                word_cnt++;
            }
        }   
        b_score[i] = word_cnt;
    }
    for (int i = 0; i < pages.size(); i++)
    {
        int link_cnt = 0;
        vector<int> link;
        for (int j = 0; j < pages.size(); j++)
        {
            if (i == j)
                continue;
            for (int k = 0; k < out_page[j].size(); k++)
            {
                if(my_page[i][0] == out_page[j][k]){
                    link.push_back(j);
                }
            }
        }
        res[i] = b_score[i];
        for (int j = 0; j < link.size(); j++)
        {
            if (b_score[link[j]] == 0 || out_page[link[j]].size() == 0)
                continue;
            double link_score = (double)b_score[link[j]] / out_page[link[j]].size();
            res[i] += link_score;
        }
    }
    double max_score = -1;
    int max_idx = -1;
    for (int i = 0; i < pages.size(); i++)
    {
        if(max_score < res[i]){
            max_score = res[i];
            max_idx = i;
        }
    }
    return max_idx;
}